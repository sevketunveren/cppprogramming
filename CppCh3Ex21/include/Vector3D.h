
#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
public:
  
  virtual ~Vector3D();
  
  Vector3D(const double xP, const double yP, const double zP);

  inline void setX(const float& value)
  {
    x = value;
  }

  float getX() const
  {
    return x;
  }

  inline void setY(const float& value)
  {
    y = value;
  }

  inline float getY() const
  {
    return y;
  }

  inline void setZ(const float& value)
  {
    z = value;
  }

  inline float getZ() const
  {
    return z;
  }

private:
  float x;
  float y;
  float z;
  Vector3D();
};

#endif