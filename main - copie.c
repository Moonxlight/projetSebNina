#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#DEFINE PORTEFEUILLE (valeurAlphabet, valeurFacebook, valeurApple, valeurMicrosoft, actionsAlphabet, actionsFacebook, actionsApple, actionsMicrosoft) valeurAlphabet*actionsAlphabet+valeurFacebook*actionsFacebook+valeurApple*actionsApple+valeurMicrosoft*actionsMicrosoft;

int main(void){
char name[40];
char confirmation[3];
int cash;
int jour;
int actionsAlphabet;
int actionsFacebook;
int actionsApple;
int actionsMicrosoft;
char url[400];

float portfeuille(float *valeurAlphabet, float *valeurFacebook, float *valeurApple, float *valeurMicrosoft,
float *actionsAlphabet, float *actionsFacebook, float *actionsApple, float *actionsMicrosfot);

printf("Quel est votre nom ?\n ");
scanf("%s", name);
printf("Quel est le montant que vous souhaitez investir?\n");
scanf("%d", &cash);
printf("Choisir un jour du mois de Novembre entre 1 et 30:\n");
scanf("%d", &jour);
printf("Indiquez le nombre d'actions des entreprises suivantes que vous souhaitez acheter\n");
printf("Alphabet:\n");
scanf("%d",&actionsAlphabet);
printf("Facebook:\n");
scanf("%d",&actionsFacebook);
printf("Apple:\n");
scanf("%d",&actionsApple);
printf("Microsoft:\n");
scanf("%d",&actionsMicrosoft);

 printf("Vous souhaitez acheter %d actions Alphabet, %d Facebook, %d actions Apple et %d actions Microsoft.\n",
 actionsAlphabet, actionsFacebook, actionsApple, actionsMicrosoft);
 /*printf("Tapez ok pour confirmer\n");
 scanf("%s", confirmation);

if (strcmp(confirmation,"ok")){
    printf("Merci.\n");
} else {
printf("Indiquez le nombre d'actions des entreprises suivantes que vous souhaitez acheter\n");
printf("Alphabet:\n");
scanf("%d",&actionsAlphabet);
printf("Facebook:\n");
scanf("%d",&actionsFacebook);
printf("Apple:\n");
scanf("%d",&actionsApple);
printf("Microsoft:\n");
scanf("%d",&actionsMicrosoft);
}*/

int Amazon(int argc, char *argv[])
{
   FILE* fichier_Amazon = NULL;
   float valeurAmazon[30]={0}; //Tableau des 30 cotations

   fichier_Amazon = fopen{"Amazon.csv", "r"};

   if(fichier_Amazon != NULL)
   {
       int compteur = 0;
       for (compteur = 0; compteur < 30; compteur++)
       {
           fscanf(fichier, "%f", &valeurAmazon[compteur]);
       }
       fclose(fichier_Amazon);
   }
   return 0;
}

}
int Alphabet(int argc, char *argv[])
{
   FILE* fichier_Alphabet = NULL;
   float valeurAlphabet[30]={0}; //Tableau des 30 cotations

   fichier_Alphabet = fopen{"Alphabet.csv", "r"};

   if(fichier_Alphabet != NULL)
   {
       int compteur = 0;
       for (compteur = 0; compteur < 30; compteur++)
       {
           fscanf(fichier, "%f", &valeurAlphabet[compteur]);
       }
       fclose(fichier_Alphabet);
   }
   return 0;
}

int Apple(int argc, char *argv[])
{
   FILE* fichier_Apple = NULL;
   float valeurApple[30]={0}; //Tableau des 30 cotations

   fichier_Apple = fopen{"Apple.csv", "r"};

   if(fichier_Apple != NULL)
   {
       int compteur = 0;
       for (compteur = 0; compteur < 30; compteur++)
       {
           fscanf(fichier, "%f", &valeurApple[compteur]);
       }
       fclose(fichier_Apple);
   }
   return 0;
}

int Microsoft(int argc, char *argv[])
{
   FILE* fichier_Microsoft = NULL;
   float valeurMicrosoft[30]={0}; //Tableau des 30 cotations

   fichier_Microsoft = fopen{"Microsoft.csv", "r"};

   if(fichier_Microsoft != NULL)
   {
       int compteur = 0;
       for (compteur = 0; compteur < 30; compteur++)
       {
           fscanf(fichier, "%f", &valeurMicrosoft[compteur]);
       }
       fclose(fichier_Microsoft);
   }
   return 0;
}

int Facebook(int argc, char *argv[])
{
   FILE* fichier_Facebook = NULL;
   float valeurFacebook[30]={0}; //Tableau des 30 cotations

   fichier_Facebook = fopen{"Facebook.csv", "r"};

   if(fichier_Facebook != NULL)
   {
       int compteur = 0;
       for (compteur = 0; compteur < 30; compteur++)
       {
           fscanf(fichier, "%f", &valeurFacebook[compteur]);
       }
       fclose(fichier_Facebook);
   }
   return 0;
}



printf("Votre portefeuille vaut: %f euros le %d Novembre.\n", portfeuille(&valeurAlphabet, &valeurFacebook, &valeurApple, &valeurMicrosoft,
&actionsAlphabet, &actionsFacebook, &actionsApple, &actionsMicrosfot), jour);
printf("Vous detenez %d actions Alphabet, %d Facebook, %d actions Apple et %d actions Microsoft.\n",
actionsAlphabet, actionsFacebook, actionsApple, actionsMicrosoft);
printf("Votre score est de: %f pourcent.\n", PORTEFEUILLE (valeurAlphabet, valeurFacebook, valeurApple, valeurMicrosoft, actionsAlphabet, actionsFacebook, actionsApple, actionsMicrosoft)+cashDispo(&cash)-cash/cashDispo(&cash));

return 0;
}


/*float portfeuille(float *valeurAlphabet, float *valeurFacebook, float *valeurApple, float *valeurMicrosoft,
float *actionsAlphabet, float *actionsFacebook, float *actionsApple, float *actionsMicrosfot){

return (*valeurAlphabet * *actionsAlphabet)+(*valeurFacebook* *actionsFacebook)+(*valeurApple* *actionsApple)+(*valeurMicrosoft* *actionsMicrosoft);
}*/

float cashDispo(int *cash){
    return *cash-PORTEFEUILLE (valeurAlphabet, valeurFacebook, valeurApple, valeurMicrosoft, actionsAlphabet, actionsFacebook, actionsApple, actionsMicrosoft);
}

