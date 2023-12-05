
#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Vector3D.h"
#define DT 0.016666667
class Spaceship
{
public:
  Spaceship();

  virtual ~Spaceship();

  inline void setPosition(const Vector3D &value)
  {
    position = value;
  }

  inline const Vector3D getPosition()
  {
    return position;
  }

  inline void setVelocity(const Vector3D &value)
  {
    velocity = value;
  }

  inline const Vector3D getVelocity()
  {
    return velocity;
  }

  inline void setRateOfAcceleration(const Vector3D &value)
  {
    rateOfAcceleration = value;
  }

  inline const Vector3D getRateOfAcceleration()
  {
    return rateOfAcceleration;
  }

  inline Spaceship *getTarget()
  {
    return target;
  }

  void setTarget(Spaceship *const value)
  {
    target = value;
  }

  void update();

private:
  Vector3D position;
  Vector3D velocity;
  Vector3D rateOfAcceleration;
  Spaceship *target;
};
#endif
