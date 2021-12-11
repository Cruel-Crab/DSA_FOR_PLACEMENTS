# DAY-2 Getting started with CPP

* Learned about compilers and their functions
* Learned about the structure of a c++ program
    * header files- **#include\<iostream>**
    * namespace- **using namespace std;**
    * main function- **int main(){
    }**
    * print statement- **cout << ;**
    * newline keyword- **endl; or \n**
* Datatypes
    * int, float, double, char, bool, string
* Varibles and their naming conventions
* Type casting one dataype into another
* How variables are stored ?
    * int variable is stored in 32-bit format
    * char variable is stored in 8-bit format
* How -ve numbers are stored ?
    * For ex: -5
    1. Ignore the negative sign and consider it as 5
    2. Convert it into it's binary form ( 0000 0000 0000 0101)
    3. Take 2's complement of the binary form and store it (1111 1111 1111 1011).
* **Signed int** dataype is used for -ve numbers ,while **unsigned int** datatype is used for positive numbers.
* Operators in c++
    * Arithmetic:- +, -, *, /, %, //
    * Relational:- ==, >, <, >=, <=, !=
    * Logical:- &&, ||, !
    * Biwise:- &, |, <<, >>, ~, ^
    * Assignment:- =, +=, -=, *=, /=, %=