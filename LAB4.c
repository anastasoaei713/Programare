#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

int suma(int n);
int prod();
double prod2();
void f_c();
void c_f(double pas);
int cmmdc(int a, int b);
void distanta(int b);
int pp(int a);
int sumdiv(int a);
void prietene(int a, int b);


int main(void)
{
    /*int n, s;
    printf("n=");
    scanf("%d", &n);
    s= suma(n);
    printf("suma numerelor este= %d\n", s);
    */

    /*int p;
    p= prod();
    printf("produsul e=%d", p);
    */
    
    /*double p;
    p=prod2();
    printf("produsul este= %.2lf", p);
    */

    //f_c();
    
    /*double pas;
    printf("introduceti pasul=");
    scanf("%lf", &pas);
    c_f(pas);
    */

   /*int a, b;
   printf("a=");;
   scanf("%d", &a);
   printf("b=");
   scanf("%d", &b);
   int c=cmmdc(a, b);
   printf("cmmdc al numerelor %d , %d este =%d", a, b, c);
   */

    /*int b;
    printf("numarul la care ne raportam este =");
    scanf("%d", &b);
    distanta(b);
    */

    /*int x;
    scanf("%d", &x);
    while(x!=0)
    {
        int p=pp(x);
        printf("\t%d\n", p);
        scanf("%d", &x);
    }
    */
   int a,b;
   printf("intervalul [a, b] este=");
   scanf("%d %d", &a,&b );
   prietene(a, b);

    return 0;

}


int suma(int n)
{
    int a, s=0;
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &a);
        s=s+a;
    }
    return s;
}

int prod()
{
    int a, p=1;
    scanf("%d", &a);
    while(a!=0)
    {
        p=p*a;
        scanf("%d", &a);
    }
    return p;
}

double prod2()
{
    double a, p=1.0;
    scanf("%lf", &a);
    while(a!=0)
    {
        p=p*a;
        scanf("%lf", &a);
    }
    return p;
}

void f_c()
{
    for( int i=0; i<=300; i=i+10)
    {
        double c=(5./9.)*(i-32.);
        printf("%d\t%lf\n",i, c);
    }
}


void c_f(double pas)
{
    for(int i=0; i<=400; i=i+pas)
    {
        double f=9*i/5+32;
        printf("%d\t%lf\n", i, f);
    }
}

int cmmdc(int a, int b)
{
    
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

void distanta(int b)
{
    int a, index=0, min=__INT_MAX__, poz, nr;
    scanf("%d", &a);
    while(a>=0)
    {   ++index;
        if(abs(b-a)<=min){min=abs(b-a); poz= index; nr=a;}
        scanf("%d", &a);
    }
    printf("cel mai apropiat numar de %d este %d si se afla pe pozitia %d", b, nr, poz);
}

int pp(int a)
{
    int max=INT_MIN;
    for(int i=1; i*i<=a; i++)
        if(max<=i*i && i*i<=a) max=i*i;
    return max;
}

int sumdiv(int n)
{   int s=0;
    for(int i=2; i<=n/2; i++)
        if(n%i==0) s=s+i;
    return s;
}

void prietene(int a, int b)
{
    for(int i=a; i<b; i++)
        for(int j=i+1; j<=b; j++)
    if(sumdiv(i)==j && sumdiv(j)==i)
    printf("%d\t%d", i, j);

}
