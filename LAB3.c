#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

/*
bool triunghi(int a, int b, int c)
    {
        if(a+b>c || a+c>b || b+c>a)
        return 1;
        else return 0;
    }
bool isoscel(int a, int b, int c)
    {
        if(a==b || b==c || a==c)
        return 1;
        else return 0;
    }
bool dreptunghic(int a, int b, int c)
{
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        return 1;
        else return 0;
    }
bool echilateral(int a, int b, int c)
    {
        if(a==b && b==c)
        return 1;
        else return 0;
    }
    */

int main(void)
{

            //p1

    //int a, b, c, max=0;
   // printf("a=");
    //scanf("%d", &a);
    //printf("b=");
    //scanf("%d", &b);
    //printf("c=");
    //scanf("%d", &c);
      //  if(a>=b) max=a;
      //      else max=b;
       // if(c>=max) max=c;

    //printf("cel mai mare este %d", max);


              //p2

    //int x, f;
   // printf("x=");
    //scanf("%d", &x);
    //if(x<=2)
    //    f=x*x+3*x+5;
    //else if(x>=8)
    //    f=exp(x)+2;
    //        else f=3*x;
   // printf("valoarea functiei este%d", f);


                //p3
    /*int x, f=0;
    int a, b;
    printf("a=");
    scanf("%d", &a);
     printf("b=");
    scanf("%d", &b);
     printf("pentru suma apasati 1\npentru diferenta apasati2\npentru inmultire apasati 3\npentru impartire apasati 4\ncomanda este=");
    scanf("%d", &x);
    if(x>=1 && x<=4)
    {
    switch (x)
    {
    case 1:
        f=a+b;
        break;
    case 2:
        f=a-b;
        break;
    case 3:
        f=a*b;
        break;
    case 4:
        f=a/b;
        break;
    }
    printf("in urma alegerii aveti rezultatul %d", f);
    }
    else printf("nu ati ales o optiune valabila");
    */


            //p4

     /*
    int a, b, c;
    printf("introduceti coeficientii:\n");
    printf("a=");
    scanf("%d", &a);
    while(a==0)
    {
        printf("da alta valoare lui a=\n");
        scanf("%d", &a);
    }
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if(b*b-4*a*c>=0)
    {  
        float f;
        if(b*b-4*a*c==0) { f=-b/2*a ; printf("radacina este %f", f);}
        else 
        {
            float f1,f2;
            f1=-b+sqrt(b*b-4*a*c)/2*a;
            f2= -b-sqrt(b*b-4*a*c);
            printf("prima radacina este %f", f1);
            printf("a doua radacina este %f",f2 );
        }
    }
    else printf("radacinile ecuatiei sunt numere complexe");
*/

            //5
    
    /*
    int x=0, y=0;
    printf("coordonatele sunt x,y");
    scanf("%d%d", &x, &y);
    if(x>0) 
    {
        if(y>0) printf("cadranul 1");
        else if(y<0) printf("cadranul 2");
        else printf("cadranul 1-4");
    }   
    else if(x==0) 
    {
        if(y>0) printf("cadranul 1-2");
        else printf("cadranul 3-4");
    }
    else if(x<0)
    {
        if(y>0) printf("cadranul 2");
        else if(y<0) printf("cadranul 3");
        else printf("cadranul 2-3");
    }
    */

            //6
    
    /*
    int hc, mc, sc, hd, md, sd, h=0, m=0, s=0;
    printf("hc=");
    scanf("%d", &hc);
    printf("mc=");
    scanf("%d", &mc);
    printf("sc=");
    scanf("%d", &sc);
    printf("hd=");
    scanf("%d", &hd);
    printf("md=");
    scanf("%d", &md);
    printf("sd=");
    scanf("%d", &sd);
    
    if(sc>sd)
        s=60+sd-sc, m=m-1;
    else s=sd-sc;

    if(mc<md)
        m=md-mc;
    else m=69+md-mc, h=h-1;

    if(hc<hd)
    h=hd-hc;
    else h=23-hc+hd;

    printf("timp conectare %d\t%d\t%d", h, m, s);

    */


            //7

/*
    int hc, mc, sc, hd=0, md=0, sd=0, h, m, s;
    printf("hc=");
    scanf("%d", &hc);
    printf("mc=");
    scanf("%d", &mc);
    printf("sc=");
    scanf("%d", &sc);
    printf("h=");
    scanf("%d", &h);
    printf("m=");
    scanf("%d", &m);
    printf("s=");
    scanf("%d", &s);
    
    if(sc+s>60)
        sd=sc+s-60, md=md+1;
    else sd=sc+s;

    if(mc+m>60)
        md=mc+m-60, hd=hd+1;
    else md=mc+m;

    if(hc+h>24) 
        md=hc+h-24;
    else hd=hc+h;

    printf("moment deconectare %d\t%d\t%d", hd, md, sd);


            //8

    */

   /*
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);

    if(triunghi(a,b,c))
    {
        if(echilateral(a,b,c)) printf("triunghiul este echilateral");
        else if(dreptunghic(a,b,c)) printf("triunghiul este dreptunghic");
                else if(isoscel(a,b,c)) printf("triunghiul este isoscel");
                        else printf("triunghiul este oarecare");
    }
    else printf("nu este triunghi");

    */


                //9
    


    int a, b, v[];
    scanf("%d", &a);
    while(a!=0)
    {
        scanf("%d", b);
        if(a<=b)
    }
     return 0;
}