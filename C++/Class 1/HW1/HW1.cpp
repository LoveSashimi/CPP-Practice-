#include <iostream> // for I/O
using namespace std; // always include
int main() { // main function declaration
/*1. Use and (&&), or (||), and not (!) operators to simplify the code below. 
    if (slipped on the drive walk) {
        if (ice on the drive walk) {
            twisted your ankle
        }
        else {
            nothing happens
        }
    }
    if (twisted your ankle) {
        if (you have a dog) {
            nothing happens
        }
        else if (your neighbour has a dog) {
            bitten by a dog
        }
        else {
            nothing happens
        }
    }
    if (bitten by a dog) {
        seriously injured
    }*/



    /*ANS:
    if (slipped on the drive walk && ice on the drive walk){
        twisted your ankle
    }else if (your neighbour has a dog){
        bitten by a dog
        seriously injured
    }*/

/*2. Given 3 valid integers as input, print them from the smallest to the largest, seperated by a single white space. */
int a, b, c;
    if(cin >> a && cin >> b && cin >> c){
        if (a < b && b < c){ //a<b<c
            cout << a << " " << b << " " << c << endl;                        
        }else if(a < c && c < b){//a<c<b
            cout << a << " " << c << " " << b << endl;
        }else if(b < a && a < c){//b<a<c
            cout << b << " " << a << " " << c << endl;
        }else if(b < c && c < a){//b<c<a
            cout << b << " " << c << " " << a << endl;
        }
        else if(c < a && a < b){//c<a<b
            cout << c << " " << a << " " << b << endl;
        }
        else if(c < b && b < a){//c<b<a
            cout << c << " " << b << " " << a << endl;
        }
    }else {
        cout << "Your input is not valid"<< endl;
    }

}

/*3. Identify the illegal definitions and explain why. 
(a) cin >> int input_value;
cin can only read in variable name, but here the datatype int cannot be read. This is a syntax error.

(b) int i = { 3.14 };
An assginment operator cannot have big brackets around it since this is not a method. This is a syntax error.
int can only be integers here we have decimals. This is a runtime error. 

(c) double salary = wage = 9999.99;
The expression is illegal since there can only be one assignment operator but here there are two. This is a syntax error. 

(d) int i = 3.14;
int can only be integers here we have decimals. This is a syntax error. 

4. Which of the following names are invalid?
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;

ANS: a) is invalid since we cannot name the variable name with datatpye name installed by default. 

5. Simplify the code on slide 46 and handle the condition "I am a genious && I am in class" with reasonable results. 


Given the pseudocode below, write it in one if...else statement 
if (I am in class){
    if (I fell asleep) { 
        learned nothing
    }
    else {
    learned everything }
    }
    else if (I am a genious){
    learned everything }
    else {
    learned nothing
}
Simplification:

if (I am in class && I am a genius){
    learned everything
    }else if (I fell asleep){
        learned nothing
    }else{
        learned nothing
    }


}
*/