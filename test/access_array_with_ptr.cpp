#include <iostream>
int main(){
    int arr[10] = {0,1,1,2,4};
    char str[10] = {'a','b','c'};
    int * ptr = &arr[0];
    char * ptrr = str;
    // int * ptr = arr; 数组变量就是数组首地址
    for(int i=0; i<10; i++){
        std::cout << "looping through elements in arr: " << *ptr << std::endl;
        std::cout << "Now the address in ptr is: " << ptr << std::endl;
        ptr++;  
        std::cout << "after ++ the address become: " << ptr << std::endl;
        // p++让p的地址+4字节
        std::cout << "#############" << std::endl;
        std::cout << "When it comes to char: " << std::endl;
        std::cout << "Now the address in ptrr is: " << ptrr << std::endl;
        ptrr++;  
        std::cout << "after ++ the address become: " << ptrr << std::endl << std::endl;

    }
    return 0;
}