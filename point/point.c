#include <math.h>

typedef struct {
  double x;
  double y;
} point;

point farthest_from_origin(point p1, point p2) {
  if (fabs(p1.x) + fabs(p1.y) > fabs(p2.x) + fabs(p2.y)) {
    return p1;
  } else {
    return p2;
  }
}
