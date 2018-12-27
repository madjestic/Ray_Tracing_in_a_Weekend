#ifndef   RAYH
#define  RAYH
#include "vec3.h"

class ray
{
public:
  ray() {}
  ray(const vec3& pos, const vec3& dir) { Pos = pos; Dir = dir; }
  vec3 origin()        const { return Pos; }
  vec3 direction()     const { return Dir; }
  vec3 point_at_parameter (float t) const { return Pos + t*Dir; }

  vec3 Pos;
  vec3 Dir;
};

#endif
