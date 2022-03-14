#include <iostream>
using namespace std;

class regular{
public:

    void printName(){
        cout <<"this just prints a name here"<<endl;
    }
};
class stuge:public regular{
public:
    void name(){
        cout <<"This borrows from the regular class"<<endl;
    }
};
void sayHere(){
    cout<<"this"<<endl;
}