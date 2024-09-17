#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 4, 6, 5, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num1 = 0;
    int num2 = 0;
    int xorall = 0;
    for (int i = 0; i < length; i++){
        xorall = xorall ^ arr[i];
    }
    int rightmostSetBit = xorall & ~(xorall - 1);

    for (int i = 0; i < length; i++){
        if (arr[i] & rightmostSetBit){
            num1 = num1 ^ arr[i]; 
        }
        else{
            num2 = num2 ^ arr[i]; 
        }
    }
    cout << num1 << " " << num2;
    return 0;
}