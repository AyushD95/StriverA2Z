//Print n times something
#include<iostream>
using namespace std;

void myFunction(int i, int n) {
  if (i > n)return;

  cout << "My name is ayush" << endl;
  myFunction(i + 1, n);

}

int main() 
{
  int n;
  cin >> n;
  myFunction(1, n);
  
  return 0;
}
