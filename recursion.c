#include "stdio.h"
 int domore()
{
	return printf("In domore() last\n"); //printf() return the no of characters
										// "\n" takes as 1 char
void dowork()
{
	domore();
	printf("In dowork()3\n");
}
void bar()
{
	dowork();
	printf("In bar()2\n");
}
void main()

{
	bar();
	printf("In main()1\n");
	printf("%d ",domore() );
}

// This Program is illustriate the recusion mechanism and its internal work flow. 