#include <iostream>
#include <vector>
using namespace std;
/*int * 2 add_points (int x1, int y1, int x2, int y2) {
    return (x1 + x2), (y1+y2);
}

int main() {
    ...add_points(1,2,1,2);
}*/


/*
struct Posn {
    int x;
    int y;
    Posn (int px, int py) : x(px), y(py) {}
    //Posn() {}
};

void print_posn(struct Posn p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
int main() {
   
    Posn p1 (1,2);
    Posn p2 (3,4);

    print_posn (p2);

}*/

struct Date{
    int year;
    int month;
    int day;
    Date (int syear, int smonth, int sday): year(syear), month(smonth), day(sday) {}
    Date () {}
};

struct Student{
    string name;
    int number;
    int grade;
    Date birthday;
    Student (string sname, int snum, int sgrade, int year, int month, int day): name(sname), number(snum), grade(sgrade) {
        this-> birthday = Date(year, month, day);
    }
    Student () {}
};

bool compare_students(struct Student s1, struct Student s2){
    //compare grade first
//优先比较条件最多的一个
/*
if (p1.y == p2.y && p1.m == p2.m) {
    return p1.d > p2.d; 
} else if(p1.y == p2.y) {
    return p1.m > p2.m; 
} else {
    return p1.y > p2.y; 
}*/
    if (s1.grade == s2.grade){
        return s1.number > s2.number;
    }else {
        return s1.grade > s2.grade;
    }
}

bool compare_birthday(struct Date d1, struct Date d2){
    if (d1.year == d2.year && d1.month == d2.month){
        return d1.day > d2.day;
    }else if(d1.year == d2.year){
        return d1.month > d2.month;
    }else{
        return d1.year > d2.year;
    }
}

void print_students(vector<struct Student> s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        cout << s[i].name << " " << s[i].grade << " " << s[i].number << " " << endl;
    }
}

void sortStudents (vector<Student> &S) {
    int n = S.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (!compare_students(S[j], S[j+1])) {
                swap (S[j], S[j+1]);
            } 
        }
    }
    
}

void sortBirthday (vector<Date> &D) {
    int n = D.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (!compare_birthday(D[j], D[j+1])) {
                swap (D[j], D[j+1]);
            } 
        }
    }
    
}


/*is1
if n = 1, retrun true; otherwise false
bool is1(int n) {
    return n == 1;
}*/




int main(){
    vector<struct Student> s;
    int n;
    cin >> n;
    string name;
    int number;
    int grade;
    int year, month, day;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> number;
        cin >> grade;
        cin >> year;
        cin >> month;
        cin >> day;
        //Student p (name, number, grade);
        s.push_back(Student(name, number, grade, year, month, day));
    }
    sortStudents(s);
    print_students(s);
    
}






