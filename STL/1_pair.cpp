#include <bits/stdc++.h>
using namespace std;


// 1) Pairs are the combination of two values of maybe same or different type initialized and declared as 

// pair <int, int> pair_name = {value1,value2}

// Similarily eg 
// pair <int , int > p1 = {3,5};
// pair <int , char> p2 = {3, 'c'};
// pair <char,char> p3 = {'A','b'};
// <pair <int , string > p4 = {"Harshit"}

// to access values of a pair we can use the .first and .second method like 

// cout << p1.first << " " << p1.second << endl;

// You can store three values too in a pair like 
// pair <int , pair <int , int >> p11 = {2,{3,5}};

// You can also store tha array of the pair 
// pair <int , int > p12[] = {{2,3},{5,4},{12,5}};


int main() {
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
    return 0;
    
}