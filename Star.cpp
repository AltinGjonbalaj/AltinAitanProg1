#include "Star.h"
#include "Planet.h"
#include <cstdlib>

//Star methods
Star::Star(){
	this->current_planets=0;
	this->planets=NULL;
}
Star::~Star(){
	for(unsigned int i=0; i<current_planets; i++){
		this->planets[i]=NULL;
	}
	delete this->planets;
}
int Star::addPlanet(){

	unsigned int tx = (this->current_planets);
	unsigned int dx = (rand()%3000);
	Planet  *newPlanet =NULL;
	Planet  *temp =NULL;
	newPlanet =new Planet(dx);
	unsigned int i=0;
	Planet** newPlanets= NULL;
	newPlanets =new Planet*[tx+1];
	if(tx>0){		
		for(i=0;i<tx;i++){
			temp = this->planets[i];
			newPlanets [i]=temp;
		}
	}
	newPlanets[tx]=newPlanet;
	delete this->planets;
	this->planets= newPlanets;
	this->current_planets+=1;
	return tx;
}
bool Star::removePlanet(int id){
	unsigned int tx = (this->current_planets);
	Planet** newPlanets= NULL;
	newPlanets =new Planet*[tx-1];
	unsigned int idx;
	if(getPlanet(id)==NULL){return false;}
	idx=getPlanet(id)->getID();
	for(unsigned int i=0;i<=tx;i++){
			if(this->planets[i]->getID()==id){idx=i;}
		}


	for(unsigned int i=idx;i<tx-1;i++){
		this->planets[i]=this->planets[i+1];		
	}
	for(unsigned int i=0;i<tx-1;i++){
			newPlanets[i]=this->planets[i];	
	}

		//}
	//this->planets[x]=NULL;
	//delete this->planets;
	//this->planets=newPlanets;
	this->current_planets--;
	return true;
}
Planet* Star::getPlanet(int id){
	unsigned int tx = (this->current_planets);	
	for(unsigned int i=0;i<=tx;i++){
			if(this->planets[i]->getID()==id){return this->planets[i];}
		}
	return NULL;
}
void Star::orbit(){
	for(unsigned int i=0; i<this->current_planets; i++){
		this->planets[i]->orbit();
	}
}
void Star::printStarInfo(){
	
}

//Starlist methods
Starlist(){
	this->current_planets=0;
	this->planets=NULL;
}
~Starlist(){
	
}
unsigned long addPlanet(){
	
}
bool removePlanet(unsigned long){
	
}
Planet * getPlanet(unsigned long){
	
}
void orbit(){
	
}
void printStarInfo(){
	
}

//Starvector methods
Starvector(){
	this->current_planets=0;
	this->planets=NULL;
}
~Starvector(){
	
}
unsigned long addPlanet(){
	
}
bool removePlanet(unsigned long){
	
}
Planet * getPlanet(unsigned long){
	
}
void orbit(){
	
}
void printStarInfo(){
	
}