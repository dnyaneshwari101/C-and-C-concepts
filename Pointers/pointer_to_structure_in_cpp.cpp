#include<iostream>
using namespace std;
struct Animal{
    string type;
    string name;
    string color;
};
int main()
{
    Animal *p = new Animal;
    p->name = "Manu";
    p->type= "Cat";
    p->color="White";

    cout<<"Pet info : "<<endl;
    cout<<"Type : "<<p->type<<endl;
    cout<<"Name : "<<p->name<<endl;
    cout<<"Color : "<<p->color<<endl;

    return 0;
}