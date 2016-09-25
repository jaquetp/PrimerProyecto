#include<stdio.h>
int main(){
      int Pesos;
      printf("Introduce los pesos: ");
      scanf("%d",&Pesos);
      printf("%d en billete de 1000\n", Pesos/1000);
      Pesos = Pesos%1000;
      printf("%d en billete de 500\n", Pesos/500);
      Pesos = Pesos%500;
      printf("%d en billete de 200\n", Pesos/200);
      Pesos = Pesos%200;
      printf("%d en billete de 100\n", Pesos/100);
      Pesos = Pesos%100;
      printf("%d en billete de 50\n", Pesos/50);
      Pesos = Pesos%50;
      printf("%d en billete de 20\n", Pesos/20);
      Pesos = Pesos%20;
      printf("%d en moneda de 10\n", Pesos/10);
      Pesos = Pesos%10;
      printf("%d en moneda de 5\n", Pesos/5);
      Pesos= Pesos%5;
      printf("%d en moneda de 1\n", Pesos/1);
      return 0;
}
	
