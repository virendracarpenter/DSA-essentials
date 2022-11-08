#include<iostream>
using namesapce std;

class Node{
  int data;
  public:
  Node * next;
  Node(int d):data(d),next(NULL){}
  friend class Queue;
};

class Queue{
  Node * head;
  Node * tail;
  public:
  Queue():head(NULL),tail(NULL){};

  void push(int data){
    if(head==NULL){
      Node* n = new Node(data);
      head = tail = n;
    } else {
      Node* n = new Node(data);
      tail->next = n;
      tail = n;
    }
    void pop(){
      Node* temp = head;
      head = head->next;
      temp->next=NULL;
      delete temp;
    }
  }

};



int main(){
  

  return 0;
}
