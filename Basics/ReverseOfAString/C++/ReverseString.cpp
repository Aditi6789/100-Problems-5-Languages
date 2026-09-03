#include <iostream>
#include <string>
using namespace std;

int main() {

    string originalStr = "Hello";
    string reversedStr = "";

    for (int i = originalStr.length() - 1; i >= 0; i--) {
        reversedStr += originalStr[i];
    }

    cout << "Original String : " << originalStr << "\n";
    cout << "Reversed String : " << reversedStr;

    return 0;
}