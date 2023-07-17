#include<iostream>
using namespace std;
int main(){
int n;
int digit;
int count=0;
cout<<"Enter no: ";
cin>>n;
while(n>0)
{
    digit=n % 10;
    n=n / 10;  
    count++;
}

cout<<"No of Digits: "<<count;

return 0;
}