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
    return bitset<8>(decimal).to_string();
}

int main()
{
    int decimal = -2;
    cout << "Decimal number before conversion -> " << decimal << "\n";
    cout << "Binary number after conversion -> " << decimalToBinary(decimal) << "\n";
    return 0;
}

// 11111110
// 11111111
// 11111110