#include <stdio.h>
#include <math.h>

int main(){
	float alas, tinggi, sisimiring;
	
	printf("Masukkan alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	sisimiring = sqrt ((alas*alas) + (tinggi*tinggi));
	
	printf("sisimiring segitiga adalah %.2f cm\n", sisimiring);
	
	return 0;
}
