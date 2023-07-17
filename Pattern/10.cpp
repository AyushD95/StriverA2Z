#include<iostream>
using namespace std;
void pattern2(int n)
{ int i,j;
    for(i=1;i<=2*n-1;i++)
{
    int star=i;
  for(j=1;j<=star;j++)
  {
    if(i>n)
    star=2*n-i;
    cout<<"* ";
  }
   cout<<endl;
}
}

int main(){
int n;
cout<<"Enter no of Rows: ";
cin>>n;
pattern2(n);

return 0;
}