#include "Vector.h"
#include "Planet.h"
#include <iostream>

Vector::Vector(){
this->planets= new Planet*[0];
this->vSize=0;
}

Vector::~Vector(){
	for(unsigned int i=0; i<vSize; i++){
		delete planets[i];
	}
	delete[] planets;
}

Planet* Vector::read(unsigned int index){
	if(index>=vSize){return NULL;}
	return this->planets[index];
}


void Vector::insert(unsigned int index, Planet* p){
	unsigned int i=0;
	unsigned int tx= this->vSize;
	Planet** newPlanets= new Planet*[tx+1];
	if(index> this->size()){
		newPlanets = new Planet*[index+1];
		for(i=0;i <index;i++){
			newPlanets [i]=this->read(i);
		}
	    newPlanets [index]=p;
	    delete[] this->planets;
	    this->planets= newPlanets;
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
	delete[] this->planets;
	this->planets= newPlanets;
	this->vSize++;

}


bool Vector::remove(unsigned int index){
	Planet** newPlanets=new Planet*[vSize-1];
	if(index<0||index>=vSize){return false;}
	for(unsigned int i=0;i<index;i++){
		newPlanets[i]=this->planets[i];		
	}
	for(unsigned int i=index;i<vSize-1;i++){
			newPlanets[i]=this->planets[i+1];	

	}
	delete planets[index];
	delete[] planets;
	planets = newPlanets;
	this->vSize--;
	return true;
}
unsigned int Vector::size(){
	return this->vSize;
}
