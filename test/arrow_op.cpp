#include <iostream>

class MyClass {
public:
    int data;
    void display() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.data = 42;

    MyClass* ptr = &obj;
    int data_from_class = ptr->data; // 使用 -> 操作符调用对象的成员变量
    std::cout << "Get data from class with operator \"->\" : "  << data_from_class << std::endl;
    MyClass& ref = obj;
    int data_from_ref = ref.data;
    std::cout << "If access from a reference operator \".\" : " << data_from_ref << std::endl;
    
    return 0;
}