//this algorithm print sum of n number using i+1
#include<iostream>
using namespace std;
int n;
void myFunction(int i,int sum)
{
    if (i>n)
    {
        cout<<sum;
        return;
    }

    myFunction(i+1,sum+i);
}

int main()
{
    cin>>n;
    myFunction(0,0);

return 0;
}