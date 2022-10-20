#include <stdio.h>
#include <locale.h>
#include <math.h>
	//Escrever os valores "float" usando "," ao invés de "." por causa do "setlocale". 
void cabecario()
{
	printf("Algoritimo e Programação\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCiência da Computação\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++");
}

void switchcase()
{
	int ano;
	char nome[12], sobrenome[12];
	float a, b, potenciaA, potenciaB, potenciaHipotenusa, raizHipotenusa, seno;
	char opcoes;
	printf("Escolha uma questão (A/B/C): ");
	scanf(" %c", &opcoes);
	
	switch (opcoes) {
		case 'A':
	printf("Dê o valor do cateto oposto do triângulo: ");
	scanf("%f", &a);
	printf("Agora dê o valor do cateto adjacente do triângulo: ");
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
	
		printf("Ano de nascimento (1900 à 2022): ");
		scanf("%d", &ano);
	
		if(ano%4 == 0){
			if(ano%100 == 0){
				printf("Ano Bissexto");
			}
		} 
		if(ano%4 != 0 && ano%100 != 0){
			printf("Ano não bissexto");
		}
		break;
		
		case 'C':
			printf("Não escolhida.");
		break;
		
		default:
			printf("Opção Inválida.");
	
	}
}



	


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Algoritimo e Programação\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCiência da Computação\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++\n\n");
	switchcase();
			
return 0;
}




