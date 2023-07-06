#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tab[100]; int n;

void tri_bulles(){
int i,j,v;
i=n;
while( i>=1){
    for( j=2;j<=i;j++){

        if (tab[j]<tab[j-1]){
                v=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=v;


        }
    }
    i=i-1;
}
}

void tri_insertion(){
int i,j,v;
for(i=2;i<=n;i++){

    v=tab[i];
    j=i-1;
    while( j>=1 && v<tab[j]){

        tab[j+1]=tab[j];
        j=j-1;
    }
    tab[j+1]=v;
}

}
void tri_selection( ){
int i,indx,v,m=n;
while (m>1){
    indx=1;
    for(i=2;i<=m;i++){

        if( tab[i]>tab[indx]){
            indx=i;
        }
    }
    v=tab[indx];
    tab[indx]=tab[m];
    tab[m]=v;
    m=m-1;
}

}

int main()
{
      float temps;
    clock_t t1,t2;

    t1=clock();
    int i;
do {
    puts("entrer la taille de votre tableu");
    scanf("%d",&n);
} while( n<1 || n>100 );

for(i=1;i<=n;i++){
    printf("tab[%d] = ",i);
    scanf("%d",&tab[i]);
}
tri_bulles(tab,n);
for(i=1;i<=n;i++){
    printf("tab[%d] = %d ",i,tab[i]);
}

  t2=clock();
    temps=(float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps =%f secondes \n",temps);
    return 0;
}
