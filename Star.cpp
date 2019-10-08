#include "Star.h"
#include "Planet.h"
#include <cstdlib>
#include <iostream>

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
	this->current_planets++;	
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
	this->current_planets--;
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
//    std::cout<< "This star is composed of planets: "<< std::endl;
//	    for(int i = 0; i < (int)current_planets; i++){
//		    std::cout<< "Planet" << planets->read(i)->getType() << ". With ID" << planets[i]->getID() << std::endl;	    
}

//Starvector methods
Starvector::Starvector(){
	this->current_planets=0;
	this->planets=new Vector();
}
Starvector::~Starvector(){
    delete planets;
}
unsigned long Starvector::addPlanet(){
std::cout<<"hit line";
	unsigned int z= rand()%100000;
std::cout<<"hit line";	
	unsigned long b=0;
std::cout<<"hit line";	
Planet* p = new Planet(z);
std::cout<<"hit line";
	b=p->getID();
std::cout<<"hit line8";
	this->planets->insert(this->current_planets,p);
std::cout<<"hit line9";
	this->current_planets++;
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
//    std::cout<< "This star is composed of planets: "<< std::endl;
//	    for(int i = 0; i < (int)current_planets; i++){
//		    std::cout<< "Planet" << planets[i]->getType() << ". With ID" << planets[i]->getID() << std::endl;	    
}
