
 int* f(int p)
 {
 int* ptr = (int*)malloc(2*sizeof(int));
 *ptr = p;
 *(ptr+1) = p*p;
 return ptr;
 }