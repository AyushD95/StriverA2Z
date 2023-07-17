#include<iostream>
using namespace std;




int main(){
int n,m;
int i,j;
cout<<"Enter no of Rows: ";
cin>>n;
cout<<"Enter no of columns: ";
cin>>m;
for ( i = 0; i <n; i++)
{
   for ( j = 0; j<m; j++)
   {
  cout<<"* ";
   }
   cout<<endl;
}




return 0;
}