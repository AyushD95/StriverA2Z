#include<bits/stdc++.h>
using namespace std;

void STLBinarySearch(){

vector<int> v={1,2,3,4,5,6,7};

//in vector we have to sort 
// it is ony for search it cant print index
sort(v.begin(), v.end());
  
bool res= binary_search(v.begin(),v.end()-1,9);   //search in vector if elemet is found retun 1 else 0
cout<<res;    

}


void STLUpperBound(){

vector<int> v={1,2,3,4,5,6,7};
  
//in vector we have to sort 
sort(v.begin(), v.end());

int res= upper_bound(v.begin(),v.end(),6)-v.begin();   //search in vector if elemet is found  return the index of next higher element
cout<<"Index is: "<<res<<endl;    

int res2= upper_bound(v.begin(),v.end(),7)-v.begin();   //elemet is found  return the index of next higher element ie index 0f 7
cout<<"Index is: "<<res2;                               //if no element is fount it retutrs the index after last element
                                                        // if 2 same elements are present it will print the element with higher index 

}

void STLLowerBound(){

vector<int> v={1,3,4,5,6,7};
//in vector we have to sort 
sort(v.begin(), v.end());
  
int res= lower_bound(v.begin(),v.end(),6)-v.begin();   //search in vector if elemet is found  return the index of that element
cout<<"Index is: "<<res<<endl;                          // print index of 6 ie 4



int res2= lower_bound(v.begin(),v.end(),2)-v.begin();   //if it didnt find any element it points to next immediate greater elements index
cout<<"Index is: "<<res2<<endl;                         // it print the index o 3 ie 1
   

int res3= lower_bound(v.begin(),v.end(),8)-v.begin();   //in this case 8 is not present as well as element greater than 8 is also not present
cout<<"Index is: "<<res3<<endl;                         //in this case it print index after last element
                                                        // if 2 same elements are present it will print the element with lower index

}



int main(){

//STLBinarySearch();
//STLUpperBound();
//STLLowerBound();
return 0;
}
