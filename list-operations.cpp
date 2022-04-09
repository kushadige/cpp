#include <iostream>
using std::cout;
class Node {
    int info;
    Node *next = nullptr;
public:
    Node(){
        cout << "node constructor\n";
    }
    ~Node(){
        cout << "node destructor\n";
    }
    
    friend void insafter(Node *p, int x);
    friend void delafter(Node *p);
    friend void printlist(Node *p);
    friend void reverse(Node *p);
};
void insafter(Node *p, int x){
    Node *newNode = new Node();
    newNode->info = x;
    newNode->next = p->next;
    p->next = newNode;
}
void delafter(Node *p){
    if(p->next==nullptr){
        cout << "void deletion\n";
        return;
    }
    Node *temp;
    temp = p->next;
    p->next = temp->next;
    delete temp;
}
void printlist(Node *p){
    Node *temp = p->next;
    while(temp!=nullptr){
        cout << temp->info << "-";
        temp = temp->next;
    }
    cout << "\n";
}

void reverse(Node *p){
    Node *temp = p->next;
    
    Node *a=temp,*b=nullptr;
    while(temp!=nullptr){
        a = temp->next;
        temp->next = b;
        b = temp;
        temp = a;
    }
    
    p->next = b;
}
int main(){
    Node *list = new Node();
    
    insafter(list,10);
    insafter(list,20);
    insafter(list,30);
    insafter(list,40);
    insafter(list,50);
    
    printlist(list);
    
    reverse(list);
    
    printlist(list);
    
    delafter(list);
    delafter(list);
    
    printlist(list);
    
    delafter(list);
    delafter(list);
    delafter(list);
    delafter(list);
    delafter(list);
    delafter(list);
    delete list;
}