#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade; // 👈 додайте  ще 1-2 поля, наприклад email або course
};

int main() {
    Student s1 = {"", 0, 0.0}; // 👈 заповнити дані
    Student s2;                 // 👈  ініціалізувати другий об'єкт

    cout << s1.name << " " << s1.age << " " << s1.grade << endl;

    return 0;
}
