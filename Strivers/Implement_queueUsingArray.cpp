#include<iostream>
using namespace std;
class Queue{
public:
    int arr[5];
    int f,b = 0;  //front and back variable

    int size(){
        return b-f;
    }
//push function for queue. starts from back
   void push(int value){
    if(size()==5){ 
    cout<<"Queue full, overflow";
    return;
    }

    arr[b] = value;
    b++;
   }

   void pop(){
    if(size()==0){ 
    cout<<"Queue empty underflow";
    return;
    }
     f++;
   }

   int front(){  //top element
       return arr[f];
   }
   int back(){  //last element
       return arr[b-1];
   }

   bool empty(){  //empty() func
   if(b-f==0) return true;
   else return false;
   }

   void display(){  //showing queue run from f to (b-1)
   for(int i=f ; i<b ; i++){  
    cout<<arr[i];
   }
   }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size();
    q.display();   //shows array element from f to (b-1)

    q.pop();
    cout<<q.size();

    q.push(60);
    cout<<q.size();
    q.display();
}