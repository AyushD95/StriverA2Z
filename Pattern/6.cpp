#include<iostream>
using namespace std;
int main(){
int n;
int i,j;

cout<<"Enter no of Rows: ";
cin>>n;

for ( i = 1; i <=n; i++)
{
   for ( j = 1; j<=n-i+1; j++)
   {
    
  cout<<j<<" ";
   
   }
   cout<<endl;
   
}
return 0;
}