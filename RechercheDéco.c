#include <stdio.h>
#include <stdlib.h>


 int dico(int i, int n, int x, int tab[100]){
int m;
m=(i+n)/2;
if ( x=tab[m])
    return(m);
else if ((x<tab[m]) && (i<m))
    dico(i,m-1,x,tab);
else if ((x>tab[m]) && (n>m))
    dico(m+1,n,x,tab);
else
    return(0);
}

int main()
{ int i; int n; int x; int tab[100];
    int res;
do {
    puts("\n entrer la taille de votre tableu : ");
    scanf("%d",&n);
} while( n<2 || n>100 );
  printf("tab[1] = ");
    scanf("%d",&tab[1]);

for(i=2;i<=n;i++){
    printf("tab[%d] = ",i);
    scanf("%d",&tab[i]);
    if (tab[i]<=tab[i-1]){
        do{
            printf("\n entrer un valeur superieur a tab[%d]=%d \n",i-1,tab[i-1]);
              printf("tab[%d] = ",i);
    scanf("%d",&tab[i]);
        } while( tab[i]<=tab[i-1]);
    }

}
  puts("entrer le nombre que vous voullez rechercher");
  scanf("%d",&x);
  i=1;
res=dico(i,n,x,tab);
if (res=0)
    printf(" le nombre ne existe pas dans votre tableu");
else
    printf(" le nombre exist est sa position est %d ",res);

    return 0;
}
