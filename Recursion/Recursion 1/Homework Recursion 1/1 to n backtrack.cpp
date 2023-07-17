//Backtracking means going in reverse direction 
#include <iostream>
using namespace std;

void myFunction(int n) 
{
	if (n < 1) return;
	myFunction(n - 1);
	cout << n << endl;
}

int main() 
{
    int n;
	cin >> n;
	myFunction(n);

	return 0;
}