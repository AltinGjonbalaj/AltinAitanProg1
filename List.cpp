#include"List.h"
#include"Planet.h"

Node::Node(Planet * p){
	Payload = p;
	next = NULL;
	prev = NULL;
}

Node::~Node(){
	delete Payload;
}

List::List(){
	this->head = NULL;
	this->tail = NULL;
	this->tsize = 0;
// A pointer to a head and tail node, both initialized to NULL
}
List::~List(){
	Node* del = this->head;
	Node* curr;
	while(this->head != NULL){
		curr = this->head->next;
		delete del;
		del = curr;
	}
}
void List::insert(unsigned int index, Planet * p){
  Node* temp = new Node(p); 
  if(this->head == NULL){
    this->head = temp;
    this->tail = temp;
    return;
  }
  if (index >= tsize){
    temp->prev = this->tail;
    this->tail->next= temp;
    this->tail= temp;
    return;
  }

  this->curr= this->head;
  for (unsigned int i=0; i<index; i++){
    this->curr = curr->next;
  }
  temp->next = curr->next;
  temp->prev = curr;
  curr->next = temp;
  this->tsize++;
  return;
// inserts an element at index, increasing the List size by 1
// if the insert index is out of bounds, you should append to
// the end of the list
}
Planet* List::read(unsigned int index){
  if(index>=this->tsize||index<0){return NULL;}
  this->curr= this->head;
  for (unsigned int i=0;i<index;i++){
    this->curr = curr->next;
  }
  return this->curr->Payload;

// returns a pointer to the Planet object at index
// if index is out of bounds, return NULL
}
bool List::remove(unsigned int index){
    if(index>=this->tsize||index<0){return false;}
    this->curr= this->head;
    for (unsigned int i=0;i<index;i++){
    	this->curr = curr->next;
    }
    curr->next->prev = curr->prev;
    curr->prev->next = curr->next;
    this->tsize--;
	return true;
// remove the Planet object at index, decreasing the size of the Vector by 1.
// return true on successful deletion or false if index is out of bounds
}
unsigned int List::size(){
	return this->tsize;
}
