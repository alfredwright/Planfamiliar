#include <stdio.h>
#include <math.h>


main()
{
float a=0,b=0,c=0,s=0,r=0,p=0;
int n;
do
{


printf("introduce el primer lado ");
scanf("%f",&a);


printf("introduce el segundo  lado ");
scanf("%f",&b);


printf("introduce el tercer lado ");
scanf("%f",&c);

if(a<b+c && b<a+c && c<a+b)
{
s=(a+b+c)/2;
r=sqrt(s*(s-a)*(s-b)*(s-c));
p = (a+b+c);
printf("el area resultante es: %.1f\n",r);
printf("el perimetro resultante es: %.1f\n",p);
}
else
{
 printf("estas chavo intente de nuevo\n");
    }

printf("\nintroduzca el caracter EOF para finalizar el programa dos veces porfavor\n");
scanf("%d",&n);
system("cls");
}

    while ((n=getchar() ) !=EOF);
    getch ();
}
