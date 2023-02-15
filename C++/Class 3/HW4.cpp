#include <iostream>
#include <vector>
using namespace std;

/*vector<vector<char> > initialize_board(int n){
    vector<vector<char> > board;
    for (int i = 0; i < n; i++){
        board.push_back(vector<char>());
        for (int j = 0; j < n; j++){
        if ((i+j) % 2 == 0){
                board[i].push_back('b'); 
            }else {
                board[i].push_back('w'); 
            }          
        }
    }
    return board;
}

void print_board(vector<vector<char> > board, int n){ 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << board[i][j];
            if (j < n-1) {
                cout << "-";
            } 
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<char> > board = initialize_board(n); //save the board into this new board in main; call a function then save it.
    print_board(board, n);  
}
*/




int weird_math(int a){
    return a;
}
int weird_math(int a, int b){
    return a*b;
}
int weird_math (int a, int b, int c){
    int X = weird_math(a,c);
    return X + b;

}


int main(){

    cout << weird_math (1, 2, 3) << endl;
    cout <<weird_math (1) << endl;
    cout <<weird_math (1, 2) << endl;

    

}