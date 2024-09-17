#include <bits/stdc++.h>
using namespace std;
bool isKthBitSet(int n, int k)
{
    bool status = false;
    if (n & (1 << k))
        status=true;
    return status;
}
int main()
{
    int n = 11;
    int count = 0;
    for (int i = 32 - 1; i >= 0; i--)
    {
        if(isKthBitSet(n, i)) {
            count++;
        }
    }
    cout << count;
}
