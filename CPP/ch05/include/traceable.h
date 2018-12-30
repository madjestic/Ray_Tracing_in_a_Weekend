#ifndef TRACEABLEH
#define TRACEABLEH

#include "ray.h"

struct hit_record{
  float t;
  vec3  p;
  vec3  normal;
};

class traceable {
public:
  virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};

#endif
