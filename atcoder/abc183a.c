#include <stdio.h>
 
int main (){
	int x;
	scanf("%d", &x);
	if (x >= 0){
		printf ("%d", x);
	}
	else if (x < 0){
		printf ("0");
	}

	return 0;
}