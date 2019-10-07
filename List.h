#ifndef LIST_H
#define LIST_H
#include "Planet.h"
#include <cstdlib>

class Node{
public:
	Planet* Payload;
	Node* next;
	Node* prev;
	Node(Planet *);
	~Node();
};

class List{
public:
	unsigned int tsize;
	Node* head = NULL;
	Node* tail = NULL;
	Node* curr = head;
	List();
	~List();
	void insert(unsigned int, Planet*);
	Planet* read(unsigned int);
	bool remove (unsigned int);
	unsigned int size();
	//inline Node* nextnode(){curr = curr->next; return curr;}
};
#endif
