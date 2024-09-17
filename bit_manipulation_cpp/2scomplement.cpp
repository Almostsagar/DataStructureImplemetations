#include<iostream>
using namespace std;

extern string binaryAddition(string &num1, string &num2);
extern string decimalToBinary(int &decimal);

int main() {
    int num = -2;
    // step 1 
    int negation = ~(num);
    string negation_to_binary = decimalToBinary(negation);
    string one = "0001";
    string addone = binaryAddition(negation_to_binary, one);
    cout << addone;
    return 0;
}