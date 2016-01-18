#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 25

typedef struct
{
   unsigned char name[MAX];
   int id;
}UID;

int main()
{
   UID E1("Anand",0001);
   printf("%s\n%d\n",E1.name),E1.id;
   return 1;
}
