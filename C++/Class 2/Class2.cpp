#include <iostream>
using namespace std;

int main(){

    /*int n1 = 14, n2 = 12;
    int maxVal;
    if(n1 <= n2){
        maxVal = n2;
    }else{
        maxVal = n1;
    }

    int maxVal = (n1 <= n2) ? n2 : n1;
    cout << maxVal << endl;
    return 0;*/



    /*char a;
    cin >> a;
    switch (a){
        case 'A': 
            cout << 65 << endl;
            break;
        case '=':
            cout << 104 << endl;
            break;
        case '!':
            cout << 33 << endl;
            break;
        case 'a' :
            cout << 97 << endl;
            break;
        default:
            cout << 0 << endl;
    }*/



    /*int n, count;
    count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++){
            if(i % j == 0){
                count += j;
            }
        }
        if (i == count){
            cout << i << endl;
            
        }
        count = 0;
    
    }*/

    /*bool s;
    int x,y;
    cin >> x;
    cin >> y;
    for (int i = x; i <= y; i++){
        s = true;//this is important
        for (int j = 2; j < i; j++){
            if (i % j ==0){
                s = false;
                break;
            
            }
        }
        if (s && i != 1){
            cout << i << endl;
        }
    }*/


    int n, digit;
    digit = 1;
    cin >> n;
    while (n >= 10){
        n /= 10;
        digit++;
        
    }
    cout << digit << endl;



}