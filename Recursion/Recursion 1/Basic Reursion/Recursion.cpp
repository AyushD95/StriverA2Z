// Basic Recursion function .

#include<iostream>
using namespace std;

void myFunction() 
{
  cout << "I just";
  myFunction();   //call functions until it get segmentation error
}                 //As incomplete functions are stored in stack at some point Stack get overflowed and shows error

int main() 
{
  myFunction(); // call the function
  return 0;

}
