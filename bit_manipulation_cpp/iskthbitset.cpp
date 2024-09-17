#include <bits/stdc++.h>
using namespace std;
bool isKthBitSet(int n, int k)
{
    return n & (1 << k);
}
int main()
{
    int n = 11;
    int count = 0;
    for (int i = 31; i >= 0; i--)
    {
        if(isKthBitSet(n, i)) {
            count++;
        }
    }
    cout << count;
}
