#include<bits/stdc++.h>
using namespace std;

void Pair(){ 
cout<<"Pairs:"<<endl;
pair<int,int> p={1,3};   // stores two values for same variable it can be same or different data type
cout<<p.first<<" "<<p.second<<endl;     // print 1 3

pair<int,char> p3={1,'B'};             //stores 2 different data types
cout<<p3.first<<" "<<p3.second<<endl;  // print 1 B

pair<int, pair<int,int>> p2={1,{2,3}};   // stores 3 values in pair
cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl; // print 1 2 3

pair<int,int> arr[]= { {1,2}, {2,5}, {3,6} };  // stores int 2 value for every index of array
cout<<arr[0].second<<endl;                     // print 2
}

void Vectors(){ 
    //  It is used when youd do not know the size of data structure

vector<int> v;      //declaration of vectors // it create an empty container

v.push_back(1);      // take 1 as input in container
v.emplace_back(2);   // take 2 as a input and put it back ie after 1
cout<<v[0]<<" "<<v[1]<<endl;

vector<pair<int,int>> v2;  // define vector of pair data type
v2.push_back({1,2});       // insert 1,2 in vector pair
v2.emplace_back(1,2);      // It also take 1,2 as input in pair vector but it do not require {}


vector<int> v3(5,100);   // size of 5 vector containg 100 5 times index starting from 0
v3.push_back(200);       // increase size of vecto to 6 and insert 200 at back
cout<<v3[0]<<" "<<v3[5]<<endl;  // print 100 and 200


vector<int> v4(5,20);
vector<int> v5(v4);     // copy v4 to v5 now v5 is of 5 size and contain 20 5 times
 
 // Iterator points to address
// acess data in vectors
// syntax of iterator

// data_structure<data_type>::iterator variable_name = v.begin();

 vector<int> v6={1,2,3,4,5};
 vector<int>::iterator it=v6.begin();
 
 cout<<*(it)<<" ";

 it++;
 cout<<*(it)<<" ";
 
 //more iterators
vector<int>::iterator p=v6.end();  //v6.end stores the address after the last element
p--;                               // to go on last element 
 cout<<*(p)<<" "<<endl;                  // prints last element 5
 
 
 cout<<v6.back()<<endl;        //print lact element but it cannot bes used with iterator
 

 vector<int> v7={100,20,10,150};

 for(vector<int>::iterator t=v7.begin(); t!=v7.end(); t++)
 {
    cout<<*(t)<<" ";
 }
 
cout<<endl;

for(auto it=v7.begin(); it!=v7.end(); it++)   //auto is used to assign data type acording to data
 {
    cout<<*(it)<<" ";
 }
 cout<<endl;

 for(auto it:v7)
 {
    cout<<it<<" ";
 }
cout<<endl;

// Erase function
vector<int> v8={1,3,5,7};

v8.erase(v8.begin());      // it erase the data in v8.begin thus now v.begin() is 3

cout<<v8[0]<<endl;               // 3,5,7 new vector

v8.erase(v8.begin()+1);      // delete 5
cout<<v8[1]<<endl;          //3,7 new vector
 
 // v.erase(start addres, addrs after end )
vector<int> v9={1,3,5,7};
 
v9.erase(v9.begin()+1, v9.begin()+3);  //it delete element from 3 to 5
  for(auto it:v9)
 {
    cout<<it<<" ";
 }
cout<<endl;


// Insert function
vector<int> v10={2,4,5,};

v10.insert(v10.begin(),1);   // 1,2,4,5 new vector

for(auto it:v10)
 {
    cout<<it<<" ";  
 }
cout<<endl;
 

 v10.insert(v10.begin()+2,3);   // 1,2,3,4,5 new vector

for(auto it:v10)
 {
    cout<<it<<" ";  
 }
cout<<endl;
// insert same element 2 or more times
// v.insert(add, no of time , element) 
 
 vector<int> v11={300,100,100};

v11.insert(v11.begin()+1,2,200);  // 300 200 200 100 100 new vec

for(auto it:v11)
 {
    cout<<it<<" ";  
 }
cout<<endl;
 
 
cout<<v11.size()<<endl;  // gives no element in vector
 
v11.pop_back(); // delete last element new vec is 300 200 200 100

v11.clear();  // clear all element in vect so no element are there in new vec
 
cout<<v11.empty();    // retun 0 if vec is not emty return 1 if vec is empty
 } 

void List(){

    list<int> l={2,3};

    l.push_back(4);
    l.emplace_back(5);

    l.push_front(1);
    l.emplace_front(0);

    for( auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    l.pop_back();
    l.pop_front();
    for( auto it:l)
    {
        cout<<it<<" ";
    }
    // rest all function are similar to vector

 }

void Deque(){
deque<int>dq= { 2,3};
dq.push_back(4);
dq.emplace_back(5);

dq.push_front(1);
dq.emplace_front(0);

for( auto it:dq )
{
    cout<<it<<" ";
}
cout<<endl;

dq.pop_back();
dq.pop_front();
for( auto it:dq )
{
    cout<<it<<" ";
}
 // rest all function are similar to vector
}

void Stack(){
// It is based on LIFO (last in first out)

// It is not index base

// it use mostly push,pop,top functions

stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.emplace(5);
cout<<st.top()<<endl;  // print 5

st.pop();          // delete top ie is 5
cout<<st.top()<<endl;     // print 4

cout<<st.size()<<endl;     // print 4

cout<<st.empty()<<endl;    // return 0

stack<int> s1,s2;    // decleare 2 stack s1,s2
s1.swap(s2);         // swap s1 with s2

}

void Queue(){
// It is based on FIFO (first in first out)

// it is like a line of people waitng for ticket
queue<int> q;
q.push(1);
q.push(2);
q.emplace(4);

q.back() += 5;  // back = 4 now back =4+5=9

cout<<q.back()<<endl;   // print 9
cout<<q.front()<<endl;      //print 1

q.pop();              //delete 1
cout<<q.front();        // print 2

// size swap empty same as stack
}

void PiorityQue(){  
// the guy who has largest value stays at top

//Maximum Heap
priority_queue<int> pq;
pq.push(5);
pq.push(2);
pq.push(8);
pq.emplace(10);         // is stored as 10 , 8, 5, 2

cout<<pq.top()<<endl;    // print 10

pq.pop();                //delete 10

cout<<pq.top()<<endl;      // print 8
// size swap empty same as others

//Minimum Heap
priority_queue<int,vector<int>,greater<int>> pq2;
pq2.push(5);
pq2.push(2);
pq2.push(8);
pq2.emplace(10);   //stores as 2, 5, 8, 10

cout<<pq2.top();    // print 2


}

void Set(){

// Stores everything in sorted order

// Stores unique

 set<int> s;
s.insert(1);   // {1}
s.insert(2);   //{1,2}
s.emplace(2);  //{1.2} as 2 is nout unique it does not store
s.insert(4);   //{1,2,4}
s.insert(3);   //{1,2,3,4} stores 3 in sorted order

for( auto it: s)
{
   cout<<it<<" ";   // print 1,2,3,4
}
   cout<<endl;

   auto it=s.find(4);   //returns an iterator which points to address 3
  
   auto itt=s.find(5);   // as 5 is not in set it return s.end() adress ie adress after 4
   
   s.erase(3);   // erase 3 and maintain the sorted order

   int cnt= s.count(2);   // if 2 exist it take 1 else 0
   cout<<cnt<<endl;       // 2 exist so print 1
    
    auto i=s.find(2);
    s.erase(it);          // erase through iterator

  //s.erase(start add, add after end)
 set<int> s2={1,2,3,4};
auto it1=s2.find(2);
auto it2=s2.find(4);

s2.erase(it1,it2);  // delete 2,3 new sei si 1,4

for( auto it3: s2)
{
   cout<<it3<<" ";   // print 1,4
}
   cout<<endl;

auto it3= s2.lower_bound(3);
auto it4= s2.lower_bound(3);

}

void MultiSet(){
// Stores everything in sorted order

// But not  unique

multiset<int> ms;
ms.insert(1);// 1
ms.insert(1);//1,1
ms.insert(1);// 1,1,1

ms.erase(1); //erase all the 1 element

int count=ms.count(1);  // it print 0


ms.erase(ms.find(1));  // it will erase 0nly first occurence of 1



}

void UnorderedSet(){

// Do not stores in sorted order

// Stores unique

// upper bound and lower bound function does not work

unordered_set<int> us;


}

void Map(){

// map is a containr which stores everyting in respect ofkey ad value

// unique key and values can be same or different

// map stores unique keys in sorted order    similar set

// map<dtat type of key, value>

map<int,int> m;
map<int,pair<int,int>>m2; //  1 key 2 values
map<pair<int,int>,int>m3;   // 2 keys 1 value

map<int,int> m4;
m4[1]=2;   // store 2 in key 1
m4.emplace(3,1);   // store 1 in key 3
m4.insert({2,4});   // stores 4 in key 2

// in map it is stored in sorted order of tus oreder of values is 2,4,1

for( auto it:m4)
{
   cout<<"Key-"<<it.first<<", Value-"<<it.second<<endl;  //we have to print it like pairs
}
cout<<endl<<endl;

map<pair<int,int>,int>m5; 

m5[{1,2}]=3;   // same value for two different keys
m5[{3,4}]=4;


for( auto it:m5)
{
   cout<<"Key-"<<it.first.first<<", Value-"<<it.second<<endl;  //we have to print it like pairs
   cout<<"Key-"<<it.first.second<<", Value-"<<it.second<<endl;
}
cout<<endl;

map<int,int> m6;
m6[1]=2;   // store 2 in key 1
m6.emplace(3,1);   // store 1 in key 3
m6.insert({2,4});   // stores 4 in key 2

cout<<"Value-"<<m6[1]<<endl; //prinnt 2

auto it=m6.find(3);
cout<<(*it).second<<endl;   // print value stored in 3rd key

auto it1= m6.lower_bound(1);
cout<<(*it1).second<<endl;  // print value of lower bound

auto it2= m6.upper_bound(1);
cout<<(*it2).second<<endl;    // print value of upper bound

}

void Multimap(){

multimap<int,int>mm;
// store in duplicate keys

//stores in sorted order

//ex {1,2},{1.3}
}

void UnorderedMap(){
unordered_map<int,int>um;

// store in Unique keys

//stores in unsorted order

//ex {2,2},{1.3}
}







int main(){

Pair();

//Vectors();

//List();

//Deque();

//Stack();

//Queue();

//PiorityQue();

//Set();

//MultiSet();

//UnorderedSet();

//Map();

//Multi map();

//UnorderedMap();
return 0;
}
