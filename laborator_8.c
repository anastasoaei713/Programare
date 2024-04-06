#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
#include "header.h"

int main(void)
{
   // 1.1
   /* int *m=0;
    double *fx=0;
    char * cht=0;
    printf("introduceti un char:");
    scanf("%p", &cht);
    printf("introduceti un int:");
    scanf("%p", &m);
    printf("introduceti un real:");
    scanf("%p", &fx);
    

    printf("adresa lui m este %p\n", m);
    printf("adresa lui fx este %p\n", fx);
    printf("adresa lui cht este %p\n", cht);
    */

   //1.2
    /*int n;
    int m;
    printf("introduceti un int:");
    scanf("%d", &m);
    printf("introduceti un int:");
    scanf("%d", &n);
    int *a= &n;
    int *b= &m;
    int c= *a+*b;
    printf("%d", c);
    */

   /*int a, b;
   printf("introduceti un nr:");
   scanf("%d", &a);
   printf("introduceti un nr:");
   scanf("%d", &b);
   int c;
   int *m,*n;
   m=&a;
   n=&b;
   if(*m>*n) c=*m;
   else c=*n;
   printf("%d",c);
*/

    /*int n;
    printf("n=");
    scanf("%d",&n );
    int *x=0, *y=0;
    x=malloc(sizeof(int)*n);
    if(x==0)
    {
        fprintf(stderr, "err");
        exit(EXIT_FAILURE);
    }
    y=malloc(sizeof(int)*n);
    if(y==0)
    {
        fprintf(stderr, "err");
        exit(EXIT_FAILURE);
    }
    pcitireVector(x, n);
    pcitireVector(y, n);
    int *s=0;
    s=sumaVectoriInt(x, y, n);*/

    //int p= produsScalarVectoriInt(x, y, n);
    //printf("%d", p);
    /*int *x=0, n;
    printf("n=");
    scanf("%d",&n );
    x=malloc(sizeof(int)*n);
    if(x==0)
    {
        fprintf(stderr, "err");
        exit(EXIT_FAILURE);
    }
    pcitireVector(x, n);
    double p=mediaGeometrica(x, n);
    printf("%.2lf", p);
    */
   /*int *v=0,*w=0, n;
   printf("n=");
    scanf("%d",&n );
   v= malloc(sizeof(int)*n);
    pcitireVector(v, n);
    w=suma(v, n);
    pafisareVector(w, n);
    int max= maxim(v, n);
    printf("maxim=%d", max);
*/



    return 0;
}



#ifndef _LAB7_H_
#define _LAB7_H_



void pcitireVector(int *a, int n);
void pafisareVector(int *b, int n);
int *sumaVectoriInt(int *x, int *y, int n);
int produsScalarVectoriInt(int *x, int *y, int n);
double mediaGeometrica(int *x, int n);
int *suma(int *v, int n);
int maxim(int *a, int n);
void norma(int *v, int n);
#endif



#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
#include "header.h"


void pcitireVector(int *a, int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", (a+i));
}

void pafisareVector(int *a, int n)
{
    printf("A=(%d,", *(a));
    for(int i=1; i<n-1; i++)
        printf("%d,", *(a+i));
    printf("%d)", *(a+n-1));
}

int *sumaVectoriInt(int *x, int *y, int n)
{
    int *v=malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
        *(v+i)=*(x+i)+*(y+i);
    return v;

}

int produsScalarVectoriInt(int *x, int *y, int n)
{ int prodsc=0;
    for(int i=0; i<n; i++)
        prodsc= prodsc+*(x+i)**(y+i);
    return prodsc;

}

double mediaGeometrica(int *x, int n)
{
    double p=1.0;
    double q= (double)n;
    for(int i=0; i<n; i++)
        p=p**(x+i);
    double m= pow(p, 1/q);
    return m;
}

int suma_cifre(int n)
{
    int s=0;
    while(n)
    {
        s=s+(n%10);
        n/=10;
    }
    return s;
}

int *suma(int *v, int n)
{
    int *w= malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
        *(w+i)= suma_cifre(*(v+i));
    return w;
}

int maxim(int *a, int n)
{
    int max= INT_MIN;
    for(int i=0; i<n; i++)
        if(max<*(a+i)) max=*(a+i);
    return max;
}


void norma(int *v, int n)
{
    int ni= INT_MIN, n1=0, n2, n;
    for(int i=0; i<n; i++)
        {
            n=n+*(v+i)**(v+i);
            n1=n1+abs(*(v+i));
            if(ni<abs(*(v+i))) ni=  abs(*(v+i));
        }
    n2= pow(n, 1/2);
    printf("%d\n%d\n%.2lf");
}