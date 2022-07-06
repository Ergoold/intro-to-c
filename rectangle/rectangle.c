#include <stdbool.h>

typedef struct {
  double width;
  double height;
} rectangle;

double area(rectangle r) {
  return r.width * r.height;
}

rectangle greater_area(rectangle r1, rectangle r2) {
  if (area(r1) > area(r2)) {
    return r1;
  } else {
    return r2;
  }
}

/* can r1 contain r2? */
bool can_contain(rectangle r1, rectangle r2) {
  return r1.width > r2.width && r1.height > r2.height;
}
