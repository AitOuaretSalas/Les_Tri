#include <stdio.h>
#include <stdlib.h>


void tri_fusion(int tab[],int temp[], int debut, int fin){
if ( debut>=fin ){
        return;
        }
int milieu;
    milieu=(debut+fin)/2;
    tri_fusion(tab,temp,debut,milieu);
    tri_fusion(tab,temp,milieu+1,fin);
    fusioner(tab,temp,debut,milieu,fin);
}


void fusioner(int* tab[],int temp[],int debut,int milieu,int fin ){
int i,i1,i2;
i=1;
i1=debut;
i2=milieu+1 ;
while( i1<=milieu && i2<=fin){
    if (tab[i1]<tab[i2]){
    temp[i]=tab[i1];
    i1=i1+1;
    } else{
    temp[i]=tab[i2];
    i2=i2+1;
    }
    i=i+1;

}
while (i1<=milieu){
    temp[i]=tab[i1];
    i=i+1;i1=i1+1;

}
while (i2<=milieu){
    temp[i]=tab[i2];
    i=i+1;i2=i2+1;

}
for (i=0;i<fin;i++){
 tab[i]=temp[i];
}


}

int main()
{ int i; int tab[100]; int debut,fin,milieu; int temp[100];


    do {
    puts("entrer la taille de votre tableu");
    scanf("%d",&fin);
} while( fin<1 || fin>100 );

for(i=0;i<fin;i++){
    printf("tab[%d] = ",i);
    scanf("%d",&tab[i]);
}

tri_fusion(tab,temp,0,fin);

for (i=0;i<fin;i++){
    printf("tab[%d] = %d \n",i,tab[i]);
}

    return 0;
}
