#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(0));//

 int n = rand()% ;

 printf("The number %d is ", n);
 if(n > 0) {
     printf("positive\n");
  } else if (n == 0) {
     printf("zero\n");
  } else {
     printf("negative\n");
  }

	 return 0;
 }

