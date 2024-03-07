#include <stdio.h>

float totalHT(float prix[3])
{
	int i;
	float total = 0;
	for (i = 0; i < 3; i++)
	{
		total = total + prix[i];
	}
	return total;
}

float tauxTVA(float totalHT,float tva)
{
	float tauxTVA = (totalHT * tva) / 100;
	return tauxTVA;
}

float totalTTC(float totalHT, float tauxTVA)
{
	float TTC = totalHT + tauxTVA;
	return TTC;
}

int main(){
	
	const float tva = 20;
	char nom[100];
	char article[3][100];
	float prix[3];
	char mode[100];

	printf("donner votre nom: ");
	scanf("%s", nom);

	int i;
	int j;
	for(i = 0 ,j = 0; i < 3 ,j < 3; i++, j++)
	{
		printf("Enter le nom d'article: ");
		scanf("%s", article[i]);

		printf("Enter le prix d'article: ");
		scanf("%f", &prix[j]);
	}


	printf("entrer Le mode de Paiement: ");
	scanf("%s", mode);

	printf("\n\n---------------------Facture-----------------------------\n\n\n");

	printf("Nom: %s\n", nom);
	
	printf("\n-----Articles-----\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", article[i]);
	}
	printf("------------------\n\n");

	float resTotalHT = totalHT(prix);
	printf("Le totalHT est: %.2fDH\n", resTotalHT);

	float resTauxTVA = tauxTVA(resTotalHT, tva);
	printf("Le taux de la TVA est: %.2fDH\n", resTauxTVA);

	float resTotalTTC = totalTTC(resTotalHT, resTauxTVA);
	printf("Le total TTC est: %.2fDH\n", resTotalTTC);

	printf("Le mode de paiement est: %s\n", mode);

	printf("\n\n---------------------Facture-----------------------------\n");
}
