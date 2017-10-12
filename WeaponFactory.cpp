/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleAxe.h"
#include "CrazyRandomSword.h"
#include "kalashikov.h"




WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }

    if (name.compare("axe") == 0) {
        return new SimpleAxe();
    }

    if (name.compare("rando") == 0) {
        return new CrazyRandomSword();
    }

    if (name.compare("VIVA LA REVOLUTION") == 0) {
        return new kalashikov();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    throw "Invalid weapon";
}