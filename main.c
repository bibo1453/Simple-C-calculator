#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //mini projet creer par Wahbi Soussi 01/06/2022 en Language c

    /*simple calculator*/

    float Valeur1 ;
    float valeur2 ;
    char operateur;
    float result;

    system("color f") ;

    printf("entrer Une Equation : \n");
    scanf("%f %c %f",&Valeur1,&operateur,&valeur2) ;

    switch(operateur)

    {
    case '+':
        result = Valeur1+valeur2 ;
        break;
    case '-':
        result = Valeur1-valeur2 ;
        break;
    case '*':
        result = Valeur1*valeur2 ;
        break;
    case '/':
        result = Valeur1/valeur2;
        break;
    case '^':
        result = pow(Valeur1,valeur2) ;
        break;
    case ' ':
        result =sqrt(valeur2);
    default:
       break;
    }

    system("cls") ;
    system("color b") ;

    printf("Votre Resultat : \n");
    printf("%.4f %c %.4f = %.4f \n\n",Valeur1,operateur,valeur2,result);

    return 0;
}
