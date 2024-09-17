#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    string oddoreven = (num % 2 == 0) ? "even" : "odd";
    cout << oddoreven;
    return 0;
}