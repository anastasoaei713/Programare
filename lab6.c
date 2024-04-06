#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include "vectorint.h"



int main(void)
{ 
    //p1
    /*int n;
    printf("numarul de perechi este:\n");
    scanf("%d", &n);
    int a[n], b[n];
    citire_vector(n, a, b);
    int *s= malloc(n*sizeof(int));
    s= calcul(a, b, n);
    afis_vector(s, n);
    */


   //p2
   /*int n;
   printf("numar de elemente:");
   scanf("%d", &n);
    vector a;
    citire(a, n);
    double ma, mg;
    int max,min;
    ma= m_a(a,n);
    mg= m_g(a, n);
    max= maxim(a, n);
    min= minim(a, n);
    printf("media aritmetica:%lf \n media geometrica:%lf \n maxim:%d \n minim:%d\n", ma, mg, max, min);
    */


   //p3
   /*int n, c;
   printf("numar de elemente:");
   scanf("%d", &n);
   int v[100]={0}, b[100];
   citire(v, n);
   c=distinct(v, b, n);
    printf("%d", c);
    */

   //P4

   /*int n;
   printf("numar de elemente:");
   scanf("%d", &n);
   int v[100];
   citire(v, n);
   ordonareBule(v, n);
   afisare(v, n);
   */

  double a[10000];
  int n;
  printf("n=");
  scanf("%d", &n);
  afis_rez(a, n);



    return 0;
}







#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include "vectorint.h"
#include<limits.h>


void afisare(int a[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d  ", a[i]);
}
void citire(int a[], int n)
{
    for(int i=0; i<n;i++)
        scanf("%d", &a[i]);
}
void citire_vector(int n, int a[], int b[])
{
    printf("introduceti valorile vectorului:\n");
    printf("primul vector:\n");
    for( int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("al doilea vector este:\n");
    for( int i=0; i<n; i++)
        scanf("%d", &b[i]);

}


void afis_vector(int *a, int n)
{
    for(int i=0; i<n; i++)
        printf("%d\t", a[i]);
}

int* calcul(int a[], int b[], int n)
{   
    int *s=malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        s[i]= a[i]+b[i];
    return s;
}


double m_a(int a[], int n)
{
    int s=0;
    for(int i=0; i<n; i++)
        s=s+a[i];
    double ma;
    ma= (double)s/n;
    return ma;
}

double m_g(int a[], int n)
{
    double p=1.0;
    for(int i=0; i<n; i++)
        p=p*a[i];
    double mg= pow(p, (double)1/n);
    return mg;
}

int maxim(int a[], int n)
{
    int max=-1;
    for(int i=0; i<n; i++)
        if(a[i]>max) max=a[i];

    return max;
}

int minim(int a[], int n)
{
    int min= INT_MAX;
    for(int i=0; i<n; i++)
        if(a[i]<min) min=a[i];

    return min;
}

int distinct(int a[], int b[], int n)
{
    int index=0;
    for(int i=0; i<n; i++)
    {
        if(!gasit(b, n, a[i])) 
            {
                b[index]= a[i];
                index++;
            }
    }
    return index;
    
}


int gasit(int a[], int n, int el)
{

    bool rez=0;
    for(int i=0; i<n; i++)
        if(a[i]==el) rez =1;
    return rez;
}

void ordonareBule(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i) 
    {
        for (int i = 0; i < n - 1; ++i) 
        {
            if (a[i] > a[i + 1]) 
            {   int aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }
}


void citire_real(double a[], int n)
{
    for(int i=0; i<n; i++)
        scanf("%lf", &a[i]);

}



double medie(double v[], int n)
{
    double med, sum=0.0;
    for(int i=0; i<n; i++)
        sum=sum+v[i];
    med=(double)sum/n;
    return med;
}

double abatere(double v[], int n, double xm)
{
    double aux=0.0;
    for(int i=0; i<n; i++)
        aux= aux+(v[i]-xm)*(v[i]-xm);
    double aux2= (double)aux/(n*(n-1));
    double xp= pow(aux2, 1/2);
    return xp;
}

void sub_medie(double a[], int n, int med)
{
    for(int i=0; i<n; i++)
        if(a[i]<med) printf("%lf",a[i]);
}

void peste_medie(double a[], int n, double med, double b[])
 {   int index=0;
    for(int i=0; i<n; i++)
       { if(a[i]>med) 
            {b[index]=a[i]; index++;}
       }
}

void afis_real(double a[], int n)
{
    for(int i=0; i<n; i++)
        printf("%.2lf\n", a[i]);
}
void afis_rez(double a[], int n)
{
    double c[n];
    citire_real(a, n);
    double med= medie(a, n);
    double abat= abatere(a, n, med);
    sub_medie(a, n, med);
    peste_medie(a, n, med, c);
    afis_real(c, n);
    printf("abaterea este %.2lf", abat);

}






#ifndef _LAB6_H_
#define _LAB6_H_
typedef int vector[20];
void citire_vector(int n, int a[], int b[]);
void afis_vector(int a[], int n);
int* calcul(int a[], int b[], int n);
void citire(int a[], int n);
double m_a(int a[], int n);
double m_g(int a[], int n);
int maxim(int a[], int n);
int minim(int a[], int n);
int distinct(int a[], int b[], int n);
int gasit(int a[], int n, int el);
void ordonareBule(int a[], int n);
void afisare(int a[], int n);
void citire_real(double a[], int n);
double medie(double v[], int n);
double abatere(double v[], int n, double xm);
void sub_medie(double a[], int n, int med);
void peste_medie(double a[], int n, double med, double b[]);
void afis_real(double a[], int n);
void afis_rez(double a[], int n);

#endif