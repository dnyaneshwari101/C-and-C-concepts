#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int *p=new int[n];
    cout<<"\nEnter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Array elements are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    delete [] p;//free the allocated memory
return 0;

}