/*a.c*/
#include <stdio.h>
void b(void);

int x;
int main()
{
	x = 2016;
	b();
	printf("x = %d ",x);
	return 0;
}
/*b.c*/
#include <stdio.h>

int x;

void b()
{
	x = 2017;

}
