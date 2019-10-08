#ifndef LIST_H
#define LIST_H
#include "Planet.h"
#include <cstdlib>


class List{
private:
	unsigned int current_planets;
	class Node{
public:
	Planet* Payload;
	Node* next;
	Node* prev;
	Node();
	~Node();
	Node(Planet* p);
};

	Node* head = NULL;
	Node* tail = NULL;
	Node* curr = head;

public:
	List();
	~List();
	void insert(unsigned int, Planet*);
	Planet* read(unsigned int);
	bool remove (unsigned int);
	unsigned int size();
	inline Node* nextNode(){curr = curr->next; return curr;}
};
#endif
