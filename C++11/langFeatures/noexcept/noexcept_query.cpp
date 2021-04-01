#include <stdexcept>
#include <iostream>

void a_function_that_may_fail() noexcept(false){
    std::cout<<"I may throw"<<std::endl;
    throw std::runtime_error("See me throw!");
}

void a_function_that_cannot_fail() noexcept{
    std::cout<<"I never throw!"<<std::endl;
}

void a_function_that_should_not_fail(){
    if(noexcept(a_function_that_cannot_fail())){
        a_function_that_cannot_fail();
        std::cout<<"So I never try!"<<std::endl;
    }
    else{
        std::cout<<"So I always try."<<std::endl;
        try{
            a_function_that_cannot_fail();
        }
        catch(...){
            std::cout<<"Glad I tried."<<std::endl;
        }
    }

    if(noexcept(a_function_that_may_fail())){
        std::cout<<"So I never try!"<<std::endl;
    }
    else{
        try{
            a_function_that_may_fail();
            std::cout<<"So I always try."<<std::endl;
        }
        catch(...){
            std::cout<<"Glad I tried."<<std::endl;
        }
    }
}

int main(){
    a_function_that_should_not_fail();
}