#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fact.h"
#include"add.h"


int main(void){


double val1;
double val2;
double res;
int on_off;
int choix;


//Choix : Faire tourner la calc ou quitter le programme

while(1)
{
printf("Faire un calcul : entrez 1, Quitter le programme : entrez 2 \n");
scanf("%d",&choix);
//printf("%d\n",choix);
on_off=choix;


//printf("%d\n",on_off);


if(on_off==1){

//printf("on_off=1, on est entré dans le if\n");
printf("Entrez une valeur\n");
scanf("%lf",&val1);
printf("Valeur 1 : %lf\n", val1);

printf("Entrez une 2eme valeur\n");
scanf("%lf",&val2);
printf("Valeur 2 : %lf\n", val2);

printf("Entrez votre choix : 1 : addition, 2 : soustraction, 3 : multiplication 4 : exp, 5 : cos\n");
scanf("%d",&choix);



if(choix==1){

res = val1+val2;
printf("Résultat : %lf\n",res);

}
else if(choix == 2 ){

res = val1 - val2;
printf("Résultat : %lf\n", res);

}
else if(choix == 3){

res = val1*val2;
printf("Résultat : %lf\n", res);

}

else if(choix==4){

res=exp(val1);
printf("Résultat : %lf\n", res);

}

else if(choix==5){

printf("Résultat : %lf\n",cos(val1)); 

}


else{

printf("Choix hors de la liste\n");
}
}

else if(on_off==2){

exit(0);
}

else{

printf("Erreur\n");


}
}






return 1;

}

