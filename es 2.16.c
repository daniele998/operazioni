#include <stdio.h>
int main(){
int a,b,c;

		printf("Inserisci il primo numero: ");	
		scanf("%d",&a);
		printf("Inserisci il secondo numero: ");	
		scanf("%d",&b);

		printf("SOMMA\n");
		c=a+b;
		printf("La somma %d + %d e' uguale a %d\n", a, b, c);

		printf("DIFFERENZA\n");
		c=a-b;
		printf("La differenza %d - %d e' uguale a %d\n", a, b, c);

		printf("QUOZIENTE\n");
		c=a/b;
		printf("Il quoziente %d / %d e' uguale a %d\n", a, b, c);
		
		printf("MODULO\n");
		c=a%b;
		printf("Il modulo %d % %d e' uguale a %%d\n", a, b, c);

		printf("PRODOTTO\n");
		c=a*b;
		printf("Il modulo %d * %d e' uguale a %d\n", a, b, c);

		
		

return 0;
}
