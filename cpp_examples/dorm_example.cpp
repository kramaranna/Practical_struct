#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentName;
    int course;
    int room; 
    int grade;
};

int main() {
    Student dorm[3]={
        {"Anya",1 , 205, 91},
        {"Vasya",2 , 203, 85},
        {"Petya", 3 , 103, 88},
    }; 

    for (int i = 0; i < 3; i++) {
        if ( dorm[i].course==3 ) {
            cout << dorm[i].studentName << endl;
        }
    }

    return 0;
}
