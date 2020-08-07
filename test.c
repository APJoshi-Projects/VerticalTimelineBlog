#include <stdio.h>
#include <conio.h>
void main()
{
int a = 10;
int *m, *n;
m = &a;
n = m;
printf("m & n: %d %d\n", *m, *n); /*print the value of a twice*/
printf("Addresses pointed to by m and n:%d %d", m, n); /*print the addresss of x twice*/
getch();
}
