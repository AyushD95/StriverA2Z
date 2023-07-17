// Print no from 1 to n
#include<iostream>
using namespace std;

void myFunction(int i, int n) 
{
    if (i > n) return;     //when i will be greater than n it will return 
    cout<< i << endl;
    myFunction(i+1,n);     //Now i value will be increased by 1
}

int main() 
{
    int n;
    cin >> n;
    
    myFunction(1, n);     //here we consider i=1 because we have to print from 1

    return 0;
}
