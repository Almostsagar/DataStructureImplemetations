#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 1, 4, 3, 5, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int res = 0;
    for (int i = 0; i < length; i++)
    {
        res = res ^ arr[i]; 
    }
    cout << res;
    return 0;
}