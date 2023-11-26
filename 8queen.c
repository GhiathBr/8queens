#include<stdio.h>
void main(){
int matrix [8][8]={0};
int i;
int j;
for (i=0;i<8;i++){
    for(j=0;j<8;j++){
        printf("%d",matrix[i][j]);
        printf("\t");
    }
    printf("\n");
}

int ligne,colone;
int trys=0;
 do {
    printf("donner le nombre de ligne:");
    scanf("%d",&ligne);
    printf("donner le nombre de colone:");
    scanf("%d",&colone);
    
     for (i=0;i<8;i++){
         if(matrix[ligne][colone]==8){
            printf("invalide\n");
            break;
        }
        
        matrix[ligne][colone]=1;
        if(matrix[ligne][i]!=1 &&    matrix[i][colone]!=1) {
          
        matrix[ligne][i]=8;
        matrix[i][colone]=8;
        }
        
            int i=ligne;
    int j=colone;
    while(i>=0 && j<8){
        if(i!=ligne && j!=colone){
            matrix[i][j]=8;
        }
        j+=1;
        i-=1;
    }
    i=ligne;
    j=colone;
    while(i<8 && j>=0){
        if(i!=ligne && j!=colone){
            matrix[i][j]=8;
        }
        j-=1;
        i+=1;
    }
    i=ligne;
    j=colone;
    while(i>=0 && j>=0){
        if(i!=ligne && j!=colone){
            matrix[i][j]=8;
        }
        j-=1;
        i-=1;
    }
    i=ligne;
    j=colone;
    while(i<8 && j<8){
        if(i!=ligne && j!=colone){
            matrix[i][j]=8;
        }
        j+=1;
        i+=1;
    }

    }
   trys++; 











    for (int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        printf("%d",matrix[i][j]);
        printf("\t");
    }
    printf("\n");
}
}while(trys<8);


}
