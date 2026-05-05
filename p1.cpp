#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = nullptr;
    }

    void insertbefore(int x, int y){
        Node* q = this;
        Node* nn = new Node(y);
        while(q->next != nullptr && q->next->val != x){
            q = q->next;
        }
        if(q->next == nullptr) return;
        nn->next = q->next;
        q->next = nn;
    }
    
    
    Node* deletebefore(Node* head, int x){
       
        if (head == nullptr || head->next == nullptr || head->val == x) {
            return head;
        }

       
        if (head->next->val == x) {
            Node* temp = head;     
            head = head->next;   
            delete temp;           
            return head;
        }

        
        Node* q = head;
        while(q->next != nullptr && q->next->next != nullptr && q->next->next->val != x){
            q = q->next;
        }

       
        if (q->next != nullptr && q->next->next != nullptr && q->next->next->val == x) {
            Node* nodeToDelete = q->next;        
            q->next = q->next->next;            
            delete nodeToDelete;               
        }
        
        return head;
    }

    void display(){
        Node* p = this;
        while(p){
            cout << p->val << "-->";
            p = p->next;
        }
        cout << "NULL" << endl;
    }    
};

int main(){
    Node* n1 = new Node(5);
    Node* n2 = new Node(3);
    Node* n3 = new Node(9);
    Node* n4 = new Node(199);
    Node* n5 = new Node(399);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    
    cout << "Original List: ";
    n1->display();
    
    cout << "After inserting 99 before 3: ";
    n1->insertbefore(3, 99);
    n1->display();
    
   
    cout << "After deleting before 199 (deletes 9): ";
    n1 = n1->deletebefore(n1, 199); 
    n1->display();
    
    
    cout << "After deleting before 99 (deletes 5 / the head): ";
    n1 = n1->deletebefore(n1, 99); 
    n1->display();

    return 0;
}