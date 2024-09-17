#include<iostream>
using namespace std;
int countSetBits(int number) {
    int count = 0;
    while (number) {
        number = number & (number - 1);
        cout << number;
        count++;
    }
    return count;
}
int main() {
    int num = 5;
    int setbits = countSetBits(num);
    cout << "\n";
    cout << setbits;
    return 0;
}