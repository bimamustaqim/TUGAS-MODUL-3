#include <stdio.h>
#include <math.h>
int main(){
	 float alas, tinggi, luas, segitiga, sisi_miring, keliling;
	  
	printf("Masukkan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
    sisi_miring = sqrt((alas * alas) + tinggi * tinggi);
	keliling = alas + alas * sisi_miring;
	
	printf("luas segitiga: %.2f cm^2\n", luas);
	printf("keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
