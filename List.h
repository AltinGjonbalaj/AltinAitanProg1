#ifndef LIST_H
#define LIST_H
class List{
private:
	unsigned int size;
	Node head;
	Node tail;
	Node curr;
public:
	inline Node next(){curr=curr->next;return curr;}
	List();
	~List();
	void insert(unsigned int,Planet*);
	Planet* read(unsigned int);
	bool remove (unsigned int);
	unsigned int size();

        //you may add any additional methods you may need.
};
class Node{
private:
	Planet* Payload;
	Node next;
	Node prev;
public:
inline Planet(){return Payload;}
inline Node next(){return next;}

};
#endif
