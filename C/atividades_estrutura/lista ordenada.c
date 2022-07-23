#include <stdio.h>
#include <stdlib.h>

struct ListNodePtr
{
	int item;
	struct ListNodePtr *previousPtr;
	struct ListNodePtr *nextPtr;
};
typedef struct ListNodePtr *Lista;

Lista insert(Lista lista,int item);

void main()
{
	Lista lista=NULL;
	
	int i,item;

	for(i=0;i<5;i++)
	{
		printf("\nInforme um valor: ");
		scanf("%i",&item);getchar();
		
		lista=insert(lista,item);
	}
	
	while(lista!=NULL)
	{
		printf("\t %i",lista->item);
		lista=lista->nextPtr;
	}
	
	
}

Lista insert(Lista lista,int item)
{
	Lista newPtr,previousPtr,currentPtr;
	
	newPtr = malloc(sizeof(struct ListNodePtr));
	
	if(newPtr!=NULL)
	{
		newPtr->item=item;
		newPtr->nextPtr = NULL;
		
		previousPtr = NULL;
		currentPtr = lista;
		
		while(currentPtr!=NULL && item>currentPtr->item)
		{
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
		
		if(previousPtr==NULL)
		{
			newPtr->nextPtr=lista;
			lista = newPtr;
		}
		else
		{
			previousPtr->nextPtr=newPtr;
			newPtr->nextPtr=currentPtr;
		}
	}
	else
	printf("%i nao inserido. Sem memoria disponivel");
	
	return lista;
}

