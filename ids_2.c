#include <unistd.h>
#include <stdio.h>

int main() 
 {
 
   printf("ID of Parent = %d and ID of Child = %d\n", getppid(),getpid());
 
   return 0;
 
  }
