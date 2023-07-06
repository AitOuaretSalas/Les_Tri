#include <stdio.h>
#include <stdlib.h>

void permuter (  int tab[],int i,int y)
{
int v;
                       v=tab[i];
                       tab[i]=tab[y];
                       tab[y]=v;


}

void tri_bulle ( int tab[],int n)
{ int x; int i;
   if ( n>=1)
    {
        for( i=2; i <=n ; i++)
            {
                if ( tab[i-1]>tab[i])
                    {

                      permuter(tab,i-1,i);
                    }

            }

            tri_bulle(tab,n-1);
    }

}

int main()
{ int j,i,n; int  tab[100];
puts("entrer la taille de votre tableu : ");
do{
      scanf("%d",&n);

} while( n<1 || n>100);

for ( i=1;i<=n;i++)
    {
    printf(" tab [%d] = ",i);
    scanf(" %d",&tab[i]);

    }
    j=n;

    tri_bulle(tab,j);


    for ( i=1;i<=n;i++)
    {
    printf(" tab [%d] = %d ",i,tab[i]);


    }


    return 0;
}
