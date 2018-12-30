#ifndef TRACEABLELISTH
#define TRACEABLELISTH

#include "Traceable.h"

class TraceableList: public Traceable {
public:
  TraceableList() {}
  TraceableList(Traceable **l, int n) {list = l; list_size = n; }
  virtual bool hit(const Ray& r, float tMin, float tMax, hitRecord& rec) const;
  Traceable **list;
  int list_size;
};

bool TraceableList::hit(const Ray& r, float tMin, float tMax, hitRecord& rec) const {
  hitRecord temp_rec;
  bool      hit_anything   = false;
  double    closest_so_far = tMax;

  for (int i = 0; i < list_size; i++) {
    if (list[i]->hit(r, tMin, closest_so_far, temp_rec)) {
      hit_anything = true;
      closest_so_far = temp_rec.t;
      rec = temp_rec;
    }
  }
  return hit_anything;
}

#endif
