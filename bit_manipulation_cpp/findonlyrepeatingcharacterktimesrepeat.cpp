#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 2, 1, 5, 1, 1, 2};
    int length = sizeof(arr)/arr[0];
    int count = 0;
    for(int i= 0; i < length; i++){
        count += arr[i];
    }
    cout << count;
    return 0;
}