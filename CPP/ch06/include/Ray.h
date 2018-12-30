#ifndef  RAYH
#define  RAYH
#include "Vec3.h"

class Ray{
public:
  Ray() {}
  Ray(const Vec3& pos, const Vec3& dir) { Pos = pos; Dir = dir; }
  Vec3 origin()        const { return Pos; }
  Vec3 direction()     const { return Dir; }
  Vec3 point_at_parameter (float t) const { return Pos + t*Dir; }

  Vec3 Pos;
  Vec3 Dir;
};

#endif
