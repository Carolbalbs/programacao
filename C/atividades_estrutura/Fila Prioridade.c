#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define string "%[^\n]"

struct Lista
{
	int prioridade;
	char nome[30];
	struct Lista *anterior;
	struct Lista *proximo;
};
typedef struct Lista *Fila;

Fila insert(Fila fila,int prioridade,char nome[25]);
Fila exibe_fila(Fila fila);
Fila atender(Fila fila);

int main()
{
	Fila fila=NULL;
	
	int prioridade,opcao;
	char nome[30];

	while(1)
	{
		printf("\n\nInforme o que deseja fazer:\n[1] - Inserir nova pessoa na fila\n[2] - Atender proxima pessoa da fila\n[3] - Sair do programa\n\nOpcao: ");
		scanf("%i",&opcao);getchar();
	
		switch(opcao)
		{
			case 1:
			system("cls");
			printf("\nInforme o nome do paciente: ");
			scanf(string,nome);getchar();
			
			do
			{
				printf("Informe a ordem de prioridade do paciente: ");
				scanf("%i",&prioridade);getchar();
				
				if(prioridade!=1 && prioridade!=2 && prioridade!=3)
				printf("\nFavor informar uma prioridade valida!!! (De 1 a 3)\n");
			}
			while(prioridade!=1 && prioridade!=2 && prioridade!=3);
			
			fila=insert(fila,prioridade,nome);
			break;	
			
			case 2:
			system("cls");
			if(fila!=NULL)
			fila=atender(fila);
			else
			printf("\nFila vazia!");
			break;
			
			case 3:
			return 0;
			
			default:
			printf("\nInforme uma opcao invalida!\n");
		}
	}
	
	return 0;
}

Fila insert(Fila fila,int prioridade,char nome[25])
{
	Fila novo,anterior,atual;
	
	novo = malloc(sizeof(struct Lista));
	
	if(novo!=NULL)
	{
		novo->prioridade=prioridade;
		strcpy(novo->nome,nome);
		novo->proximo = NULL;
		
		anterior = NULL;
		atual = fila;
		
		while(atual!=NULL && prioridade<=atual->prioridade)
		{
			anterior = atual;
			atual = atual->proximo;
		}
		
		if(anterior==NULL)
		{
			novo->proximo=fila;
			fila = novo;
		}
		else
		{
			anterior->proximo=novo;
			novo->proximo=atual;
		}
	}
	else
	printf("%i nao inserido. Sem memoria disponivel");
	
	exibe_fila(fila);

	return fila;
}

Fila exibe_fila(Fila fila)
{
	Fila aux=fila;
	
	if(aux!=NULL)
	{
		printf("\nFila atual:");
		while(aux!=NULL)
		{
			printf("\nNome do paciente: %s - Prioridade: %i",aux->nome,aux->prioridade);
			aux=aux->proximo;
		}
	}
	else
	printf("\nFila vazia!");
}

Fila atender(Fila fila)
{
	Fila aux;
	
	aux=fila;
	
	fila=fila->proximo;
	
	printf("\nPaciente %s atendido\n",aux->nome);
	
	exibe_fila(fila);
	
	free(aux);
	
	return fila;
}
