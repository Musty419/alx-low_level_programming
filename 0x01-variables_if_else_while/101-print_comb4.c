
1	#include <stdio.h> 
2	/** 
3	 * main - Entry point 
4	 * Return: Always 0 (Success) 
5	 */ 
6	int main(void) 
7	{ 
8	int i, j, k; 
9	for (i = 0; i <= 7; i++) 
10	{ 
11	for (j = i + 1; j <= 8; j++) 
12	{ 
13	for (k = j + 1; k <= 9; k++) 
14	{ 
15	putchar(i + '0'); 
16	putchar(j + '0'); 
17	putchar(k + '0'); 
18	if (i != 7 || j != 8 || k != 9) 
19	{ 
20	putchar(','); 
21	putchar(' '); 
22	} 
23	} 
24	} 
25	} 
26	putchar('\n'); 
27	return (0); 
28	} 

