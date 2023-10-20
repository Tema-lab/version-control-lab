#include <iostream>


int main(){
    int a, b, c;
    int tmp;
    bool inOrder = false;
    std::cout << "Enter 3 integers: " << std::endl;
    std::cin >> a >> b >> c;
    if(a > b && b > c){
        inOrder = true;
        std::cout << "In order" << std::endl;
    }
    else if(c > b && b > a){
        inOrder = true;
        std::cout << "In order" << std::endl;
    }
    else{
        inOrder = false;
        std::cout << "Not in order" << std::endl;
    }
    return 0;
}