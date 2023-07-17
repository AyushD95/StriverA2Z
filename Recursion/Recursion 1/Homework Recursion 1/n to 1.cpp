//print from n to 1
#include<iostream>
using namespace std;

void myFunction(int i) 
{
	if (i < 1) return ;
	cout<< i << endl;
	myFunction(i - 1);
}

int main() 
{
	int n;
	cin>>n;
	myFunction(n);

	return 0;
}