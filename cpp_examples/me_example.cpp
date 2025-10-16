#include <iostream>
#include <string>
using namespace std;

struct Me {
    string name;
    string hobby;
    int age;
    string favorite_food;
};

int main() {
    Me me1 ={"Аня","гра на піаніно", 19, "казінаки"}; 
        cout << "  Імʼя: " << me1.name << endl;
        cout << "  Хоббі: " << me1.hobby << endl;
        cout << "  Вік: " << me1.age << endl;
        cout << "  Улюблена їжа: " << me1.favorite_food << endl;

    return 0;
}
    
