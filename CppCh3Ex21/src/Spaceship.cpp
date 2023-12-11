#include "Spaceship.h"
#include "Vector3D.h"
#include <cstddef>

Spaceship::Spaceship() : position(Vector3D(0, 0, 0)), velocity(Vector3D(0, 0, 0)), rateOfAcceleration(Vector3D(0, 0, 0)), target(NULL)
{
}

Spaceship::~Spaceship()
{
}

void Spaceship::update()
{
    position.setX(position.getX() + velocity.getX() * DT + rateOfAcceleration.getX() * DT * DT * 0.5);
    position.setY(position.getY() + velocity.getY() * DT + rateOfAcceleration.getY() * DT * DT * 0.5);
    position.setZ(position.getZ() + velocity.getZ() * DT + rateOfAcceleration.getZ() * DT * DT * 0.5);
    velocity.setX(velocity.getX() + rateOfAcceleration.getX() * DT * 0.5);
    velocity.setY(velocity.getY() + rateOfAcceleration.getY() * DT * 0.5);
    velocity.setZ(velocity.getZ() + rateOfAcceleration.getZ() * DT * 0.5);
}
