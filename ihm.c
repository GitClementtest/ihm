#include<stdio.h>
#include<math.h>
#include"fact.h"
#include"add.h"


int main(void){



char string[5]="hello";


#ifdef DEBUG
printf("%s\n",string);


double k=0;
for(k=0;k<sizeof(string);k++){


printf("%lf\n",string[k]);






}
#endif


double val1;
double val2;
char on_off;


//Choix : Faire tourner la calc ou quitter le programme
printf("Faire un calcul : entrez 1, Quitter le programme : entrez 2 \n");
scanf("%s",&string[0]);
on_off=string[0]-48;

if(on_off=1){


printf("Entrez une valeur\n");
scanf("%s",&string[0]);
printf("Valeur 1 : %d\n", string[0]-48);
val1=string[0]-48;

printf("Entrez une 2eme valeur\n");
scanf("%s",&string[0]);
printf("Valeur 2 : %d\n", string[0]-48);
val2=string[0]-48;

printf("Entrez votre choix : 1 : addition, 2 : soustraction, 3 : multiplication\n");
scanf("%s",&string[0]);
printf("Choix : %d\n", string[0]-48);

char choix;
choix = string[0]-48;

double res;

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


//res=add(val1,val2);
res=exp(val1);
printf("Résultat : %lf\n", res);

}

}

else{

return 1;
}
}
