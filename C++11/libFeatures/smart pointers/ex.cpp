#include <memory>
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

struct Foo{
    static int obj_number;
    int my_number;
    Foo(){
        obj_number += 1;
        my_number = obj_number;
    }
    ~Foo(){
        std::cout<<"I just got deleted, #"<<my_number<<"."<<std::endl;
    }
    void bar(){
        std::cout<<"My number is "<<my_number<<"."<<std::endl;
    }


};

int Foo::obj_number = 0;

void thread_func(std::shared_ptr<Foo> p) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::shared_ptr<Foo> thread_p = p; //This is thread safe now. use_count is incremented.

    {
        static std::mutex io_mutex;
        std::lock_guard<std::mutex> lk(io_mutex);
        std::cout
            <<"Local pointer in the thread: thread_p.get() = "<<thread_p.get()
            <<" thread_p.use_count() = "<<thread_p.use_count()
            <<std::endl;
    }

}

std::weak_ptr<int> weak;

void observe_weak() {
    std::cout<< "Use count is: "<<weak.use_count()<<" : ";
    if (weak.lock()) {
        std::cout<<*(weak.lock())<<std::endl;
    }
    else {
        std::cout<<"Expired."<<std::endl;
    }
}

int main() {
    std::cout<<"---------------Unique PTR tryout"<<std::endl;
    {
        std::unique_ptr<Foo> u1 {new Foo{}}; //u1 owns a Foo.
        u1->bar();

        std::unique_ptr<Foo> u2 {std::move(u1)}; //ownership is now u2's.
        u2->bar();
        {
            std::unique_ptr<Foo> u {new Foo{}};
            u->bar();
        }
        u1 = std::move(u2);//ownership is now u1's. u2 just got deleted.
        u1->bar();
    }
    std::cout<<"---------------Unique PTR tryout"<<std::endl;
    
    std::cout<<"---------------Shared PTR tryout"<<std::endl;
    {
        std::shared_ptr<Foo> p {new Foo{}};
        std::cout<<"A new shared pointer is created."<<std::endl
            <<" p.get() = "<<p.get()
            <<" p.use_count() = "<<p.use_count()<<std::endl;

        std::thread t1(thread_func, p), t2(thread_func, p), t3(thread_func, p);
      
        p.reset();//The main do not own it now.

        
        t1.join(); t2.join(); t3.join();

        std::cout<<"Now total ownership is: "<<p.use_count()<<std::endl;


    }
    std::cout<<"---------------Shared PTR tryout"<<std::endl;

    std::cout<<"---------------Weak PTR tryout"<<std::endl;
    {
        {
            auto shared = std::make_shared<int>(42);
            weak = shared;
            observe_weak();
        }
        observe_weak();
    }
    std::cout<<"---------------Weak PTR tryout"<<std::endl;

}