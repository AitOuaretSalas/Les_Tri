#include <stdio.h>
#include <stdlib.h>

void permuter (int x , int y)
{
int v;
v=x;
x=y;
y=v;

}

void permuter2 ( int  tab[],int x , int y)
{
int v;
v=tab[x];
tab[x]=tab[y];
tab[y]=v;

}

 partitioner (int tab[], int debut, int fin,int index )
{

    int i ,pivot,cpt;
    cpt= debut; pivot=tab[debut];
    for ( i=debut+1;i<=fin;i++)
        {
            if (tab[i]<pivot)
                {
                cpt=cpt+1;

               permuter(tab[i],tab[cpt]);

                }
        }
    permuter2(tab,cpt,debut);
    index=debut;
}

void tri_rapide (int tab[],int debut,int fin, int index)
{
if ( debut<fin)
    {
    partitioner(tab,debut,fin,index);
    tri_rapide(tab,debut,index-1,index);
    tri_rapide(tab,index+1,fin,index);


    }

}


int main()
{

int tab [100]; int  index; int i , n ;

puts(" entrer la taille de votre tableu : ");

 do
    {
    scanf("%d",&n);
    } while (n<=2 && n>100);
for (i=0;i<n;i++)
    {
    printf(" tab[%d] = ",i);
    scanf("%d",&tab[i]);

    }
    index=1;

    tri_rapide(tab,0,n,1);


for (i=0;i<n;i++)
    {

    printf("tab[%d] = %d ",i,tab[i]);
    }


}
