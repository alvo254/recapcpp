#include <iostream>
using std::cout;
using std::endl;


void fun(){
    cout <<"--------------------------------- This is from the switch.cpp ---------------------------- "<<endl;

}
string getDay(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        default:
            dayName = "Invalid number";
    }
    cout <<getDay(0)<<endl;
}
