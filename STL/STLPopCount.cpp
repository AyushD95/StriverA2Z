#include<bits/stdc++.h>
using namespace std;



int main(){
int n=7;                      //in binary 0111
int count= __builtin_popcount(n);   
cout<<count<<endl;             // it print no of set bits ie 3 as we cout there are 3 1's

long long n2=12345667;  // in binary 1011 1100 0110 0001 0100 0011
int count2=__builtin_popcountll(n2);
cout<<count2;       //it print no of set bits ie 11 as we cout there are 11  1's
return 0;
}