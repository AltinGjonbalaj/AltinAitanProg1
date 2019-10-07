#include "Star.h"
#include "Planet.h"
#include <cstdlib>

//Starlist methods
Starlist(){
	this->current_planets=0;
	this->planets= new List();
}
~Starlist(){
//NEEDS IMPLEMENT
}
unsigned long addPlanet(){
	unsigned int z= rand()%100000;
	unsigned long b=0;
	Planet p = new planet(z);
	b=p.getID();
	this->planets.insert(this->current_planets,p);
	return b;
}
bool removePlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets.read(i)!=NULL){
		idx=this->planets.read(i).getID();
		if(idx==id){this->planets.remove(i);
			return true;}
	i++;
	}
	return false;
}
Planet * getPlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets.read(i)!=NULL){
		idx=this->planets.read(i).getID();
		if(idx==id){return this->planets.read(i);}
	i++;
	}
	return NULL;
}
void orbit(){
		unsigned int i=0;
	while(this->planets.read(i)!=NULL){
		this->planets.read(i).orbit();
	i++;
	}

}
void printStarInfo(){
//NEEDS IMPLEMENT
}

//Starvector methods
Starvector(){
	this->current_planets=0;
	this->planets=NULL;
}
~Starvector(){
//NEEDS IMPLEMENT
}
unsigned long addPlanet(){
	unsigned int z= rand()%100000;
	unsigned long b=0;
	Planet p = new planet(z);
	b=p.getID();
	this->planets.insert(this->current_planets,p);
	return b;
}
bool removePlanet(unsigned long id){
	unsigned int i=0;
	unsigned long idx=0;
	while(this->planets.read(i)!=NULL){
		idx=this->planets.read(i).getID();
		if(idx==id){this->planets.remove(i);
			return true;}
	i++;
	}
	return false;
}
Planet * getPlanet(unsigned long id){
//NEEDS IMPLEMENT
}
void orbit(){
	unsigned int i=0;
	while(this->planets.read(i)!=NULL){
		this->planets.read(i).orbit();
	i++;}
void printStarInfo(){
//NEEDS IMPLEMENT
}
