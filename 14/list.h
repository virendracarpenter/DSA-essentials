class List;

class Node{
  int data;
public:
  Node* next;
  Node(int d):data(d),next(NULL){}
  
  int getData(){
    return data;
  }
  friend class List;
};

class List{
  Node* head;
  Node* tail;

  void rev(Node* prt){
    if(prt->next==NULL){
      goto last;
      return;
    }
    rev(prt->next);
  last:
    std::cout << prt->data << "->";
  }
public:
  List():head(NULL),tail(NULL){}
  
  Node* begin(){
    return head;
  } 

  void push_front(int data){
    if(head==NULL){
      Node* n = new Node(data);
      head = tail = n;
      return;
    } else{
      Node * n = new Node(data);
      n->next = head; // (*next).n = head; 
      head = n;
    }
  }

  void push_back(int data){
    if(head==NULL){
      Node* n = new Node(data);
      head = tail = n;
    } else{
      Node* n = new Node(data);
      tail->next = n;
      tail = n;
    }
  }
  void insert(int data, int pos){
    if(pos==0){
      push_front(data);
      return;
    }
    Node* temp = head;
    for(int i = 1; i<= pos-1; i++)
      temp = temp->next;
    Node* n = new Node(data);
    n->next = temp->next;
    temp->next = n;
    }
  int search(int key){
    Node* temp = head;
    int idx = 0;

    while(temp!=NULL){
      if(temp->data==key)
        return idx;
      idx++;
      temp  = temp->next;
    }
    return -1;
  }
  void pop_front(){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  void pop_back(){
    Node* temp = head;
    while(temp->next->next!=NULL){
      temp = temp->next;
    }
    Node* last = temp->next;
    delete last;
    temp->next = NULL;
    tail = temp;
  }
  void remove(int pos){
    Node* temp = head;
    for(int i = 1; i <=pos-1; i++)
      temp = temp->next;
    Node* n = temp->next;
    temp->next = n->next;
    n->next = NULL;
    delete n;
  }
  void reversePrint(){
    rev(head);
  }
  void reverse(note*)
};
