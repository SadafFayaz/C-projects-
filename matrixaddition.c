#include <stdio.h>

int main() {
int rows ,col,i,j;
int mat1[rows][col];
int mat2[rows][col];

scanf("%d %d",&rows,&col);

for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
        scanf("%d",&mat1[i][j]);
        
    }
}
    for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
        printf("%d    ",mat1[i][j]);
        
    }
    printf("\n");
     
     
}
for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
        scanf("%d",&mat2[i][j]);
    }
   
   }
for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
        printf("%d    ",mat2[i][j]);
        
    }
    printf("\n");
     
     
}
int add[rows][col];
   
   for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
         add[i][j]=mat1[i][j]+mat2[i][j];
        
    }
    
     
     
}
   
   
   
   for(i=0;i<col;i++){
    for(j=0;j<rows;j++)
    
    {
        printf("%d    ",add[i][j]);
        
    }
    printf("\n");
     
     
}
   
   
   
   
    return 0;
}
