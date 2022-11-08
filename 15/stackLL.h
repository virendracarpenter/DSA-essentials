
template<typename T>
class Stack;

template<typename T>
class Node{
public: 
  T data;
  Node<T> * next;

  Node(T d){
    data = d;
  }
};

class Stack{
  Node<T> * head;
public:
  
  Stack(){
    head = NULL;
  }

  void push(T data){
    Node<T> * n = new Node<T>(data);
    n->next = head;
    head = n;
  }
  void pop(){
    if(head!=NULL){
    Node<T> * temp = head;
    head = head->next;
    delete temp;
    }
  }  

  bool empty(){
    return head==NULL;
  }
  T top(){
    return head->data;
  }

};
