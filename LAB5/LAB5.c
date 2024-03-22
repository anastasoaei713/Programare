#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include"header.h"


int main(void)
{

    /*int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    schimb(a, b);
    printf("a=%d", a);
    printf("b=%d", b);

    */


   /*int a, b, c, mi, m;
   double arit,  geo;
   printf("a=");
   scanf("%d", &a);
   printf("b=");
   scanf("%d", &b);
   printf("c=");
   scanf("%d", &c);
   mi= minim(a, b, c);
   m=maxim(a, b, c);
   arit= ma(a, b, c);
   geo= mg(a, b, c);
   printf("minimul numerelor este %d\n maximul numerelor este %d\n media aritmetica este %lf\n media geometrica este %lf", mi, m, arit, geo);
*/

    /*int s= suma(), y;
    double rez;
    afisare(s);
    printf("y=");
    scanf("%d", &y);
    rez =rezultat(s, y);
    printf("rezultatul este=%lf", rez);
    */

   /*int x, y;
   printf("x=");
   scanf("%d", &x);
   printf("y=");
   scanf("%d", &y);
   loop(y);
   */

    /*int n, a, b;
    printf("n=");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("a=");
        scanf("%d", &a);
        printf("b=");
        scanf("%d", &b);
        int c=cmmdc(a, b);
        if(prim(c)) printf("numerele sunt= %d\b %d\n", a, b);
    
    }
    */
   /*int x, y;
   printf("x=");
   scanf("%d",&x );
   printf("y=");
   scanf("%d",&y );
    afisprietene(x, y);
    */

   /*int x, y, n;
   printf("x=");
   scanf("%d", &x);
    printf("y=");
   scanf("%d", &y);
   printf("ce doriti sa aflati din intrevalul: %d, %d?\n", x, y);
   scanf("%d", &n);
   afisnumere(x, y, n);
   */

    /*int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    tiptriunghi(a, b,c);
    */
   /*int x, b;
   printf("numarul este=");
   scanf("%d", &x);
   printf("baza de conversie este=");
   scanf("%d", &b);
    bazab(x, b);*/
    /*(int a;
   printf("a=");
   scanf("%d", &a);
   sumparprim(a);
*/

   /*nt x, y;
   printf("x=");
   scanf("%d", &x);
   printf("y=");
   scanf("%d", &y);
   for(int i=x; i<=y; ++i)
        if(sumcif(i)) printf("%d\t", i);
        */
    return 0;

}



#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include"header.h"
#include<limits.h>

void schimb(int a, int b)
{
    a=3;
    b=5;
}

double ma(int a , int b, int c)\
{
    double m=(a+b+c)/3;
    return m;

}


double mg(int a , int b, int c)
{
    int p=a*b*c;
    double m=pow(p, -3);
    return m;
}


int maxim(int a, int b, int c)
{
    if(a>b && a>c) return a;
    if(b>a && b>>c) return b;
    if(c>a && c>b) return c;
    return 0;
}

int minim(int a, int b, int c)
{
    if(a>b && a>b)
    {
        if(b>c) return c;
        else return b;
    }
    if(b>a && b>c)
    {
        if(a>c) return c;
        else return a;
    }
    if(c>a && c>b)
    {
        if(a>b) return b;
        else return a;
    }
    return 0;
}

int suma(void)
{
    int a, s=0;
    scanf("%d", &a);
    while(a!=0)
    {
        s=s+a;
        scanf("%d", &a);
    }
    return s;
}

void afisare(int a)
{
    printf("suma este= %d", a);
}

double rezultat(double s, double y)
{
    double rez;
    rez= s/y;
    return rez;

}

int functie(int x)
{
    if(x<=2) return x*x+3*x+5;
    if(x>2 && x<8) return 3*x;
    if(x>=8) return exp(x)+2;
    return 0;
}

double functieg(int x, int y)
{
    double z= 3*x*x+ sin(x)/ pow(y, -4);
    return z;

}


void loop(int y)
{
    int pas;
    printf("pasul este =");
    scanf("%d", &pas);
    for(int i=1; i<=10; i=i+pas)
        printf("valori= %d\t %lf\n", functie(i), functieg(i, y));
}


int cmmdc(int a, int b)
{
    int aux, m=INT_MIN;
    if(a>b) aux=a;
    else aux=b;
    for(int i=1; i<=aux/2; ++i)
        if(a%i==0 && b%i==0 && i>m) m=i;
    return m;
}


bool prim(int a)
{
    int x=1;
    for(int i=2; i<=a/2; i++)
        if(a%i==0) x=x+i;
    if(x==1) return 1;
    else return 0;
}

int sumdiv(int n)
{
    int s=0;
    for(int i=1; i<=n/2; ++i)
    if(n%i==0) s=s+i;
    return s;
}

bool prietene(int a, int b)
{
    if(sumdiv(a)==b && sumdiv(b)==a)
    return 1;
    else return 0;
}


void afisprietene(int x, int y)
{
    for(int i=x; i<y; ++i)
        for(int j=i+1; j<=y; j++)
            if(prietene(i, j)) printf("numerele %d si %d sunt prietene", i, j);
}

int tipnumar(int x)
{   
    if(sumdiv(x)>x) return 1;
    if(sumdiv(x)==x) return 0;
    if(sumdiv(x)<x) return -1;
    return 0;

}

void afisnumere(int x, int y, int n)
{
    if(n==1) 
    {
        for(int i=x; i<=y; ++i)
            if(tipnumar(i)==1) printf("%d\n",i);
    }
    if(n==2) 
    {
        for(int i=x; i<=y; ++i)
            if(tipnumar(i)==0) printf("%d\n",i);
    }
    if(n==3) 
    {
        for(int i=x; i<=y; ++i)
            if(tipnumar(i)==-1) printf("%d\n",i);
    }

}


bool triunghi(int a, int b, int c)
{
    double p=(a+b+c)/2;
    double arie= sqrt(p*(p-a)*(p-b)*(p-c));
    if(arie!=0) return true;
    else return false;
}

bool isoscel(int a, int b, int c)
{
    if(triunghi(a, b, c))
    {
        if(a==b || a==c || b==c) return true;
        else return false;
    }
    return 0;
}

bool echilateral(int a, int b, int c)
{
    if(triunghi(a, b, c) && a==b && a==c && b==c) return true;
    else return false;
}
bool dreptunghic(int a, int b, int c)
{
    if(triunghi(a, b, c))
        {if(a*a==b*b+c*c || b*b==a*a+ b*b || c*c== a*a+b*b) return true;
            else return false;
        }
    return 0;
}

void tiptriunghi(int a, int b, int c)
{
    if(triunghi(a, b, c))
    {
    if(echilateral(a, b, c)) printf("triunghiul este echilateral");
    else {
        if(isoscel(a, b,c)) printf("triunghiul este isoscel");
        else {if(dreptunghic(a, b, c)) printf("triunghiul este dreptunghic");
                    else printf("triunghi oarecare");
            }
    }
    }
    else printf("nu este triunghi");
}

void bazab(int x, int b)
{
    int nb=0, p=1, aux=x;
    while(x!=0) {nb=nb+(x%b)*p; p=p*10; x=x/b;}
    printf("numarul %d in baza %d este %d", aux, b, nb);
}

void sumparprim(int n)
{
    for(int i=1; i<=n; ++i)
        for(int j=1; i<=n; ++i)
            if(prim(i) && prim(j) && i+j==n && i!=j) printf("combinatia este %d, %d\n", i, j);
}

bool sumcif(int n)
{
    int aux=n, s=0;
    while(n)
    {
        int uc=n%10;
        s=s+pow(uc, 3);
        n/=10;
    }
    if(s==aux) return true;
    else return false;
}



#ifndef HEADER_H
#define HEADER_H

void schimb(int a, int b);
double ma(int a, int b, int c);
double mg(int a, int b, int c);
int maxim(int a, int b, int c);
int minim(int a, int b, int c);
int suma(void);
void afisare(int a);
double rezultat(double s, double y);
int functie(int x);
double functieg(int x, int y);
void loop(int y);
int cmmdc(int a, int b);
bool prim(int a);
int sumdiv(int n);
bool prietene(int a, int b);
void afisprietene(int x, int y);
void afisnumere(int x, int y, int n);
int tipnumar(int x);
bool triunghi(int a, int b, int c);
bool isoscel(int a, int b, int c);
bool echilateral(int a, int b, int c);
bool dreptunghic(int a, int b, int c);
void tiptriunghi(int a, int b, int c);
void bazab(int x, int b);
void sumparprim(int n);
bool sumcif(int n);

#endif