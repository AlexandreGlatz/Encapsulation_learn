#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "Attacker.h"
class Player:public Entity, public Alive, public AMovable, public Attacker{

};