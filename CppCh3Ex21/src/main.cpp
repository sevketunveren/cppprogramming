#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <cmath>
#include <Spaceship.h>

void printSpaceship(Spaceship &);

int main()
{
    Spaceship s1, s2;
    Vector3D roa(1.1, 2.1, 1.9), v(1.4, 1.0, 2.0);
    Vector3D init(1, 1, 1), roaTrg(1.1, 2.1, 1.9), vTrg(0.7, 0.5, 1.0);
    s1.setRateOfAcceleration(roa);
    s1.setVelocity(v);
    s1.setTarget(&s2);
    s2.setTarget(&s1);
    s1.getTarget()->setPosition(init);
    s1.getTarget()->setRateOfAcceleration(roaTrg);
    s1.getTarget()->setVelocity(vTrg);
    std::chrono::milliseconds interval((int)(DT * 1000));
    while (true /*fabs(s1.getPosition().getX() - s1.getTarget()->getPosition().getX()) > 0.01f ||
           fabs(s1.getPosition().getY() - s1.getTarget()->getPosition().getY()) > 0.01f*/)
    {
        s1.update();
        s2.update();
        printSpaceship(s1);
        printSpaceship(s2);
        std::this_thread::sleep_for(interval);
    }
    return 0;
}

void printSpaceship(Spaceship &s)
{
    time_t now = time(0);
    std::cout << now << "\t"
              << " X: " << s.getPosition().getX() << " "
              << " Y: " << s.getPosition().getY() << " "
              << " Z: " << s.getPosition().getZ() << "\t"
              << "vX: " << s.getVelocity().getX() << " "
              << "vY: " << s.getVelocity().getY() << " "
              << "vZ: " << s.getVelocity().getZ() << " "
              << std::endl;
}