//queue structure both side are open and other side is used to delete and rear side is used to insert
//front pointer - variable contain position of element to be deleted
//rear pointer- variable contain position to be inserted
//ADT of queue - enqueue and dequeue

//implementing queue using array
#include <iostream>
#define N 5
using namespace std;
int arr[N];
int F=-1;
int R=-1;

void enqueue(int x){
    if(R==N-1){
        cout<<"queue overflow";
    }
    else{
        if(R==-1){
        F++;
        R++;
        
    }
    else{
        R++;
    }
    arr[R]=x;
    }
}
//both F and R equal means other than -1 element is left in queue
int dequeue(){
    if(F==-1){
        cout<<"queue underflow";
    }
    else{
        int y=arr[F];
        cout<<y<<endl;
        if(F==R){
            F=-1;
            R=-1;

        }
        else{
            F++;
        }
        return y;
    }
    }

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    
}
