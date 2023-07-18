#include<bits/stdc++.h>
using namespace std;



int main(){

string s="123";

sort(s.begin(),s.end());

do{
    cout<<s<<endl;
  }
while(next_permutation(s.begin(),s.end())); // The permutations are printed in lexicographically ascending order. 
                                            //When there are no more permutations, the loop exits, and the program terminates.

vector<int> a={1,2,3,4,5,6};
int b=*max_element(a.begin(),a.end()); //stores max element

cout<<b<<endl;

int c=*min_element(a.begin(),a.end());  //stores min element

cout<<c;

return 0;
}