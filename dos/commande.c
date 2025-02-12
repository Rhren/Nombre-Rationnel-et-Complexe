#include <stdio.h>
#include <stdlib.h>
void commande(FILE *fichier,char *chaine,char *file)
{
	int i;
	int j=0;
	int a;
	int l=0;
	int b; 
	fichier=fopen(file,"r");
	if(fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		exit(1);
	}
	else
	{
		for(i=0 ; i<10000;i++)
		{
			fscanf(fichier,"%c",&chaine[i]);
		}
		for(i=0 ; i<10000; i++)
		{
			if(chaine[i] == '\n')
			{
				j++;
			}
		}
		
		for (a=0; a<10000; a++)
		{
			if(chaine[a] == '\n')
			{
				l++;
			}
			if(j-l==10) 
				break;
		}	
		
		for(b=a ; b<10000; b++)
		{
			printf("%c",chaine[b]);
		}
			
	}
		fclose(fichier);
	}
char *allocation(int nbr)
{
	char *tab=NULL;
	tab=(char*)malloc(nbr*sizeof(char));
	return (tab);
}
int compteur(char *file){
	int nbr=0;
	FILE *fichier=fopen(file,"r");
	while(fgetc(fichier) != EOF)
	{
		nbr++;
	}
	fclose(fichier);
	return nbr;
}



