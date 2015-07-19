#ifndef LINKED_LIST
#define LINKED_LIST

struct Node {
  int data;
  Node* next;
  Node() : data(0), next(NULL) {}
  Node(int data, Node* next) {
    this->data = data;
    this->Next = Next;
  }

};

class LinkedList {
public:
  LinkedList();
  LinkedList(const LinkedList&);
  ~LinkstList();
private:
  Node* head;
};


#endif
