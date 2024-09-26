#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;

    int myNum = 15;
    string myString = "Hello";
    char letter = 'b';
    float decimalNum = 19.19;
    bool myBoolean = true;
    string cars[4] = {"Toyota", "Honda", "BMW", "Tesla"};
    int x = 15;
    int y = (int)x; //you can change between integers and floats by doing this. 
   
    // Optional: Display the variable values
    cout << "myNum: " << myNum << "\n";
    cout << "myString: " << myString << "\n";
    cout << "letter: " << letter << "\n";
    cout << "decimalNum: " << decimalNum << "\n";
    cout << "car : " << cars[2] << "\n";
    cout << decimalNum + myNum << "\n"; //you can add a int and float together and it will come out a float 
    cout << decimalNum / myNum << "\n"; 
    cout << y << "\n";
    
    return 0;
}
