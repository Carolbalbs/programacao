#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define texto "%[^\n]s"
#define qt_keywords 21
#define qt_operadores 6

struct busca_caracters
{
	char operador_simples;
	struct busca_caracters *prox_end; 
	int n_ocorrencias;
};
typedef struct busca_caracters *operadores;

struct busca_palavras
{
	char keyword[25];
	struct busca_palavras *prox_end; 
	int n_ocorrencias;
};
typedef struct busca_palavras *keys_operadores_compostos;

keys_operadores_compostos popula_keywords();
operadores popula_operadores();
int analisa_algoritmos(char nome_arquivo[50],keys_operadores_compostos lista,keys_operadores_compostos inicio_lista,operadores inicio_lista_operadores);
operadores Cria_Lista_Operadores(char novo_operador);
operadores Cria_No_Operadores(char novo_operador,operadores ultimo_no);
keys_operadores_compostos Cria_Lista(char nova_keyword[25]);
keys_operadores_compostos Cria_No(char nova_keyword[25],keys_operadores_compostos ultimo_no);
void busca_tipo_funcoes(char nome_arquivo[50],char nome_struct[25],keys_operadores_compostos ultimo_no,char nome_funcao[25],int *tem_struct);
int leitura_arquivo(char nome_arquivo[50],char nome_struct[25],keys_operadores_compostos Inicio_Lista,operadores inicio_lista_operadores,int tem_struct);
void conta_operadores(char line[250],operadores aux);
void decompoe_funcao(char line[250],char Funcao[25]);
int conta_keywords(char line[250],keys_operadores_compostos lista,char nome_struct[25], int tem_struct);
int funcoes_especiais_keywords(char line[250],keys_operadores_compostos lista,char nome_struct[25]);
int NO_funcoes_especiais_keywords(char line[250],keys_operadores_compostos lista);
void gera_relatorio(operadores inicio_lista_operadores1,operadores inicio_lista_operadores2,int passos_ag1,int passos_ag2,keys_operadores_compostos inicio_lista1,keys_operadores_compostos inicio_lista2);

void main()
{ 
	remove("relatorio_analise_algoritmos.txt");
	char nome_arquivo[50];
	int c=0,passos_ag1,passos_ag2;
	
	operadores inicio_lista_operadores1=popula_operadores();
	keys_operadores_compostos inicio_lista1=popula_keywords();
	keys_operadores_compostos aux1=inicio_lista1;
	
	while(aux1->prox_end!=NULL)
	aux1=aux1->prox_end;
	
	operadores inicio_lista_operadores2=popula_operadores();
	keys_operadores_compostos inicio_lista2=popula_keywords();
	keys_operadores_compostos aux2=inicio_lista2;

	while(aux2->prox_end!=NULL)
	aux2=aux2->prox_end;

	strcpy(nome_arquivo,"algoritmo1.c");
	passos_ag1=analisa_algoritmos(nome_arquivo,aux1,inicio_lista1,inicio_lista_operadores1);
	strcpy(nome_arquivo,"algoritmo2.c");
	passos_ag2=analisa_algoritmos(nome_arquivo,aux2,inicio_lista2,inicio_lista_operadores2);
	gera_relatorio(inicio_lista_operadores1,inicio_lista_operadores2,passos_ag1,passos_ag2,inicio_lista1,inicio_lista2);
}

keys_operadores_compostos popula_keywords()
{
	int i;
	keys_operadores_compostos lista=NULL,inicio_lista=NULL;
	char palavras_chaves[qt_keywords][10]={"!=",">=","<=","==","--","++","for(","if(","else if(","while(","strcpy","printf(","scanf","fflush","strcat","free","strcmp","strupr","strlen","sprintf","fscanf"};
	
	for(i=0;i<qt_keywords;i++)
	{
		if(lista==NULL)
		{
			lista=Cria_Lista(palavras_chaves[i]);
			inicio_lista=lista;
		}
		else
		lista=Cria_No(palavras_chaves[i],lista);
	}
	return inicio_lista;
}

operadores popula_operadores()
{
	int i;
	operadores lista_operadores=NULL,inicio_lista_operadores=NULL;
	char operadores[qt_operadores]={'<','>','=','+','-','/'};
	
	for(i=0;i<qt_operadores;i++)
	{
		if(lista_operadores==NULL)
		{
			lista_operadores=Cria_Lista_Operadores(operadores[i]);
			inicio_lista_operadores=lista_operadores;
		}
		else
		lista_operadores=Cria_No_Operadores(operadores[i],lista_operadores);
	}
	return inicio_lista_operadores;
}

int analisa_algoritmos(char nome_arquivo[50],keys_operadores_compostos lista,keys_operadores_compostos inicio_lista,operadores inicio_lista_operadores)
{	
	int funcoes_n_nativas=0,i,total_passos=0,tem_struct=0;
	char busca[9],nome_struct[25],nome_funcao[25];
	
	busca_tipo_funcoes(nome_arquivo,nome_struct,lista,nome_funcao,&tem_struct);
	
	total_passos=leitura_arquivo(nome_arquivo,nome_struct,inicio_lista,inicio_lista_operadores,tem_struct);
	
	FILE* arquivo = fopen("relatorio_analise_algoritmos.txt", "a");
	
	fprintf(arquivo,"*	ANÁLISE DO %s:	*\n",nome_arquivo);
	while(inicio_lista_operadores!=NULL)
	{
		fprintf(arquivo,"Total de %c encontrados no programa: [%i]\n",inicio_lista_operadores->operador_simples,inicio_lista_operadores->n_ocorrencias);
		total_passos+=inicio_lista_operadores->n_ocorrencias;
		inicio_lista_operadores=inicio_lista_operadores->prox_end;
	}
	
	while(inicio_lista!=NULL)
	{
		fprintf(arquivo,"Total de %s encontrados no programa: [%i]\n",inicio_lista->keyword,inicio_lista->n_ocorrencias);
		inicio_lista=inicio_lista->prox_end;
	}
	
	fprintf(arquivo,"-> Total de passos do %s: [%i] <-\n\n",nome_arquivo,total_passos);
	fclose(arquivo);
	
	return total_passos;
}

operadores Cria_Lista_Operadores(char novo_operador)
{
    operadores No=malloc(sizeof(struct busca_caracters)); 
    No->operador_simples=novo_operador;
    No->n_ocorrencias=0;
    No->prox_end=NULL;
    
    return No; 
}

operadores Cria_No_Operadores(char novo_operador,operadores ultimo_no)
{
  	operadores No=malloc(sizeof(struct busca_caracters)); 
    ultimo_no->prox_end=No;
    No->prox_end=NULL;
    No->operador_simples=novo_operador;
    No->n_ocorrencias=0;
    
    return No; 
}

keys_operadores_compostos Cria_Lista(char nova_keyword[25])
{
    keys_operadores_compostos No=malloc(sizeof(struct busca_palavras)); 
    strcpy(No->keyword,nova_keyword);
    No->n_ocorrencias=0;
    No->prox_end=NULL;
    
    return No; 
}

keys_operadores_compostos Cria_No(char nova_keyword[25],keys_operadores_compostos ultimo_no)
{
    keys_operadores_compostos No=malloc(sizeof(struct busca_palavras)); 
    ultimo_no->prox_end=No;
    No->prox_end=NULL;
    strcpy(No->keyword,nova_keyword);
    No->n_ocorrencias=0;
    
    return No; 
}

void busca_tipo_funcoes(char nome_arquivo[50],char nome_struct[25],keys_operadores_compostos ultimo_no,char nome_funcao[25],int *tem_struct)
{	
	int posicao_final,inicio_struct=0,i,k=0,inicio_nome=0,fim_busca=0,achou=0;

	FILE *file = fopen(nome_arquivo, "r");

	char line[250],aux[250];
	//Inicialização de variáveis char
	strcpy(aux,"");
	strcpy(nome_struct,"");
	
	while (fgets(line, sizeof(line), file)!=NULL)
	{	
		k=0;
		
		if(strstr(line,"struct")!=NULL)
		*tem_struct=1;
		
		if(strstr(line,"void main(")!=NULL || strstr(line,"int main(")!=NULL)
		break;
		
		if(*tem_struct==1)
		{
			if(strstr(line,"}")!=NULL) //Procura pelo fim da declaração do struct
			inicio_struct=1;
		
			if(inicio_struct==1) //Uma vez encontrado...
			{
				if(strstr(line,"(")!=NULL) //Procura pelo primeiro escopo de função do programa (abertura do parantese (      )
				fim_busca=1; //Caso encontre, seta o arquivo para NULL para fim da checagem do bloco while
				if(fim_busca==0)//Enquanto o arquivo estiver aberto:
				{
					if(strstr(line,";")!=NULL) //Procura por ; no arquivo, são responsaveis por finalizar a declaração do struct
					strcpy(aux,line); //Copia pra variável auxiliar a linha que contém o ;
						
					posicao_final = strcspn(aux, ";");
					aux[posicao_final]='\0'; //a string é finalizada na posição que o ; se encontrava
				}
				else if(fim_busca==1 && achou==0)
				{
					for (i=strlen(aux);i>=0;i--)
					//Percorre de trás pra frente a variável auxiliar procurando pelo início do nome do struct dado pelo typedef
					{
						if(aux[i]==' ' || aux[i]=='}') //Encontrando o caracter do primeiro espaço, ou do fechamento das chaves do struct
						{
							inicio_nome=i; //Guarda a posição do início do nome
							i=0; //Zera o contador pra quebrar o loop
						}
					}
						
					for(i=inicio_nome;i<strlen(aux);i++)
					{
						//Percorrimento da variável auxiliar a partir do inicio do nome de fato do struct
						if(aux[i]!='*' && aux[i]!='}' && aux[i]!=' ')
						//Copia pra variável nome_struct apenas o conteúdo necessário (nome) do struct, removendo caracteres especiais e espaços
						{
							nome_struct[k]=aux[i];
							k++;
						}
					}
					
					if(strlen(nome_struct)>k)
					{
						int fix_string = strlen(nome_struct)-k;
						nome_struct[strlen(nome_struct) - fix_string] = '\0';
					}
					
					achou=1;
				}
				
				if(achou==1)
				{
					if(strstr(line,"(")!=NULL && strstr(line,")")!=NULL)
					{
						if(strstr(line,nome_struct)!=NULL || strstr(line,"void ")!=NULL || strstr(line,"float ")!=NULL || strstr(line,"int ")!=NULL)
						{
							decompoe_funcao(line,nome_funcao);
							if(strcmp(nome_funcao,"")!=0)
							ultimo_no=Cria_No(nome_funcao,ultimo_no);
						}
					}
				}
			}
		}
		else
		{
			if(strstr(line,"(")!=NULL && strstr(line,")")!=NULL)
			{
				if(strstr(line,"void ")!=NULL || strstr(line,"float ")!=NULL || strstr(line,"int ")!=NULL)
				{
					decompoe_funcao(line,nome_funcao);
					if(strcmp(nome_funcao,"")!=0)
					ultimo_no=Cria_No(nome_funcao,ultimo_no);
				}
			}
		}
	}
	fclose(file);
}
	
void decompoe_funcao(char line[250],char nome_funcao[25])
{
	int i,k=0,inicio_funcao=0,fim_funcao=0,tamanho_palavra;
	strcpy(nome_funcao,"");
							
	inicio_funcao=strcspn(line, " ")+1;
	fim_funcao=strcspn(line, "(");
	tamanho_palavra=fim_funcao-inicio_funcao;
				
	for(i=inicio_funcao;i<fim_funcao;i++)
	{							
		nome_funcao[k]=line[i];
		k++;
	}
	
	nome_funcao[tamanho_palavra]='\0';
}

int leitura_arquivo(char nome_arquivo[50],char nome_struct[25],keys_operadores_compostos Inicio_Lista,operadores inicio_lista_operadores,int tem_struct)
{
	FILE *file = fopen(nome_arquivo, "r");
	
	char line[250];
	
	keys_operadores_compostos aux;
	operadores aux_operadores;
	
	int total_passos=0;
	int i;
	
	while (fgets(line, sizeof(line), file)!=NULL) //Copia o conteúdo do arquivo de texto para uma string previamente criada
	{
		aux_operadores=inicio_lista_operadores;
		while(aux_operadores!=NULL)
		{
			conta_operadores(line,aux_operadores);
			aux_operadores=aux_operadores->prox_end;
		}
		
		aux=Inicio_Lista;
		while(aux!=NULL)
		{
			total_passos+=conta_keywords(line,aux,nome_struct,tem_struct);
			aux=aux->prox_end;
		}
	}
	
	fclose(file);
	
	return total_passos;
}

void conta_operadores(char line[250],operadores aux)
{
	int i,posicao_ultima_ocorrencia,primeira_ocorrencia=0;
	char *aux_line,operador[2];
	
	operador[0]=aux->operador_simples;
	operador[1]='\0';
	if(strstr(line,operador)!=NULL)
	{
		primeira_ocorrencia = strcspn(line, operador);
		aux_line = strrchr(line, aux->operador_simples); 
		posicao_ultima_ocorrencia=strlen(line)-strlen(aux_line)+1;
		
		for(i=primeira_ocorrencia;i<posicao_ultima_ocorrencia;i++)
		{
			if(aux->operador_simples=='+' && line[i]=='+')
			{
				if(line[i+1]!='+' && line[i-1]!='+')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
			else if(aux->operador_simples=='-' && line[i]=='-')
			{
				if(line[i+1]!='>' && line[i-1]!='-' && line[i+1]!='-')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
			else if(aux->operador_simples=='=' && line[i]=='=')
			{
				if(line[i+1]!='=' && line[i-1]!='=' && line[i-1]!='>' && line[i-1]!='<' && line[i-1]!='!')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
			else if(aux->operador_simples=='>' && line[i]=='>' && strstr(line,"include")==NULL)
			{
				if(line[i+1]!='=' && line[i-1]!='-')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
			else if(aux->operador_simples=='<' && line[i]=='<' && strstr(line,"include")==NULL)
			{
				if(line[i+1]!='=')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
			else if(aux->operador_simples=='/' && line[i]=='/')
			{
				if(line[i+1]!='/' && line[i+1]!='*' && line[i-1]!='*')
				aux->n_ocorrencias=aux->n_ocorrencias+1;
			}
		}
	}
}

int conta_keywords(char line[250],keys_operadores_compostos lista,char nome_struct[25], int tem_struct)
{
	if(tem_struct==1)
	return funcoes_especiais_keywords(line,lista,nome_struct);
	else
	return NO_funcoes_especiais_keywords(line,lista);
}


int funcoes_especiais_keywords(char line[250],keys_operadores_compostos lista,char nome_struct[25])
{	
	int ocorrencia=0;
	if(strstr(line,lista->keyword)!=NULL && strstr(line,"(")!=NULL && strstr(line,")")!=NULL && strstr(line,"void ")==NULL && strstr(line,"int ")==NULL && strstr(line,"float ")==NULL && strstr(line,"char ")==NULL) 
	{
		if(strstr(line,nome_struct)!=NULL && strstr(line,";")!=NULL)
		{
			ocorrencia=1;
			lista->n_ocorrencias=lista->n_ocorrencias+1;
		}	
		
		if(strcmp(lista->keyword,"for(")==0 || strcmp(lista->keyword,"while(")==0)
		{
			ocorrencia=2;
			lista->n_ocorrencias=lista->n_ocorrencias+1;
		}
		else if(strcmp(lista->keyword,"if(")==0)
		{
			if(strstr(line,"else")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"else")==0)
		{
			if(strstr(line,"if")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"printf(")==0)
		{
			if(strstr(line,"sprintf")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"scanf")==0)
		{
			if(strstr(line,"fscanf")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else
		{
			ocorrencia=1;
			lista->n_ocorrencias=lista->n_ocorrencias+1;
		}
	}
	return ocorrencia;
}
int NO_funcoes_especiais_keywords(char line[250],keys_operadores_compostos lista)
{
	int ocorrencia=0;
	if(strstr(line,lista->keyword)!=NULL && strstr(line,"(")!=NULL && strstr(line,")")!=NULL && strstr(line,"void ")==NULL && strstr(line,"int ")==NULL && strstr(line,"float ")==NULL && strstr(line,"char ")==NULL) 
	{
		if(strcmp(lista->keyword,"for(")==0 || strcmp(lista->keyword,"while(")==0)
		{
			ocorrencia=2;
			lista->n_ocorrencias=lista->n_ocorrencias+1;
		}
		else if(strcmp(lista->keyword,"if(")==0)
		{
			if(strstr(line,"else")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"else")==0)
		{
			if(strstr(line,"if")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"printf(")==0)
		{
			if(strstr(line,"sprintf")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else if(strcmp(lista->keyword,"scanf")==0)
		{
			if(strstr(line,"fscanf")==NULL)
			{
				ocorrencia=1;
				lista->n_ocorrencias=lista->n_ocorrencias+1;
			}
		}
		else
		{
			ocorrencia=1;
			lista->n_ocorrencias=lista->n_ocorrencias+1;
		}
	}
	return ocorrencia;
}

void gera_relatorio(operadores inicio_lista_operadores1,operadores inicio_lista_operadores2,int passos_ag1,int passos_ag2,keys_operadores_compostos inicio_lista1,keys_operadores_compostos inicio_lista2)
{
	clock_t tempo_inicio=0, tempo_fim=0;
	double tempo_ag1,tempo_ag2;
	
	int encerrar=0,contador_ag1=0,contador_ag2=0;
	FILE* arquivo = fopen("relatorio_analise_algoritmos.txt", "a");
	
	while(inicio_lista_operadores1!=NULL)
	{
		if(inicio_lista_operadores1->n_ocorrencias>inicio_lista_operadores2->n_ocorrencias)
		fprintf(arquivo,"\nA [%i] ocorrencias a mais de %c no Algoritmo 1 do que no Algoritmo 2",inicio_lista_operadores1->n_ocorrencias-inicio_lista_operadores2->n_ocorrencias,inicio_lista_operadores1->operador_simples);
		else if(inicio_lista_operadores2->n_ocorrencias>inicio_lista_operadores1->n_ocorrencias)
		fprintf(arquivo,"\nA [%i] ocorrencias a mais de %c no Algoritmo 2 do que no Algoritmo 1",inicio_lista_operadores2->n_ocorrencias-inicio_lista_operadores1->n_ocorrencias,inicio_lista_operadores1->operador_simples);
		
		inicio_lista_operadores1=inicio_lista_operadores1->prox_end;
		inicio_lista_operadores2=inicio_lista_operadores2->prox_end;
	}
	
	while(encerrar!=1)
	{
		if(inicio_lista1!=NULL && inicio_lista2!=NULL)
		{
			if(strcmp(inicio_lista1->keyword,inicio_lista2->keyword)==0)
			{
				if(inicio_lista1->n_ocorrencias>inicio_lista2->n_ocorrencias && strcmp(inicio_lista1->keyword,inicio_lista2->keyword)==0)
				fprintf(arquivo,"\nA [%i] ocorrencias a mais de %s no Algoritmo 1 do que no Algoritmo 2",inicio_lista1->n_ocorrencias-inicio_lista2->n_ocorrencias,inicio_lista1->keyword);
				if(inicio_lista2->n_ocorrencias>inicio_lista1->n_ocorrencias)
				fprintf(arquivo,"\nA [%i] ocorrencias a mais de %s no Algoritmo 2 do que no Algoritmo 1",inicio_lista2->n_ocorrencias-inicio_lista1->n_ocorrencias,inicio_lista2->keyword);	
			}
		}
		
		if(inicio_lista1!=NULL)
		{
			inicio_lista1=inicio_lista1->prox_end;
			contador_ag1++;
		}
		
		if(inicio_lista2!=NULL)
		{
			inicio_lista2=inicio_lista2->prox_end;
			contador_ag2++;
		}
		
		if(inicio_lista1==NULL && inicio_lista2==NULL)
		encerrar=1;
	}
	
	contador_ag1=contador_ag1-qt_keywords;
	contador_ag2=contador_ag2-qt_keywords;
	
	if(contador_ag1>contador_ag2)
	fprintf(arquivo,"\n\nO Algoritmo 1 tem [%i] mais funcoes nao nativas do que o Algoritmo 2 - [%i] X [%i]",contador_ag1-contador_ag2,contador_ag1,contador_ag2);
	else if(contador_ag2>contador_ag1)
	fprintf(arquivo,"\n\nO Algoritmo 2 tem [%i] mais funcoes nao nativas do que o Algoritmo 1 - [%i] X [%i]",contador_ag2-contador_ag1,contador_ag2,contador_ag1);
	else
	fprintf(arquivo,"\n\nOs Algoritmos teem a mesma quantidade de funcoes nao nativas: [%i]",contador_ag1);
	
	fprintf(arquivo,"\n\nAs demais ocorrencias analisadas sao iguais para ambos algoritmos");
	
	int resposta;
	
	printf("\nDeseja executar os algoritmos para Analise? [1] para Sim - [0] para Nao: \nATENCAO: COMPILE os arquivos algoritmo1.c e algoritmo2.c que se encontram na mesma pasta deste programa\npara a analise ser possivel: ");
	scanf("%i",&resposta);getchar();
	
	if(resposta==1)
	{
		printf("\n*** Execucao do Algoritmo 1 ***");
		tempo_inicio=clock();
		system("algoritmo1.exe");
		tempo_fim=clock();
		tempo_ag1=(double)tempo_fim/1000;	
				
		printf("\n\n*** Execucao do Algoritmo 2 ***");
		
		tempo_inicio=clock();
		system("algoritmo2.exe");
		tempo_fim=clock();
		tempo_ag2=(double)tempo_fim/1000;		
			
		if(passos_ag1<passos_ag2 && tempo_ag1<tempo_ag2)
		{
			fprintf(arquivo,"\n\nO Algoritmo 1 neste cenario tem complexidade Omega ante ao Algoritmo 2 ((Big O)), pois executa menor quantidade de passos e alem disso performa melhor com menor tempo de execucao.\n\n");
			fprintf(arquivo,"COMPARATIVO com a entrada de dados requisitada:\n");
			fprintf(arquivo,"O Algoritmo 1 executa [%i] passos a menos que o Algoritmo 2 - [%i] X [%i]\n",passos_ag2-passos_ag1,passos_ag1,passos_ag2);
			fprintf(arquivo,"O Algoritmo 1 leva [%.3lf] segundos a menos que o Algoritmo 2 para ser finalizado : [%.3lf segundos] X [%.3lf segundos]",tempo_ag2-tempo_ag1,tempo_ag1,tempo_ag2);
		}
		else if(passos_ag1<passos_ag2 && tempo_ag1>tempo_ag2)
		{
			fprintf(arquivo,"\n\nO Algoritmo 1 executa menos passos mas tem uma curva de crescimento maior que a do Algoritmo 2, sendo assim, o mesmo tem um desempenho inferior com a entrada de dados requisitada.\n\n");
			fprintf(arquivo,"COMPARATIVO com a entrada de dados requisitada:\n");
			fprintf(arquivo,"O Algoritmo 1 executa [%i] passos a menos que o Algoritmo 2 - [%i] X [%i],\n",passos_ag2-passos_ag1,passos_ag1,passos_ag2);
			fprintf(arquivo,"MAS o Algoritmo 2 leva [%.3lf] segundos a menos que o Algoritmo 1 - [%.3lf] X [%.3lf].\n",tempo_ag2-tempo_ag1,tempo_ag2,tempo_ag1);
			fprintf(arquivo,"\nCOMPLEXIDADE para este cenario: Algoritmo 2 - OMEGA ||| Algoritmo 1 - BIG O\n");
		}
		else if(passos_ag2<passos_ag1 && tempo_ag2<tempo_ag1)
		{
			fprintf(arquivo,"\n\nO Algoritmo 2 neste cenario tem complexidade Omega ante ao Algoritmo 1 ((Big O)), pois executa menor quantidade de passos e alem disso performa melhor com menor tempo de execucao\n");
			fprintf(arquivo,"O Algoritmo 2 executa [%i] passos a menos que o Algoritmo 1 - [%i] X [%i]\n",passos_ag1-passos_ag2,passos_ag2,passos_ag1);
			fprintf(arquivo,"O Algoritmo 2 leva [%.3lf] segundos a menos que o Algoritmo 1 para ser finalizado - [%.3lf segundos] X [%.3lf segundos]",tempo_ag1-tempo_ag2,tempo_ag1,tempo_ag2);	
			fprintf(arquivo,"COMPARATIVO com a entrada de dados requisitada:\n");
		}
		else if(passos_ag2<passos_ag1 && tempo_ag2>tempo_ag1)
		{
			fprintf(arquivo,"\n\nO Algoritmo 2 executa menos passos mas tem uma curva de crescimento maior que a do Algoritmo 1, sendo assim, o mesmo tem um desempenho inferior com a entrada de dados requisitada.\n\n");
			fprintf(arquivo,"COMPARATIVO com a entrada de dados requisitada:\n");
			fprintf(arquivo,"O Algoritmo 2 executa [%i] passos a menos que o Algoritmo 1 - [%i] X [%i],\n",passos_ag1-passos_ag2,passos_ag2,passos_ag1);
			fprintf(arquivo,"MAS o Algoritmo 1 leva [%.3lf] segundos a menos que o Algoritmo 2 - [%.3lf] X [%.3lf].\n",tempo_ag2-tempo_ag1,tempo_ag1,tempo_ag2);
			fprintf(arquivo,"\nCOMPLEXIDADE para este cenario: Algoritmo 1 - OMEGA ||| Algoritmo 2 - BIG O\n");
		}
		else
		fprintf(arquivo,"\nOs 2 algoritmos teem complexidade igual e performam o mesmo desempenho em tempo");
	}
	
	fclose(arquivo);
	system ("relatorio_analise_algoritmos.txt");
}

