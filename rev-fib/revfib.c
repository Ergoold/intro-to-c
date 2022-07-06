int get_fib_index(int n) {
  int a = 1;
  int b = 1;
  int i = 1;
  for (; n != a; i++) {
    if (a > n) {
      return -1;
    }
    b += a;
    a = b - a;
  }
  return i;
}
