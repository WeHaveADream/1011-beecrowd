#include <stdio.h>
#include <math.h>

int main (){
	
	double raio = 0;
		
	scanf("%lf", &raio);
	
	printf("VOLUME = %.3lf\n", (4 * 3.14159)/3 * pow(raio, 3));
	
	return 0;
}
