#include <iostream>
using namespace std;

void bubble_sort(int array[], int len){
    for(int * i = array; i <= &array[len-1]; i++){
        cout << "first ptr currently working on: " << *i << endl;
        for(int * k = array; k <= &array[len-1]; k++){
                    cout << *k << " ";
                }
                cout << endl << " ######### " << endl;
        // 一开始我写的*j=i++,导致很严重的错误，每次j都是和i同一个位置开始的，然后内层循环启动后*i右移了一格
        for(int * j = i+1; j <= &array[len-1]; j++){
            cout << "second ptr currently working on: " << *j << endl;
            for(int * k = array; k <= &array[len-1]; k++){
                    cout << *k << " ";
                }
                cout << endl << " --------- " << endl;
            if (*i > *j){
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}
int main(){
    int arr[10] = {3,4,6,2,5,1,8,3,123,312};
    const int length = sizeof(arr) / sizeof(int);
    cout << "check length: " << length << endl;
    bubble_sort(arr, length);

    return 0;
}