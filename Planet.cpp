#include "Planet.h"
#include <cstdlib>

Planet::Planet(unsigned int distance){
	this->distance = distance;
	this->id= (unsigned long)this;
    this->pos = 0;
	int i = rand()%3;
	if(i==0){this->type='h';}
	if(i==1){this->type='r';}
	if(i==2){this->type='g';}
}

unsigned int Planet::orbit(){

	if(this->pos!=359){
		this->pos=this->pos+1;
		return this->pos;
	}
		
		this->pos=0;
		return this->pos;	  
}


