enum Alert {green, yellow, orange, red};//old enums still work
enum class Color {red, yellow, green, blue};//new enums do not pollute namespace
enum class Color_code: char;//Forward declaration

void foo(Color_code p){
    return;
}

enum class Color_code: char{red, yellow, orange, blue};

int main() {
    return 0;
}