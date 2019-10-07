#include"List.h"
#include"Planet.h"
List::List(){
this->head=NULL;
this->tail=NULL;
// A pointer to a head and tail node, both initialized to NULL
}
List::~List(){

  // A destructor to clean up memory
}
void List::insert(unsigned int index, Planet * p){
  if(this->head==NULL){
    this->head=p;
    this->tail=p;
    return;
  }
  if (index=>this->size){
    p->prev=this->tail;
    this->tail->next=p;
    this->tail=p;
    return;
  }
  this->curr= this->head;
  for (unsigned int i=0;i<index;i++){
    this->next();
  }
  p->next=curr->next;
  p->prev=curr;
  curr->next=p;
  this->size++;
  return;
// inserts an element at index, increasing the List size by 1
// if the insert index is out of bounds, you should append to
// the end of the list
}
Planet* List::read(unsigned int index){
  if(index>=this->size||index<0){return NULL;}
  this->curr= this->head;
  for (unsigned int i=0;i<index;i++){
    this->next();
  }
  return this->curr;

// returns a pointer to the Planet object at index
// if index is out of bounds, return NULL
}
bool List::remove(unsigned int index){
    if(index>=this->size||index<0){return false;}
    this->curr= this->head;
    for (unsigned int i=0;i<index;i++){
      this->next();
    }
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
    this->size--;

// remove the Planet object at index, decreasing the size of the Vector by 1.
// return true on successful deletion or false if index is out of bounds
}
unsigned int List::size(){
return this->size;
}
