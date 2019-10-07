#include "Star.h"
#include "Planet.h"
#include <cstdlib>

//Starlist methods
Starlist::Starlist(){
	this->current_planets = 0;
	this->planets = new List();
}
Starlist::~Starlist(){
	delete planets;
}
unsigned long Starlist::addPlanet(){
	unsigned int z= rand()%100000;
	unsigned long b=0;
	Planet* p = new Planet(z);
	b=p->getID();
	this->planets->insert(this->current_planets,p);
	return b;
}
bool Starlist::removePlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets->read(i)!=NULL){
		idx=this->planets->read(i)->getID();
		if(idx==id){this->planets->remove(i);
			return true;}
	i++;
	}
	return false;
}
Planet * Starlist::getPlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets->read(i)!=NULL){
		idx=this->planets->read(i)->getID();
		if(idx==id){return this->planets->read(i);}
	i++;
	}
	return NULL;
}
void Starlist::orbit(){
		unsigned int i=0;
	while(this->planets->read(i)!=NULL){
		this->planets->read(i)->orbit();
	i++;
	}

}
void Starlist::printStarInfo(){
//NEEDS IMPLEMENT
}

//Starvector methods
Starvector::Starvector(){
	this->current_planets=0;
	this->planets=NULL;
}
Starvector::~Starvector(){
//NEEDS IMPLEMENT
}
unsigned long Starvector::addPlanet(){
	unsigned int z= rand()%100000;
	unsigned long b=0;
	Planet* p = new Planet(z);
	b=p->getID();
	this->planets->insert(this->current_planets,p);
	return b;
}
bool Starvector::removePlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets->read(i)!=NULL){
		idx=this->planets->read(i)->getID();
		if(idx==id){this->planets->remove(i);
			return true;}
	i++;
	}
	return false;
}
Planet * Starvector::getPlanet(unsigned long id){
unsigned int i=0;
	unsigned long idx=0;
	while(this->planets->read(i)!=NULL){
		idx=this->planets->read(i)->getID();
		if(idx==id){return this->planets->read(i);}
	i++;
	}
	return NULL;

}
void Starvector::orbit(){
	unsigned int i=0;
	while(this->planets->read(i)!=NULL){
		this->planets->read(i)->orbit();
	i++;}
}
void Starvector::printStarInfo(){
//NEEDS IMPLEMENT
}
