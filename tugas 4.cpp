#include <stdio.h>

int main(){
	int bilangan;
	
	printf("Masukkan bilangan bulat positif:  ");
	scanf("%d", &bilangan);
	
	if (bilangan <= 0){
		printf("masukkan bilangan positif. \n");
	}
	else{
		if(bilangan % 2 == 0){
			printf ("genap\n");
		}
		else{
			printf("ganjil\n");
		}
	}	
	
}

