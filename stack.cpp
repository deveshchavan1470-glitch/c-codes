//stack has one end open from that end input and output operations are being processed
//stack follows LIFO principle
//insertionn in stack is called push operation
//deletion from stack is called pop operation
//in push operation pointer is been implemented first(TOS) then we push values
#include <iostream>
#define n 5
using namespace std;


int Tos=0;
int arr[n];
void push(int x)
{
    if(Tos==n-1)
    {
        cout<<"Stck overflow";

    }
    else
    {
        Tos++;
        arr[Tos]=x;
    }
}

int pop(){
    int y;
    if (Tos==-1)
    {
        cout<<"stack underflow";

    }
    else
    {
        y=arr[Tos];
        cout<<y << endl;
        Tos--;
        return y;
    }
}

int main(){
   
     push(5); 
      push(10); push(4); push(15); 
    pop();
    pop(); pop(); pop();
}