#include <iostream>
using namespace std;
//@format
int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n ; i++){//this is row
        for (int j = 0; j < n; j++){//this is col 
            if ((i+j) % 2 == 0){
                cout << "black";
            }else {
                cout << "white";
            }
            if (j < n-1) {
                cout << "-"; 
            }

        }
        cout << endl;
        
    }






    /*int n;
    bool s = true;//this is my switch
    cin >> n;
    for (int i = 1; i < n + 1; i++){//this is row
        for (int j = 1; j < n + 1; j++){//this is col 
            if (s){
                if (j == n){
                    cout << "black";
                }else{
                    cout << "black-";
                }
                s = false;
            }else {
                if (j == n){
                    cout << "white";
                }else {
                    cout << "white-";
                }
                s = true;
            }

        }
        cout << endl;
        
    }*/



//part 3
    /*int n;
    while (true){
        if (cin >> n){
            cout << n << endl;
        }else{
            break;
        }
    }*/
      
    
}