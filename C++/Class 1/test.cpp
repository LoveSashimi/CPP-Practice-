#include <iostream> // for I/O
using namespace std; // always include
int main() { // main function declaration
    /*int num = 456;
    int hundred = num / 100;
    int ten = num / 10; //45 
    ten = ten % 10;
    int one = num % 10;


    int a;
    if(cin >> a){
        cout << a << endl;
    }else {
        cout << "Wrong input"<< endl;
    }*/


    int a,b;
    cin >> a;
    cin >> b;
    if(a <= b){
        cout << b << " is the bigger one." << endl;
    }else{
        cout << a << endl;
    }
        
    
    
    

    //cout << hundred << " * 100 + " << ten << " * 10 + " << one << endl; // 4*100 + 5*10 + 6
    
    return 0; // return value, matches the function declaration
}