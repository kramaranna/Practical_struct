#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int pages;
    float price;
    string author;
};

int main() {
    Book library[2]={
        {"Math",300,10,"Oliksii Kudlak"},
        {"Informatics",301,9,"Anton Patrak"}
    }; 

    for (int i=0; i<2; i++) {
        cout << "Книга" << i + 1 << ":" << endl;
        cout << "  Назва:" << library[i].title << endl;
        cout << "  К-сть сторінок: " << library[i].pages << endl;
        cout << "  Price: " << library[i].price << endl;
        cout << "  Імʼя: " << library[i].author << endl;
    }

    return 0;
} 
