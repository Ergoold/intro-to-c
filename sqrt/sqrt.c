int sqrt(int n) {
  if (n < 0) {
    return -1;
  }
  for (int i = 0;; i++) {
    if (i * i >= n + 1) {
      return i - 1;
    }
  }
}
