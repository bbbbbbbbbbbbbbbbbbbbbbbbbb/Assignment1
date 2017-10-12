/* 
 * File:   CrazyRandomSword.h
 * Author: bb <bjb15@gmail.com>
 * 
 * made on the due date like 3 hours before woo hoooooo
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoints = random integer number between 10
and 100. Ignores a random amount of integer armor points, ranging from to 0 to
half of the armor the weapon hits
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 100 + 10) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

