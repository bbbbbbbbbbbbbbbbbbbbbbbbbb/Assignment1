/* 
 * File:   CrazyRandomSword.cpp
 * Author: bb <bjb15>
 * 
 * made on the due date like 3 hours before woo hoooooo
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - (rand() % armor/2);
    if(damage < 0){
        return 0;
    }
    return damage;
}