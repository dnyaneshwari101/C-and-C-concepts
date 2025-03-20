#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
    char x;
};
int main()
{
 Rectangle r={10,5};
 cout<<"Size of r is : "<<sizeof(r)<<endl;
 cout<<"Length is : "<<r.length<<endl;
 cout<<"Breadth is : "<<r.breadth<<endl;
 return 0;
}