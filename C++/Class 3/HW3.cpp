#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //part1 sum of integers
    /*int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n, sum;
    bool s;
    cin >> n;
    cin >> sum;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (sum == arr[i] + arr[j]){
                s = true;
            }
        }
    }
    if (s){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }*/

    //part2 reverse array
    /*int n, A, j;
    cin >> n;
    j = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        //cout << arr[i]; // not sure if cout is valid, not recommending this way to cout 全部读完以后cout是对的
    }
    for (int i = 0; i < n/2; i++)
    {
        //cout << i << " " << j << endl; check i j 
        A = arr[j];
        arr[j] = arr[i];
        arr[i] = A;
        j--;       
    }
    for (int i = 0; i < n; i++){ //check swap
        cout << arr[i] << " "; 
    } */

    //loop practice
    /*Write a program in C to display the pattern like right angle triangle using an asterisk. The pattern like :

*
**
***
****
*/

    /*for(int i = 0; i <= 3; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }*/

    /*int rows;
    
    cin >> rows;
   for(int i = 1; i <= rows; i++)
   {
	for(int j = 1;j <= i; j++) //need para for for loop!!!
	   cout<<"*";
	cout<<endl;
   }*/

    //palindrome

    /*int n;
    cin >> n;
    string s, reverseS;
    cin >> s;
    vector <char> v;
    for (int i = 0; i < n; i++){
        v.push_back(s[i]);
    }
    reverseS = "";
    for (int i = 0 ; i < n; i++){
        reverseS = reverseS + v.back(); 
        v.pop_back();  
    }
    if (s == reverseS){
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }*/

    /*vector <int> v; 
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        //v.push_back(5);
        v.erase(v.begin()+ v.size()/2, v.end());
        int length = v.size();
        for (int i = 0; i < length; i++){
            cout << v[i] << endl;
        }   */

    //board with all b's
    /*vector<vector<char> > board;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        board.push_back(vector<char>());
        for (int j = 0; j < n; j++){
            board[i].push_back('b'); // b and w swap
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << board[i][j];
        }
        cout << endl;
    }*/

    //board with b and w
    bool s;
    vector<vector<char> > board;
    int n;
    cin >> n;
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
