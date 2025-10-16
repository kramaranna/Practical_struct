#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
    string email;
    int course;
};

int main() {
    Student s1 = {"Vasya", 17, 4.4, "vasya@gmail.com", 1}; 
    Student s2 = {"Inna", 19, 3.9, "inna@gmail.com", 3};            
    
    cout << s1.name << "  " << s1.age << "  " << s1.grade<< "  "<< s1.email << "  " << s1.course << "  "  << endl;
    cout << s2.name << "  " << s2.age << "  " << s2.grade<< "  "<< s2.email << "  " << s2.course << "  "  << endl;
    return 0;
}
