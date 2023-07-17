 #include<iostream>
using namespace std;

bool myF(int i,string &n)
{
    if(i>=n.size()/2) return true;

    if(n[i]!=n[n.size()-i-1])  return false;
return myF(i+1,n);
}


int main(){
string n;
cout<<"Type the name which you want to check Palindrome: ";
cin>>n;
cout<<myF(0,n);




return 0;
}