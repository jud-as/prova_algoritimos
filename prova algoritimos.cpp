#include <stdio.h>
#include <locale.h>
#include <math.h>
	//Escrever os valores "float" usando "," ao invés de "." por causa do "setlocale". 
void cabecario()
{
	printf("Algoritimo e Programação\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCiência da Computação\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++");
}


int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Algoritimo e Programação\nJoyce Siqueira\nGuilherme Yago Ferreira Martins Valente\n22200104\nCiência da Computação\nhttps://github.com/jud-as/prova_algoritimos.git\nDevC++\n\n");
	
			
return 0;
}




