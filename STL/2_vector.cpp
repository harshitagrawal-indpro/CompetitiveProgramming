#include <bits/stdc++.h>
using namespace std;
// 2) Vector is the dynamic arrays with continuous memory allocs 
// it can be initialized and declared by 

vector <int> v1= {1,2,3,4,5,6};
// also initialization size 
vector <int> v2(5);
// also intialisation with size and value 
vector <int> v2(5,20);
// also initialize as a copy of another as 
vector <int> v3(v2);

// add and removing elements in a vector 
// we can use the push_back or emplace_back 

// Acessing elements of a vector 
// (using iterators basically two kinds one is iterator (begin or end ) and other is reverse_iterator (rbegin or rend)

// you can initiate the iterator as 
vector <int>::iterator i1= v1.begin();
// or auto i1 = v1.begin();

vector <int>::iterator i1= v1.end();
// or auto i1 = v1.end();

// also for reverse one you can use 
vector <int>::reverse_iterator i2 = v1.rbegin();
// or auto i2= v1.rbegin();

// vector <int>::reverse_iterator i2 = v1.rend();
// or auto i2 = v1.rend();

// Accessing values of a vector is 

// 1) using for loop :- 
// for (auto i of v1 ) 

// 2) using for loop via iterator 
// for (vector <int>::iterator i1 = v.begin(); i1!= v.end(); i1++ }

// 3) using for loop but auto 
// for (auto i1= v.begin(); i1 = v.end(); i1++)

// Insert and delete an from a vector 
// v.insert(iterator_of_pos , value)
// v.insert(iterator_of_pos , frequency , value)
// v.insert(iterator_of_pos , refernce_vector_start, refernce_vector_end)

// v.erase(pos_to_erase);
// v.erase(ierator_from , iterator_to); // excludes the last 

// Also some built in methods 
// v1.size()
// v2.pop_back()
// v2.swap(v1)
// v1.empty()


