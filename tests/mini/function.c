
int global;

int* foo(int *param) {
  int *local = param;
  return local;
}

int main() {
  int *pt;
  pt = &global;
  int *pt2;
  // pt2 can be an alias for global
  pt2 = foo(pt);
}
