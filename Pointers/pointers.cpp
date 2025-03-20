#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    printf("%d %d",p,&a);
    printf("\n%d",*p);    
}