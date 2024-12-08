# PLP2

### Keywords and naming requirments
C++ has 95 reserved key words. <br>
<br>
The naming requirments of C++ include: <br>
- Names are able to have letters, digits and underscores
- They must begin with either a letter or underscore
- They are case-sensitive (EX: myNum and MyNum are two different variables)
- They can't contain special characters like !, #,%, $, etc
- Reserved keywords are not able to be used as variable names (like Int, String, etc) <br>

### Identifiers
These naming identifiers are enforeced by the complier. If you were to try to break them, the program will give you errors. <br>
Below are different examples on variables seen in C++ and how to write them: 
```
int myNum = 15;
string myString = "Hello World";
double myFloatingPointNumber = 15.99; //a decimal number can be held by a double
bool myBoolean = true; //can be either true or false also only in lowercase
list <string> cars = {"Toyota", "Honda", "BMW"}; //this is how you declare a list but make sure in the beginning of your program you have downloaded the list library called #include <list>
```
<br> 

### Naming Conventions
The naming conventions for C++ is usually camel case where the first word is lowercase and second starts with an uppercase . It is not enforced but usually recommended:

```
myNum, myDog
```
C++ is a statically typed language. This means variables are bound to a data type during compliation and that the user has to declare the type of variable first. If you do not declare the variable before writing it out, the program will give you errors when you start debuging it. 

```
int myNum = 15;
myNum = 15; //will give you an error because you did not declare what this is 
```
<br>
C++ is an strongly typed lanugage. This means it has more stricter writing rules. As you are writing your program, you must declare the types of variables as you are writing so the program can go back and check what the variable is before it executes it. If you forget to declare or wrote the wrong type, it will give you errors as it is debugging. 
<br>
<br>

C++ is an explicitly typed language. An explicitly typed language is when you have to provide as much detail as you can to variables, functions, etc while implicitly typed language is when the language figures out the details for you. An example of this would be when you are assigning a variable like x = 42, in C++ you would have to say the type it is like (int x = 42). Unlike in python where you can just say x = 42 and it would figure it out. 
```
int x = 42;
x = 42 //will give you an error
```
<br>

### Mutable and Immutable
In C++, all objects are mutable at the start. If you want to modify it to become immuable, C++ has functions like const or constexpr. 
<br>
To declare a variable immutable, you can put either const before declaring the variable which makes it unchangeble and read only. 

```
const int myNum = 15;
```
This means that from now on, myNum will only be 15. 

```
const int myNum = 15;
int myNum = 10;
```
If you try to change it to 10, it will give you an error as you can't change it now as it is only 15. 

### Operators

C++ has many operators available for each data type. 
<br> 
Arithmetic operators: 

```
//('+', '-', '*', '/', '&', '++', '--')
```
Comparison Operators: 

```
//('==', '!=','>', '<', '>=', '<=')
```

Logical Operators:

```
//('&&','||', '!')
```
Mixed types in C++ are allowed at certain times. For example, you can add a float and an integer together: 
```
float x = 15;
int y = (int)x;
cout << y << "\n"; //will print out an integer
```
You can also do operations with two mixed numbers:
```
float decimalNum = 19.19;
int myNum = 15;
cout << decimalNum + myNum << "\n"; //you can add a int and float together and it will come out a float 
cout << decimalNum / myNum << "\n";
```
### Identifiers
Identifier names and operator symbols are bound during the following times: <br>
-Variables, function names and class names. <br>
-Decleration and defintion. <br>
-Operator symbols and compliation and runtime. <br>
### Limitations
In C++, there are not much limitations to combining different types of variables. Below is an example where you can add a string and integer in C++. To do this, you would first declare your variables to what you want. Then when adding the two together, convert the string into an integer using stoi(). This will allow you to add a string and integer together. 
```
#include <iostream>
using namespace std;

int main(){
    string x = "5";
    int y = 6;
    int total = stoi(x) + y;
    cout << total << "\n";

}
```
This will output 11

C++ has also multiple built in complex data types. Some of them include arrays, pointers, and structs. 
<br>
Overall, C++ is a language that is very flexible and easy to use. Following the rules of declaring the variable and the format, everything else can be edited as you continue with your program. Following the syntax and rules is the most important thing for you not to get errors, but overall it is a very easy and flexible language. <br>

Sources: 
- https://www.w3schools.com/cpp/cpp_variables.asp
- https://www.w3schools.com/cpp/cpp_data_types.asp
- https://www.w3schools.com/cpp/cpp_operators.asp
- https://www.w3schools.com/cpp/cpp_arrays.asp
- https://www.geeksforgeeks.org/cpp-keywords/

