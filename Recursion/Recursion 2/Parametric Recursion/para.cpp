//This algorithm print sum of n number using i-1
#include<iostream>
using namespace std;

void myFunction(int i,int sum)
{

     if(i < 1)
{
     cout<<sum;
    return;
}

myFunction(i-1,sum+i);

}

int main(){
int n;

cin>>n;

myFunction(n,0);

return 0;
}