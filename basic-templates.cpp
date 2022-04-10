#include <fstream>
#include <iostream>
using std::ofstream;
using std::ifstream;
using std::cout;
using std::string;

template <typename T>
class Node {
public:
    T info;
    Node *rear = nullptr;
    Node *front = nullptr;
};

template <typename T>
class Queue {
    Node<T> *head = nullptr;
    Node<T> *back = nullptr;
public:
    ~Queue(){
        while(!empty()){
            remove();
        }
    }
    void insert(T x){
        if(head==nullptr && back==nullptr){
            Node<T> *newNode = new Node<T>();
            newNode->info = x;
            head = newNode;
            back = newNode;
            return;
        }
        Node<T> *newNode = new Node<T>();
        newNode->info = x;
        newNode->front = back;
        back->rear = newNode;
        back = newNode;
    }
    void remove(){
        if(head==nullptr){
            cout << "void deletion\n";
            return;
        }
        Node<T> *temp = head->rear;
        delete head;
        head = temp;
    }
    bool empty(){
        return head == nullptr;
    }
    Node<T>* getHead(){
        return head;
    }
    Node<T>* getBack(){
        return back;
    }
};
int main(){
    
    Queue<string> queue;
    queue.insert("onalti");
    queue.insert("yirmibir");
    queue.insert("otuz");
    queue.insert("kirk");
    queue.insert("elli50");
    queue.insert("altmisbes");
    
    
    //assigning values to the file
    ofstream out;
    out.open("dosya.txt");
    
    Node<string> *temp = queue.getHead();
    while(temp!=nullptr){
        out << temp->info << "-";
        temp = temp->rear;
    }
    out.close();
    
    
    //writing to consol
    ifstream in;
    in.open("dosya.txt");
    string s;
    in >> s;
    
    in.close();
    cout << s << "\n";
}