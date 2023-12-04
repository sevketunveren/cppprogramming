#include <iostream>
#include <iomanip>
#include <Spaceship.h>

int main()
{
    Spaceship s1, s2;
    Vector3D roa(1.1,2.1,1.9), v(1.3, 1.0, 2.3);
    s1.setRateOfAcceleration(roa);
    s1.setVelocity(v);
    return 0;
}