#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    int year; 
    int speed;
    string colour;
};

int main() {
    Car cars[3]= {{"Wolksvzgen",2004, 190, "black"},
        {"Shkoda",2020, 200, "green"},
        {"Nisan", 2005, 175, "yellow"}}; 
    for (int i=0; i<3; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "  Brand: " << cars[i].brand << endl;
        cout << "  Year: " << cars[i].year << endl;
        cout << "  Speed: " << cars[i].speed << endl;
        cout << "  Colour: " << cars[i].colour << endl;
    }

    return 0;
}
