#include "Spaceship.h"
#include "Vector3D.h"
#include <cstddef>

Spaceship::Spaceship():position(Vector3D(0,0,0)), velocity(Vector3D(0,0,0)), rateOfAcceleration(Vector3D(0,0,0)), target(NULL)
{
}

Spaceship::~Spaceship()
{
}

void Spaceship::update()
{}
