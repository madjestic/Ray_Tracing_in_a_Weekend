#ifndef TRACEABLEH
#define TRACEABLEH

#include "Ray.h"

struct hitRecord{
  float t;
  Vec3  p;
  Vec3  normal;
};

class Traceable {
public:
  virtual bool hit(const Ray& r, float t_min, float t_max, hitRecord& rec) const = 0;
};

#endif
