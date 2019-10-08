#ifndef PLANET_H
#define PLANET_H

class Planet{
private:
    unsigned long id;
    unsigned int pos;
    unsigned int distance;
    char type;
public:
    Planet(unsigned int);
    unsigned int orbit();
    unsigned long getID(){return (unsigned long)this;}
    inline unsigned int getDistance(){return distance;}
    inline unsigned int getPos(){return pos;}
    inline char getType(){return type;}
    //you may add any additional methods you may need.
};
#endif

