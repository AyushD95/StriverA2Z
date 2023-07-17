// This algorithm swaps array using two pointers l and r

#include <iostream>
using namespace std;

void myF(int l, int r,int num[])
{
    if( l>=r) return;

    swap(num[l],num[r]);
    myF(l+1,r-1,num);
}

int main()
{
    int n;
    cout<<"Enter the Array length: ";
    cin>>n;

    int num[n];
    
    cout<<"\n";
    cout<<"Enter the Number for array :"<< endl;

    for(int i = 0; i < n; i++)
    {
        cin>>num[i];
    }

    myF(0,n-1,num);

    cout<<"\nYour Array after swaping is:"<< endl;
    
    for(int i = 0; i < n; i++)
    {
        cout<<num[i];
        cout <<"\n";
    }
    
    return 0;
}