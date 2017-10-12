/* 
 * File:   SimpleAxe.cpp
 * Author: bb <bjb15>
 *
 * oct 12th, 5 am babeyyyyy
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    if (armor > 20) {
    	double damage = hitPoints - armor;
    }
    if (armor < 20 && armor > 0) {
    	double damage = hitPoints
    }
    if (damage < 0) {
        return 0;
    }
    return damage;
}
