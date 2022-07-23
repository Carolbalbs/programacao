# include <stdio.h>
# include <stdlib.h>

typedef struct lista Lista;
typedef struct listano ListaNo;

/*struct lista{
	ListaNo* prim;
};*/

struct listano{
		int chave;
		char info[15];
		ListaNo* prox;
};

ListaNo* prim;
ListaNo* ant;

void imprimelista(void)
{
	ListaNo* p = prim;
	printf("Lista   :");
	while (p != NULL)
	{
		printf("%d", p->chave);
		p = p->prox;
	}
}

ListaNo* buscalista(int chave1)
{
	ListaNo* pont = NULL;
	ant = NULL;
	ListaNo* ptr = prim;
	while ((ptr != NULL) && (ptr->chave < chave1))
	{
		ant = ptr;
		ptr = ptr->prox;
	}
	pont = ptr;
	ptr = NULL;
	return pont;
}

void insereno(int chave, char *nome)
{
	ListaNo* pont; 
	ListaNo* novo; 
	int i;
	
	pont = buscalista(chave);
	if ((pont == NULL) || (pont->chave != chave))
	{
		novo = (ListaNo*) malloc(sizeof(ListaNo));
		novo->chave = chave;
		for (i=0; i<15; ++i)
			novo->info[i] = nome[i];
		if (ant == NULL)
		{
			novo->prox = prim;
			prim = novo;
		}
		else
		{
			novo->prox = ant->prox;
			ant->prox = novo;
		}
	}
	else
		printf("Elemento ja esta na tabela.");
}

int main(void)
{
	int chave;
	ListaNo* pont, ant;
	int cont;
	char nome[15];
	
	prim = NULL;
	cont = 1;
	while (cont==1){
		printf("Digite chave e nome para inserir na lista:");
		scanf("%d", &chave);
		scanf("%s", nome);
		insereno(chave, nome);
		printf("Digite 1 para continuar, qualquer outro numero para parar:");
		scanf("%d", &cont);
	}
	imprimelista();
	printf("Valor para busca");
	scanf("%d",&chave);
	pont = buscalista(chave);
	if ((pont != NULL) && (pont->chave == chave))
		printf("%s", pont->info);
}