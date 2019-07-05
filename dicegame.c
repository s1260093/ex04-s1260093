#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
  int total,d1,d2,s1,s2;
  srand(time(NULL));
  s1=rand()%6+1;
  s2=rand()%6+1;
  d1=s1;
  d2=s2;
  total=d1+d2;
  printf("Rolling the dice...\n");
  printf("Die 1:%d\n",d1);
  printf("Die 2:%d\n",d2);
  printf("Total value:%d\n",total);
}
