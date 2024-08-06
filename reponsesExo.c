#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    float s1 = 0, s2 = 0, l = 0;

    printf("Ce programme résout une équation du second degré \n");

    printf("Entrez la valeur de 'a' souhaitée : ");
    scanf("%d", &a);

    printf("Entrez la valeur de 'b' souhaitée : ");
    scanf("%d", &b);

    printf("Entrez la valeur de 'c' souhaitée : ");
    scanf("%d", &c);

    if (a != 0)
    {
        l = (b * b) - 4 * (a * c);

        if (l > 0)
        {
            s1 = (-b + sqrt(l)) / (2 * a);
            s2 = (-b - sqrt(l)) / (2 * a);
            printf("La première solution est : %f \n", s1);
            printf("La deuxième solution est : %f \n", s2);
        }
        else if (l < 0)
        {
            printf("Les solutions sont complexes.\n");
            printf("La première partie réelle est : %f\n", -b / (2.0 * a));
            printf("La première partie imaginaire est : %f\n", sqrt(-l) / (2 * a));
            printf("La deuxième partie réelle est : %f\n", -b / (2.0 * a));
            printf("La deuxième partie imaginaire est : %f\n", -sqrt(-l) / (2 * a));
        }
        else
        {
            s1 = -b / (2 * a);
            printf("Il y a une solution unique : %f \n", s1);
        }
    }
    else
    {
        if (b != 0)
        {
            s1 = -((float)c) / b;
            printf("La solution est %f \n", s1);
        }
        else
        {
            printf("Pas de solution ou une infinité de solutions (équation constante).\n");
        }
    }

    return 0;
}
