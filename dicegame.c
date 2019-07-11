#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
  int total,d1,d2,s1,s2,i=0;
  char name[10];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
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
  if(total>=7)
    printf("You won!/n");
  else
    printf("You lost!/n");
  return 0;
}
