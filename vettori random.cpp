#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define dim 100     
int n,vet[dim],i,j; 
void cvettore();    
int ricercavet();   
int inserimento();  
float randomvett();     
void ordinavet();    
main(){ 
int scelta; 
cvettore();
do{ 
system("cls"); 
for(i=0;i<n;i++){
printf("%d ",vet[i]);
}//end for
printf("\n\nDigita \n\n1 dammi 3 numeri random  ");
scanf("%d",&scelta); 
switch(scelta){
    case 1: 
    ricercavet(); 
    break; 
    case 2: 
    break;
    case 3: 
    inserimento(); 
    break;
    case 4: 
    ordinavet();
    break; 
}//end switch 
system("pause"); 
}while(scelta!=9); 
}//end main
void cvettore(){ 
    system("cls");
printf("\n\t\t\t\t\t\t\t\tElementi random in un vettore di interi\n\n"); 
srand(time(NULL)); 
printf("\nInserisci il numero di vettori da inserire nel range n<=dim: "); 
scanf("%d",&n);
printf("\nNumeri random trovati: ",n,i); 
    for(i=0;i<n;i++){
        vet[i]=rand()%100+1;
        printf("%d ",vet[i]);
    }//end for
}//end caricavettore
int ricercavet(){
	    int numero,trovato=0; 
printf("\nDammi il numero che vuoi cercare: "); 
scanf("%d",&numero);  
    for(i=0;i<n;i++){
  if(vet[i]==numero){
    printf("\nIl Numero %d trovato in posizione: %d\n",numero,i+1); 
    trovato=1; 
    }//end if 
}//endfor
if(trovato==0){
printf("\n\nNon e' stato trovato nessun numero!\n"); 
}//end if 
}//end ricercavet 
float randomvet(){
	    float random;
	    int somma=0; 
	    for(i=0;i<n;i++){
	    somma=somma+vet[i]; 
		}//end for 
random=(float)somma/n; 	
}//end randomvet
int inserimento(){ 
        srand(time(NULL));
        vet[n]=rand()%100+1;
        n++; 
        for(i=0;i<n;i++){
	    printf("%d ",vet[i]); 
}//end for
printf("\n\nil numero e' stato aggiunto: %d",n); 
}//end inserimento
void ordinavet(){
	int aux;
  for(i=0;i<n-1;i++){
  	for(j=i+1;j<n;j++){
  	 if(vet[i]>vet[j]){
  	   aux=vet[i]; 
  	   vet[i]=vet[j];
  	   vet[j]=aux; 
	 }//end if
	}//end for interno j 
  }//end for ensterno i
printf("\nVettore Ordinato\n\n");
for(i=0;i<n;i++){
printf("%d ",vet[i]); 
}
system("pause"); 
}//end ordinavet

