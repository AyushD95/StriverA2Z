//To print sum of n number but this time answer is return using function and not by parameters

#include<iostream>
using namespace std;

int myFunction(int n)
{
   if(n==0) return 0;

   return n + myFunction(n-1);
}

int main()
{
int n;
cin>>n;

cout<<myFunction(n);

return 0;
}