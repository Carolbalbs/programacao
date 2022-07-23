#include<stdio.h>
#include<stdlib.h>
			
struct arvore{
	int Item;
	struct arvore *Esquerda;
	struct arvore *Direita;
	int Altura;
};
typedef struct arvore *ARV;


int Menu(ARV raiz,int *exibicao);
ARV Insercao(ARV raiz, int x);/*,int *repetidos);*/
ARV novo_elemento(int x);
int maior(int esquerda,int direita);
int Altura(ARV raiz);
int balanceamento(ARV raiz);
ARV rota_direita(ARV Arvore);
ARV rota_esquerda(ARV Arvore);
ARV Deletar(ARV raiz, int alvo);
ARV Alterar(ARV raiz,int alvo,int valor,int repetidos);
void Print(ARV raiz,int exibicao);
void Print_Ordem(ARV raiz);
void Print_Pre_Ordem(ARV raiz);
void Print_Pos_Ordem(ARV raiz);
void Exclue_arvore(ARV raiz);


void main()
{
	int exibicao;

	do{
    printf("Que tipo de Exibicao deseja utilizar?\n\nOrdem [1]\nPre-Ordem [2]\nPos-Ordem [3]\n\nInforme a opcao desejada: ");
    scanf("%i",&exibicao);

    if(exibicao<1 || exibicao>3)
    printf("\nOpcao invalida!!\n\n");
	}while(exibicao<1 || exibicao>3);

	ARV root = NULL;
	Menu(root,&exibicao);
}
ARV Insercao(ARV Arvore, int x)
{
	if(Arvore==NULL)
	return novo_elemento(x);

	if(x<Arvore->Item)
	Arvore->Esquerda=Insercao(Arvore->Esquerda,x);
	else if(x>Arvore->Item)
	Arvore->Direita=Insercao(Arvore->Direita,x);
	else
	{
		printf("\nNao sao permitidos valores iguais na arvore\n");
		return Arvore;
	}

	Arvore->Altura=maior(Altura(Arvore->Esquerda),Altura(Arvore->Direita))+1;

	int balanco=balanceamento(Arvore);

	if(balanco>=2 && x<Arvore->Esquerda->Item)
	return rota_direita(Arvore);
	else if(balanco<=-2 && x>Arvore->Direita->Item)
	return rota_esquerda(Arvore);

	if(balanco>=2 && x>Arvore->Esquerda->Item)
	{
		Arvore->Esquerda=rota_esquerda(Arvore->Esquerda);
		return rota_direita(Arvore);
	}

	if(balanco<=-2 && x<Arvore->Direita->Item)
	{
		Arvore->Direita=rota_direita(Arvore->Direita);
		return rota_esquerda(Arvore);
	}

	return Arvore;
}

int maior(int esquerda,int direita)
{
	if(esquerda>direita)
	return esquerda;
	else
	return direita;
}

int Altura(ARV Arvore)
{
	if(Arvore==NULL)
	return -1;

	return Arvore->Altura;
}

int balanceamento(ARV Arvore)
{
	if(Arvore==NULL)
	return 0;

	return Altura(Arvore->Esquerda) - Altura(Arvore->Direita);
}

ARV rota_direita(ARV Arvore)
{
	ARV aux=Arvore->Esquerda;
	ARV aux2=aux->Direita;
	aux->Direita=Arvore;
	Arvore->Esquerda=aux2;

	aux->Altura=maior(Altura(aux->Esquerda),Altura(aux->Direita))+1;

	Arvore->Altura=maior(Altura(Arvore->Esquerda),Altura(Arvore->Direita))+1;

	return aux;
}

ARV rota_esquerda(ARV Arvore)
{
	ARV aux=Arvore->Direita;
	ARV aux2=aux->Esquerda;
	aux->Esquerda=Arvore;
	Arvore->Direita=aux2;

	aux->Altura=maior(Altura(aux->Esquerda),Altura(aux->Direita))+1;

	Arvore->Altura=maior(Altura(Arvore->Esquerda),Altura(Arvore->Direita))+1;

	return aux;
}

ARV novo_elemento(int x)
{
	ARV aux=malloc(sizeof(struct arvore));

	aux->Item=x;
	aux->Esquerda=NULL;
	aux->Direita=NULL;
	aux->Altura=0;

	return aux;
}

ARV Deletar(ARV Arvore,int alvo)
{
	if(Arvore==NULL)
	return Arvore;

	if(alvo>Arvore->Item)
	Arvore->Direita=Deletar(Arvore->Direita,alvo);

	else if(alvo<Arvore->Item)
	Arvore->Esquerda=Deletar(Arvore->Esquerda,alvo);
	else
	{
		if(Arvore->Esquerda==NULL && Arvore->Direita==NULL)
		{
			free(Arvore);
			return NULL;
		}
		else if(Arvore->Esquerda==NULL && Arvore->Direita!=NULL)
		{
			ARV aux=Arvore->Direita;
			free(Arvore);
			return aux;
		}
		else if(Arvore->Esquerda!=NULL && Arvore->Direita==NULL)
		{
			ARV aux=Arvore->Esquerda;
			free(Arvore);
			return aux;
		}
		else
		{
			ARV aux=Arvore->Direita;

			while(aux->Esquerda!=NULL)
			{
				aux=aux->Esquerda;
			}

			int item_aux=aux->Item;

			Arvore->Direita=Deletar(Arvore->Direita,item_aux);
			Arvore->Item=item_aux;
		}
	}

	if (Arvore==NULL)
	return Arvore;

	Arvore->Altura=maior(Altura(Arvore->Esquerda),Altura(Arvore->Direita))+1;

	int balanco=balanceamento(Arvore);

	if(balanco>=2 && balanceamento(Arvore->Esquerda)>=0)
	return rota_direita(Arvore);

	if(balanco>=2 && balanceamento(Arvore->Esquerda)<0)
	{
		Arvore->Esquerda=rota_esquerda(Arvore->Esquerda);
		return rota_direita(Arvore);
	}

	if(balanco<=-2 && balanceamento(Arvore->Direita)<=0)
	return rota_esquerda(Arvore);

	if(balanco<=-2 && balanceamento(Arvore->Direita)>0)
	{
		Arvore->Direita=rota_direita(Arvore->Direita);
		return rota_esquerda(Arvore);
	}

	return Arvore;
}

/*ARV Alterar(ARV raiz,int alvo,int valor,int repetidos)
{
	if(alvo!=valor)
	{
	 raiz=Deletar(raiz,alvo);
	 raiz=Insercao(raiz,valor,&repetidos);

	 if(repetidos==1)
	 {
	 	raiz=Insercao(raiz,alvo,&repetidos);
	 	return raiz;
	 }
	 else
	 return raiz;
    }
    else
    {
    	printf("\nDigite um numero diferente do anterior\n");
    	return raiz;
	}
}*/

void Print(ARV raiz,int exibicao)
{
	if(exibicao==1) Print_Ordem(raiz);
	if(exibicao==2) Print_Pre_Ordem(raiz);
	if(exibicao==3) Print_Pos_Ordem(raiz);
}

void Print_Ordem(ARV raiz)
{
	if(raiz!=NULL)
	{
		Print_Ordem(raiz->Esquerda);
		printf("%i ",raiz->Item);
		Print_Ordem(raiz->Direita);
	}
}

void Print_Pre_Ordem(ARV raiz)
{
	if(raiz!=NULL)
	{
	    printf("%i ",raiz->Item);
		Print_Pre_Ordem(raiz->Esquerda);
		Print_Pre_Ordem(raiz->Direita);
	}
}

void Print_Pos_Ordem(ARV raiz)
{
	if(raiz!=NULL)
	{
		Print_Pos_Ordem(raiz->Esquerda);
		Print_Pos_Ordem(raiz->Direita);
		printf("%i ",raiz->Item);
	}
}

void Exclue_arvore(ARV raiz)
{
	if(raiz!=NULL)
	{
		Exclue_arvore(raiz->Esquerda);
		Exclue_arvore(raiz->Direita);
		free(raiz);
	}
}

int Menu(ARV raiz,int *exibicao)
{
	int valor,opcao,alvo;

	system ("cls");
	printf("\n----------------------------------MENU DE OPCOES--------------------------------\n");
	printf ("[1] - Inserir na Arvore\n");
	printf ("[2] - Exibir a Arvore\n");
	printf ("[3] - Excluir um valor na Arvore\n");
	printf ("[4] - Alterar um valor na Arvore\n");
	printf ("[5] - Alterar o tipo de Exibicao da Arvore\n");
    printf ("[6] - Excluir a Arvore\n");
	printf ("[0] - Encerrar o Programa\n\n");
	printf("Informe a opcao desejada: ");
	scanf ("%i",&opcao);

	switch (opcao)
	{
	    case 1 :
				system("cls");
				printf("\nInforme o valor que deseja inserir na Arvore: ");
	            scanf("%i",&valor);

	            int repetidos;

				raiz=Insercao(raiz,valor);/*,&repetidos);*/
				Print(raiz,*exibicao);
	            printf("\n\n");
	            system("pause");
	            Menu(raiz,exibicao);
	            break;

	    case 2 :
				system("cls");
				printf("\n");
				if(raiz==NULL)
	            printf("raiz vazia!\n\n");
	            else
	            Print(raiz,*exibicao);

				printf("\n\n");
	            system ("pause");
	            Menu(raiz,exibicao);
	            break;

		case 3:
				system("cls");
	            if(raiz==NULL)
	            printf("Arvore vazia!\n\n");
	            else
	            {
		            printf("\n");
					printf("Informe o valor que deseja excluir na Arvore: ");
		            scanf("%i",&alvo);
		            raiz = Deletar(raiz, alvo);
			        Print(raiz,*exibicao);
		            printf("\n");
				}
				system ("pause");
				Menu(raiz,exibicao);
				break;
	/*
		case 4:
				system("cls");
	            if(raiz==NULL)
	            printf("Arvore vazia!\n\n");
	            else
	            {
		            printf("\n");
					printf("Informe o valor que deseja alterar na Arvore: ");
		            scanf("%i",&alvo);
		            printf("\nInforme o novo valor: ");
	                scanf("%i",&valor);
		            raiz=Alterar(raiz, alvo,valor,repetidos);
			        Print(raiz,*exibicao);
		            printf("\n");
				}
				system ("pause");
				Menu(raiz,exibicao);
				break;

		*/case 5:
				do{
			    printf("Que tipo de Exibicao deseja utilizar?\n\nOrdem [1]\nPre-Ordem [2]\nPos-Ordem [3]\n\nInforme a opcao desejada: ");
			    scanf("%i",exibicao);

			    if(*exibicao<1 || *exibicao>3)
			    printf("\nOpcao invalida!!\n\n");
				}while(*exibicao<1 || *exibicao>3);

				Menu(raiz,exibicao);
				break;

		case 6:
				system("cls");
				printf("\n");
				Exclue_arvore(raiz);
				raiz=NULL;
				printf("A Arvore foi excluida!\n\n");
				system("pause");
				Menu(raiz,exibicao);
				break;

		case 0: return 0;
				break;

	    default:
				printf ("\nOpcao invalida!\n\n");
	            system ("pause");
	            Menu(raiz,exibicao);
	            break;
	}
}
