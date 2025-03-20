//reference is an aliase or a nickname given to a variable
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;//reference to a
    cout<<"a : "<<a<<endl;
    cout<<"r : "<<r<<endl;
    int b=30;
    r=b;
    cout<<"r : "<<r<<endl;
    r++;
    cout<<"r : "<<r<<endl;
    return 0;
}
