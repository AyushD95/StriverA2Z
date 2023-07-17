// To print factorial using function return recursive metho

#include<iostream>
using namespace std;

int myF(int n)
{
   if(n==0 ) return 1;                 // or you cn write if(n==1) return1;

   return n*myF(n-1);                 //This return the value to when its first called in main function and print it
}


int main(){

int n;
cin>>n;

myF(n);
cout<<myF(n);

return 0;
}