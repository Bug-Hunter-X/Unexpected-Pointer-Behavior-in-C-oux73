int main() {
  int x = 10;
  int *ptr = &x; 
  int y = *ptr; // copy the value pointed to by ptr into y
  *ptr = 20; 
  printf("%d %d", x, y); //This will print 20 10, demonstrating that the change through pointer did not affect y. 
  return 0;
}