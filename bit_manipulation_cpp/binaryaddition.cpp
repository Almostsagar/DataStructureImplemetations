#include <bits/stdc++.h>
// #include "binarytodecimal.h" // use functions from other file #1
// compile and run like this...
// >> g++ binaryaddition.cpp binarytodecimal.cpp -o binaryaddition
// >> ./binaryaddition
using namespace std;

extern int binary2decimal(const string &binary); // use functions from other file #2
/*
compile and run like this...
>> g++ binaryaddition.cpp binarytodecimal.cpp -o binaryaddition
>> ./binaryaddition
*/

string binaryAddition(string &num1, string &num2)
{
    int length1 = num1.length();
    int length2 = num2.length();
    int maxlen = max(length1, length2);

    string padded1 = string(maxlen - length1, '0') + num1;
    string padded2 = string(maxlen - length2, '0') + num2;

    int carry = 0;
    string result = "";

    for (int i = maxlen - 1; i >= 0; i--)
    {
        int bitA = padded1[i] - '0';
        int bitB = padded2[i] - '0';
        int sum = bitA + bitB + carry;
        result = char(sum % 2 + '0') + result;
        carry = sum / 2;
    }
    if (carry)
    {
        result = '1' + result;
    }

    return result;
}

// int main()
// {
//     string num1 = "10001";
//     string num2 = "11001";
//     cout << "addition of number " << num1 << "(" << binary2decimal(num1) << ")" << " and " << num2 << "(" << binary2decimal(num2) << ")" << " is : " << binaryAddition(num1, num2) << "\n";
//     return 0;
// }