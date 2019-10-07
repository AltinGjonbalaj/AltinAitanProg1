#ifndef STAR_H
#define STAR_H
#include "Planet.h"
class StarList{
private:
    unsigned int current_planets;
    int next_id;
public:
    Planet **planets;
    Star();
    ~Star();
    int addPlanet();
    bool removePlanet(int);
    Planet* getPlanet(int);
    Planet getFurthest();
    void orbit();
    void printStarInfo();
    inline unsigned int getCurrentNumPlanets(){return current_planets;}
    //you may add any additional methods you may need.
};
class StarVector{
private:
    unsigned int current_planets;
    int next_id;
public:
    Planet **planets;
    Star();
    ~Star();
    int addPlanet();
    bool removePlanet(int);
    Planet* getPlanet(int);
    Planet getFurthest();
    void orbit();
    void printStarInfo();
    inline unsigned int getCurrentNumPlanets(){return current_planets;}
    //you may add any additional methods you may need.
};
#endif
