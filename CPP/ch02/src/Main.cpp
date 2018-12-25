# include <math.h>
# include <stdlib.h>
# include <iostream>

class vec3
{
public:
  float e [3];
  vec3 () {}
  vec3 ( float e0
       , float e1
       , float e2)
  {
    e[0] = e0;
    e[1] = e1;
    e[2] = e2;
  }
  inline float x() const { return e[0]; }
  inline float y() const { return e[1]; }
  inline float z() const { return e[2]; }
  inline float r() const { return e[0]; }
  inline float g() const { return e[1]; }
  inline float b() const { return e[2]; }

  inline const vec3& operator+() const  { return *this; }
  inline       vec3  operator-() const  { return vec3(-e[0], -e[1], -e[2]); }
  inline float       operator [] (int i) const { return e[i]; }
  inline float       operator [] (int i)       { return e[i]; };

  inline vec3& operator += (const vec3 &v2);
  inline vec3& operator -= (const vec3 &v2);
  inline vec3& operator *= (const vec3 &v2);
  inline vec3& operator /= (const vec3 &v2);
  inline vec3& operator *= (const float t);
  inline vec3& operator /= (const float t);

  inline float leng
};

int main()
{
  int nx = 200;
  int ny = 100;

  std::cout
    << "P3"            << std::endl
    << nx << " " << ny << std::endl
    << "255"           << std::endl;
 
  for(int j = ny-1; j >= 0; j--)
    {
      for(int i = 0; i < nx; i++)
        {
          float r = float(i) / float(nx);
          float g = float(j) / float(ny);
          float b = 0.2;
          int ir = int(255.99*r);
          int ig = int(255.99*g);
          int ib = int(255.99*b);
          std::cout << ir << " " << ig << " " << ib << std::endl;
        }
    }
}
