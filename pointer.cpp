#include <iostream>

int main() {
    int num = 69;
    int* ptr = &num; // Store the memory address of 'num' in 'ptr'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num (&num): " << &num << std::endl;
    std::cout << "Address stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

    // Modifying the value using the pointer
    *ptr = 120;
    std::cout << "New value of num after modifying via ptr: " << num << std::endl;

    return 0;
}