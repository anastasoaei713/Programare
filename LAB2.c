#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double medie(int a, int b);
int f1(int a, int b);
int main(void)
{
    //problema 1
    /*int a,b;
    float sum;
    float ma;
         printf("a este \n");
        scanf("%d", &a);
        printf("b este \n");
        scanf("%d", &b);
    sum = a+b;
    ma=sum/2;
        printf("a=%d\t si b=%d\n", a, b);
        printf("suma este %f\n", sum);
        printf("media aritmetica este %f\n", ma);

      */ 
     //problema 2
     /*double c, d, prod, mg;
     printf("c este \n");
     scanf("%lf", &c);
     printf("d este \n");
     scanf("%lf", &d);
        prod=c*d;
        mg=pow(prod, (1.0/2));
     printf("produsul este %.2lf\n", prod);
     printf("mg este %.2lf",mg );
*/
    //problema 3
   /* int a, b, c, p, aux, arie;
    printf("a este\n");
    scanf("%d", &a);
    printf("b este\n");
    scanf("%d", &b);
    printf("c este\n");
    scanf("%d", &c);
        p = (a+b+c)/2;
        aux= p*(p-a)*(p-b)*(p-c);
        arie = sqrt(aux);
    printf("aria este %d", arie);
    */
   int a, b, suma;
   //double ma;
   printf("a=");
   scanf("%d", &a);
   printf("b=");
   scanf("%d", &b);
   //ma = medie(a, b);
   //printf("media aritmetica este %.2lf\n", ma);
   //printf("ati introdus numerele %d si %d \n", a, b);
   //suma = f1(a, b);
   //printf("suma numerelor %d si %d este %d \n", a, b, suma);

    printf("ati introdus numerele %d si %d \n", a, b);
    {
        int a=4;
        suma = f1(a, b);
        printf("in bloc\n");
        printf("suma nr %d si %d este %d \n\n", a, b, suma);

    }
    printf("in afara blocului\n");
    suma=f1(a,b);
    printf("suma numerelor %d si %d este %d\n\n", a ,b, suma);
    
    return 0;
}

double medie(int x, int y)
{
    double med;
    med=(x+y)/2.0;
    return med;
}
int f1(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
