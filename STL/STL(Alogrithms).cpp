#include<bits/stdc++.h>
using namespace std;

void Sort(){

    vector<int> v={2,1,5,3,6,7,4};

// Print vector as its values are assigned
for(auto it:v )
{
    cout<<it<<" ";      
}
cout<<endl;


sort(v.begin(),v.end());
// Print vector in sorted order ie asending order
for(auto it:v )
{
    cout<<it<<" ";      
}
  cout<< endl;


sort(v.begin(),v.end(),greater<int>());
// Print vector in sorted order ie dsending order
for(auto it:v )
{
    cout<<it<<" ";      
}
  cout<< endl;

}



int main(){
Sort();
return 0;
}