#include <stdio.h>
#define TAM 10
int ordenamientoSelection(int lista[TAM]);
  int Menor(int lista[TAM],int i);
int main()
{
    
int lista[TAM] = {10,9,8,7,6,5,4,3,1,0};
int pos_men;
int i;
int temp;

for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
   
   ordenamientoSelection(lista);
   printf("\n");
   
   for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
}
int ordenamientoSelection(int lista[TAM]){
    
    
    
    for (int i=0; i<TAM - 1; i++){ 

        
    int pos_men = Menor(lista,  i); //Menor es una funcion que regresa el elemnto menor
    int temp = lista[i]; 
    lista[i] = lista [pos_men];
    lista[pos_men] = temp;

    }  
}
int Menor(int lista[TAM],int i){
    int aux = 100;
    int posaux;
      for (; i<TAM  ; i++){ 
          
          if(aux > lista[i]){
              
           aux = lista[i];
           posaux = i;
           
              
          }
          
    
        
     } 
    return posaux; 
}






