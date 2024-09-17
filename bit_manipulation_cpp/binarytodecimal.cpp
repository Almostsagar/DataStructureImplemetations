#include <bits/stdc++.h>
using namespace std;

int binary2decimal(const string &binary){
    int decimal = 0;
    int length = binary.length();
    for(int bit = 0; bit < length; bit++){
        if(binary[length - 1 - bit] == '1'){
            decimal += pow(2, bit);
        }
    }
    return decimal;
}

int main(){
    string binary = "10000000000000000000000000000000";
    cout << "Binary number beore conversion -> " + binary << "\n";
    cout << "Decimal number after conversion -> " << binary2decimal(binary);
    return 0;
}