#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentName;
    int course;
    int room; // 👈 студенти можуть додати ще поле (наприклад grade)
};

int main() {
    Student dorm[3]; // 👈 студенти ініціалізують масив

    for (int i = 0; i < 3; i++) {
        if ( /* умова на курс 3 */ ) {
            cout << dorm[i].studentName << endl;
        }
    }

    return 0;
}
