#include <iostream>
#include <stdlib.h>

#include "ray.h"
#include "vec3.h"

vec3 foo (const ray& r) {}

// vec3 color(const ray& r)
// {
//   vec3   unit_direction = unit_vector(r.direction());
//   float  t = 0.5*(unit_direction.y() + 1.0);
//   return (1.0 - t)*vec3(1.0, 1.0, 1.0) + t*vec3(0.5, 0.7, 1.0);
// }

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
          vec3 col(r, g, b);
          int ir = int(255.99*r);
          int ig = int(255.99*g);
          int ib = int(255.99*b);
          
          std::cout << ir << " " << ig << " " << ib << std::endl;
        }
    }
}
