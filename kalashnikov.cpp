/* 
 * File:   kalashnikov.h
 * Author: bb
 *
 * created right nowwwwwwwwww
 */

#include "kalashnikov.h"

double kalashnikov::hit(double armor) {
    double damage = hitPoints - (sqrt(armor));
    if (damage < 0) {
        return 0;
    }
    return damage;
}
