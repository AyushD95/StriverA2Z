//Basic Recursion function using condition.

#include <iostream>
using namespace std;
int num = 0;

void myFunction() 
{
  if (num == 4) return;    //Return only when n=4 and function complete

  cout << num << endl;
  num++;                  //increment value by 1

  myFunction();
}

int main() 
{
  myFunction();            // call the function
  return 0;
}
