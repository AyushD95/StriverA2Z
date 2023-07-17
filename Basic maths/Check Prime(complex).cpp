#include<iostream>
#include<cmath>
using namespace std;

int main(){
int count=0;
int n;
cout<<"Enter no: ";
cin>>n;
for(int i=1;i<=sqrt(n);i++)
{
 if(n%i==0)
 {
 count++;

if(n/i!=i)
count++;
}

}
if (count==2)
cout<<"It is a Prime no";
else
cout<<"It is not a Prime no";

return 0;
}