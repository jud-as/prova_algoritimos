#include <stdio.h>
#include <locale.h>
#include <math.h>
	//Escrever os valores "float" usando "," ao inv�s de "." por causa do "setlocale". 
void cabecario()
{
	printf("Algoritimo e Programa��o\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCi�ncia da Computa��o\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++");
}


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Algoritimo e Programa��o\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCi�ncia da Computa��o\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++\n\n");
	
			
return 0;
}




