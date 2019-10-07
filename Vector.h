#ifndef VECTOR_H
#define VECTOR_H
#include "Planet.h"
#include <cstdlib>
class Vector{
private:
	unsigned int current_planets;
	unsigned int vSize;
public:
	Planet**planets;
	Vector();
	~Vector();
	void insert(unsigned int,Planet*);
	Planet* read(unsigned int index);
	bool remove(unsigned int index);
	unsigned int size();
	
    //you may add any additional methods you may need.
};
#endif
