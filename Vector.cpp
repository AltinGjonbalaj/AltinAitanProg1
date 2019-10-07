#include "Vector.h"
#include "Planet.h"

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

void Vector::insert(unsigned int index,Planet* p){
	unsigned int i=0;
	unsigned int tx=this->current_planets;
	if(index>tx-1){return;}	
	Planet** newPlanets= NULL;
	newPlanets =new Planet*[tx+1];
	for(i<index){
		newPlanets [i]=this->planets[i];	
	}
	newPlanets[index]=p;
	for(i=index;i<tx;i++){
		newPlanets [i]=this->planets[i];
	}	
	delete this->planets;
	this->planets= newPlanets;
	this->current_planets+=1;
}

Planet* Vector::read(unsigned int index){
	if(index>=tx){return NULL;}
	if(this->planets[i]==NULL){return NULL;}
	return this->planets[i];

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
	return true;
}
unsigned int Vector::size(){
return this->current_planets;
}
