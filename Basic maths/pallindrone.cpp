#include<iostream>
using namespace std;
int main(){
int n;
int digit;
int count=0;
int rev=0;
cout<<"Enter no: ";
cin>>n;
int check=n;
while(n>0)
{
    digit=n % 10;
    n=n / 10;  
    count++;
    rev=(rev*10+digit);
}
if(check==rev)
cout<<"It is Pallindrone";
else
cout<<"It is not Pallindrone";
return 0;
}