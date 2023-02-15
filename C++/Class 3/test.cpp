#include <iostream>
using namespace std;
void foo (int &x) {
   x += 1;
}

int main(){
    int a = 1;
    foo(a);
    cout << a << endl;
    return 0;
}

