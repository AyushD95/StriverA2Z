#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //if they are same
    if(p1.first>p2.first) return true;
    return false;

}

int main(){

pair<int,int> a[]={{1,2},{2,1},{4,1}};
int n = sizeof(a) / sizeof(a[0]);
//sort it acoording to second element in ascending
// if second elements is same then sort according to firsi in decending

sort(a,a+n,comp);

  for (auto p : a) {
        cout <<"{"<<p.first<<","<<p.second<<"},";
    }
return 0;
}