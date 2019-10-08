#include "Vector.h"
#include "Planet.h"
#include <iostream>

Vector::Vector(){
this->planets= NULL;
this->current_planets=0;
}

Vector::~Vector(){
	for(unsigned int i=0; i<current_planets; i++){
		this->planets[i]=NULL;
	}
	delete this->planets;
}

Planet* Vector::read(unsigned int index){
	if(index>=vSize){return NULL;}
	return this->planets[index];
}


void Vector::insert(unsigned int index,Planet* p){
	unsigned int i=0;
	unsigned int tx= this->vSize;
	Planet** newPlanets= NULL;
	newPlanets =new Planet*[tx+1];
	if(index>this->size()){
		newPlanets =new Planet*[index+1];
		for(i=0;i<index;i++){
		newPlanets [i]=this->read(i);
		}
	newPlanets [index]=p;
	
	delete this->planets;
	this->planets= newPlanets;
	this->current_planets+=1;
	this->vSize= index+1;
	return;
	}
	
	for(i=0;i<index;i++){
		newPlanets [i]=this->planets[i];	
	}
	newPlanets[index]=p;
	if(index<tx){
		for(i=index+1;i<tx;i++){
		newPlanets [i]=this->planets[i];
		}
	}	
	delete this->planets;
	this->planets= newPlanets;
	this->current_planets+=1;
	this->vSize++;
}


bool Vector::remove(unsigned int index){
	unsigned int tx = (this->current_planets);
	Planet** newPlanets= NULL;
	newPlanets =new Planet*[tx-1];
	if(index<0||index>=tx){return false;}
	unsigned int idx=index;
	for(unsigned int i=idx;i<tx-1;i++){
		this->planets[i]=this->planets[i+1];		
	}
	for(unsigned int i=0;i<tx-1;i++){
			newPlanets[i]=this->planets[i];	

	}
	this->current_planets--;
	this->vSize++;
	return true;
}
unsigned int Vector::size(){
return this->vSize;
}
