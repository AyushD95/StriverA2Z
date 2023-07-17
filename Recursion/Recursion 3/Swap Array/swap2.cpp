// This algorithm swaps array using single pointers i

#include <iostream>
using namespace std;

void myF(int i, int n,int num[])
{
    if( i>=n/2) return;

    swap(num[i],num[n-i-1]);
    myF(i+1,n-i-1,num);

}

int main()
{
    int n;
    cout<<"Enter the Array length: ";
    cin>>n;

    int num[n];
    
    cout<<"\n";
    cout<<"Enter the Number for array :"<< endl;

    for(int k = 0; k < n; k++)
    {
        cin>>num[k];

    }

    myF(0,n,num);

    cout<<"\nYour Array after swaping is:"<< endl;
    
    for(int k = 0; k < n; k++)
    {
        cout<<num[k];
        cout <<"\n";
    }
    



    return 0;
}