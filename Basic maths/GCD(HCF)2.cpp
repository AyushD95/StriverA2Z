#include<iostream>
using namespace std;

int main(){
int n1,n2;
int gcd=1;
cout<<"Enter Two numbers: ";
cin>>n1>>n2;

for (int i = min(n1,n2) ; i >=1; i--)
{

    if(n1%i==0&&n2%i==0)
    {
    gcd=i;
    cout<<"GCD is: "<<gcd;
    break;
    } 
}





return 0;
}