/* 
 * File:   kalashnikov.h
 * Author: bb
 *
 * created right nowwwwwwwwww
 */

#include <string>
#include "Weapon.h"

#ifndef KALASHNIKOV_H
#define KALASHNIKOV_H

/**
 * 
 * NOTHING QUITE SAYS LIBERATION LIKE A GOOD AK
 * COME, COMRADE, WE HAVE NOTHING TO LOSE BUT OUR CHAINS
 * NO LONGER SHALL WE BE BOUND TO SERVITUDE AND PEASENTRY,
 * THESE SO CALLED NOBLES THINK THEY CAN CONTAIN US WITH THEIR "COMMON SWORDS"
 * THEIR "SIMPLE AXES"
 * EVEN THEIR "CRAZY RANDOM SWORDS" 
 * 
 * BUT, BROTHER, WE HAVE THE GREATEST WEAPON OF ALL - 
 * THE UNRELENTING TIDE OF HISTORY
 * THE CERTAINTY OF REVOLUTION
 * THE GLEAMING HOPE OF A BETTER WORLD
 * ALSO AN ASSAULT RIFLE
 * THAT HELPS TOO
 *
 */
class CommonSpear : public Weapon {
public:

    kalashnikov() : Weapon("kalashnikov", 1917.0) {
    }
    virtual ~kalashnikov() {}; 
    virtual double hit(double armor);

};

#endif /* KALASHNIKOV_H */

