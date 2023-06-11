#include <bits/stdc++.h> 
class Queue {
   int itr;
   vector<int> vec;
   int frontt;
public:
   Queue() {
       itr=0;
       vec.resize(0);
       frontt=0;
   }
   /*----------------- Public Functions of Queue -----------------*/
   bool isEmpty() {
       if(frontt>itr-1)
       return true;
       else return false;
   }
   void enqueue(int data) {
       vec.push_back(data);
       itr++;
   }
   int dequeue() {
       if(frontt<=itr-1)
       {
       return vec[frontt++];
       }
       else return -1;
   }
   int front() {
       if(frontt<=itr-1)
       return vec[frontt];
       else return -1;
   }
};