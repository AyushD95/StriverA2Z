#include<iostream>
using namespace std;

int myF(int n)
{
  if(n<=1) return n;
  
 int last=myF(n-1);
 int secondLast=myF(n-2);

 return last+secondLast;

}

int main()
{
   int n;
cout<<"Enter Nth Fibonacci Number You Want To Find: " ;
cin>>n;

cout<<myF(n);
return 0;

}