#include<iostream>
using namespace std;




int main(){
int n;
int digit;
int sum=0;

cout<<"Enter no: ";
cin>>n;
int check=n;
while(n>0)
{
    digit=n % 10;  
    sum=(sum + digit*digit*digit);
    n=n / 10;
}


if(check==sum)
cout<<"It is Armstrong No";
else
cout<<"It is not a Armstrong No";


return 0;
}