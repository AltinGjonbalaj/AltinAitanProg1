#ifndef STAR_H
#define STAR_H
#include "List.h"
#include "Vector.h"
#include "Planet.h"


class Star{
private:
    unsigned int current_planets;

public:
    Planet ** planets;
    Star();
    ~Star();
    int addPlanet();
    void orbit();
    void printStarInfo();
    bool removePlanet(int);
    Planet * getPlanet(int);
    unsigned int getCurrentNumPlanets(){
		return this->current_planets;
    }

};

class Starlist{
private:
    unsigned int current_planets;
	List planets();
public:
	Starlist();
	~Starlist();
	unsigned long addPlanet();
	bool removePlanet(unsigned long);
	Planet * getPlanet(unsigned long);
	void orbit();
	void printStarInfo();
	unsigned int getCurrentNumPlanets(){
		return this->current_planets;
    }
};

class Starvector{
private:
    unsigned int current_planets;
	Vector planets;
public:
	Starvector();
	~Starvector();
	unsigned long addPlanet();
	bool removePlanet(unsigned long);
	Planet * getPlanet(unsigned long);
	void orbit();
	void printStarInfo();
	int getCurrentNumPlanets(){
		return this->current_planets;
    }
};
#endif
