#include <stdio.h>
#include <locale.h>
#include <math.h>
	//Escrever os valores "float" usando "," ao inv�s de "." por causa do "setlocale". 
void cabecario()
{
	printf("Algoritimo e Programa��o\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCi�ncia da Computa��o\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++");
}

void switchcase()
{
	int ano;
	char nome[12], sobrenome[12];
	float a, b, potenciaA, potenciaB, potenciaHipotenusa, raizHipotenusa, seno;
	char opcoes;
	printf("Escolha uma quest�o (A/B/C): ");
	scanf(" %c", &opcoes);
	
	switch (opcoes) {
		case 'A':
	printf("D� o valor do cateto oposto do tri�ngulo: ");
	scanf("%f", &a);
	printf("Agora d� o valor do cateto adjacente do tri�ngulo: ");
	scanf("%f", &b);
	
	if(a > 0 && b > 0){
		potenciaA = pow(a,2);
		potenciaB = pow(b,2);
		potenciaHipotenusa = potenciaA + potenciaB;
		raizHipotenusa = sqrt(potenciaHipotenusa);
		seno = a/raizHipotenusa;
		
		printf("Hipotenusa: %f\n", raizHipotenusa);
		printf("Seno: %f", seno);
	}		
		break;
		
		case 'B':
			

		printf("Primeiro Nome: \n");
		scanf("%s", &nome);
		printf("Sobrenome:");
		scanf("%s", &sobrenome);
	
		printf("Ano de nascimento (1900 � 2022): ");
		scanf("%d", &ano);
	
		if(ano%4 == 0){
			if(ano%100 == 0){
				printf("Ano Bissexto");
			}
		} 
		if(ano%4 != 0 && ano%100 != 0){
			printf("Ano n�o bissexto");
		}
		break;
		
		case 'C':
			printf("N�o escolhida.");
		break;
		
		default:
			printf("Op��o Inv�lida.");
	
	}
}



	


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Algoritimo e Programa��o\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCi�ncia da Computa��o\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++\n\n");
	switchcase();
			
return 0;
}




