#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int &decimal){
    // if (decimal == 0)
    //     return "0";

    // string binary = "";

    // while (decimal > 0)
    // {
    //     binary = binary + to_string(decimal % 2);
    //     decimal /= 2;
    // }
    // return binary;
    return bitset<32>(decimal).to_string();
}

int main()
{
    int decimal = 11;
    cout << "Decimal number before conversion -> " << decimal << "\n";
    cout << "Binary number after conversion -> " << decimalToBinary(decimal) << "\n";
    return 0;
}