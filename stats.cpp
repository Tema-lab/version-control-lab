#include <iostream>

int main() {
    std::cout << "Enter two numbers " << std::endl;
    double num1,num2;
    std::cin >> num1 >> num2;
    int sum = num1 + num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    int diff = num1 - num2;
    std::cout << "The difference of " << num1 << " and " << num2 << " is: " << diff << std::endl;
    int product = num1 * num2;
    std::cout << "The product of " << num1 << " and " << num2 << " is: " << product << std::endl;
    int distance = abs(num1 -num2);
    std::cout << "The distance of " << num1 << " and " << num2 << " is: " << distance << std::endl;
    double meanAVG = (num1 + num2) / 2;
    std::cout << "The mean average of " << num1 << " and " << num2 << " is: " << meanAVG << std::endl;
    return 0;
}
