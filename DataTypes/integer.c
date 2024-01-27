#include<stdio.h>
int main(){
  int i = 10;
  int j = -2147483648;
  int k = 2147483647;
  int m = -214783650;
  int n = 2147483649;
  printf("%d",sizeof(i));
  //Output:4
  //size of int is 4 bytes = 32 bits according to my computer architecture it may differ from system to system
  //range of integer in c varies from -(2^(size_of_int_in_bits - 1)) to (2^(size_of_int_in_bits - 1)-1)
  //(-2^(31)) to (-2^(31)-1)
  // -2147483648 to 2147483647
  //If range is out of bound it will continue as cyclic i.e. -2147483649 will be 2147483647
  printf("%d",j);
  //Output:-2147483648
  printf("%d",k);
  //Output:2147483647
  printf("%d",m);
  //Output:2147483646
  printf("%d",n);
  //Output:-2147483648
  //We can also use long int for 8 bytes or short int for 2 bytes
  long int x = 2147483699;
  printf("%d",x);
  //Output:2147483699
  return 0;}
