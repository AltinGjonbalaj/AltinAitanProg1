#include"List.h"
#include"Planet.h"

List::Node::Node(Planet* p){
this->Payload=p;
this->next=NULL;
this->prev=NULL;
}
List::Node::~Node(){
	delete Payload;
}
List::List(){
	this->head=NULL;
	this->tail=NULL;
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
  Node* z= new Node(p);
    if(this->head==NULL){  
	this->head=z;
	this->tail=z;
	return;
      }
  if (index>=this->size()){
    z->prev=this->tail;
    this->tail->next=z;
    this->tail=z;
    return;
  }
  this->curr= this->head;
  for (unsigned int i=0;i<index;i++){
    this->nextNode();
  }
  z->next=curr->next;
  z->prev=curr;
  curr->next=z;
  this->current_planets++;
  return;
// inserts an element at index, increasing the List size by 1
// if the insert index is out of bounds, you should append to
// the end of the list
}
Planet* List::read(unsigned int index){
  if(index>=this->size()||index<0){return NULL;}
  this->curr= this->head;
  for (unsigned int i=0;i<index;i++){
    this->nextNode();
  }
  return this->curr->Payload;

// returns a pointer to the Planet object at index
// if index is out of bounds, return NULL
}
bool List::remove(unsigned int index){
    if(index>=this->size()||index<0){return false;}
    this->curr= this->head;
    for (unsigned int i=0;i<index;i++){
      this->nextNode();
    }
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
    this->current_planets--;
    return true;

// remove the Planet object at index, decreasing the size of the Vector by 1.
// return true on successful deletion or false if index is out of bounds
}
unsigned int List::size(){
return this->current_planets;
}
