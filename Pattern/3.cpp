#include<iostream>
using namespace std;




int main(){
int n;
int i,j;

cout<<"Enter no of Rows: ";
cin>>n;

for ( i = 1; i <=n; i++)
{
   for ( j = 1; j<=i; j++)
   {
    
  cout<<j<<" ";
   
   }
   cout<<endl;
}




return 0;
}