#include <iostream>
using std::cout;
using std::endl;


void point(){
    cout <<"-------------------------pointer----------------------------"<<endl;
    int age = 19;
    double gpa = 20;
    int *page = &age;
    string name = "alvin";
    cout <<&age<<endl;    // This shows memory address of age
    cout <<name<<endl;
    cout <<*page<<endl;     //dereference
    cout <<"-------------------------pointer----------------------------"<<endl;
}