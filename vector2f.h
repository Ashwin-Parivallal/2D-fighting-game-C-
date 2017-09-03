#ifndef VECTOR2F__H
#define VECTOR2F__H
/************

This file has a class that stores the position of the thing on the screen. Also has various methods to set and get positions as desired.

*************/
#include <iostream>

class Vector2f {
public:
  explicit Vector2f(float x = 0, float y = 0);

  float &operator[](int index);
  float operator[](int index) const;

  bool operator==(const Vector2f &other) const {
    return (v[0]==other.v[0] && v[1] == other.v[1]);
  }

  bool operator!=(const Vector2f &other) const {
    return (v[0]!=other.v[0] or v[1] != other.v[1]);
  }
		
  Vector2f operator*(float scale) const;
  Vector2f operator/(float scale) const;

  Vector2f operator+(const Vector2f &other) const;
  Vector2f operator-(const Vector2f &other) const;
  Vector2f operator-() const;
		
  const Vector2f &operator*=(float scale);
  const Vector2f &operator/=(float scale);
  const Vector2f &operator+=(const Vector2f &other);
  const Vector2f &operator-=(const Vector2f &other);
		
  float magnitude() const;
  float magnitudeSquared() const;
  Vector2f normalize() const;
  float dot(const Vector2f &other) const;
  Vector2f cross(const Vector2f &other) const;
  Vector2f& operator=(const Vector2f&);
  

Vector2f operator+(const float other ) const;

Vector2f operator-(const float other ) const;
  
private:
  float v[2];
};

Vector2f operator*(float scale, const Vector2f &v);
std::ostream &operator<<(std::ostream &output, const Vector2f &v);

#endif
