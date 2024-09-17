#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int bit = 5;
    bool b = (num & (1 << bit));
    cout << b;
    return 0;
}