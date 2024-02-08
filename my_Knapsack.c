
#include <stdio.h>
#include <math.h>
#define W 20;
#define size 5;
int func()
{
    char items={'a','b','c','d','e'};
    float value[size];
    float weights[size];

    for(int i=0;i<size;i++)
    {
        scanf("%f", &weights[i]);
        scanf("%f", &value[i]);

    }


    int knapSack (int weights[], int values[], int selected_bool[])
  {
    int mat[size+1][21];
    for(int i=0,i<=size,i++){
         for(int j=0,j<=W,j++){
            if(i==0 || j==0){
               mat[i][j]=0  ;
            }
            else if(weights(i-1)<=j){
                mat[i][j]=Math.Max(value[i-1]+mat[i-1][j-weights[i-1]],mat[i-1][j]);
            }
            else{
                mat[i][j]=mat[i-1][j];
                
            }
    }
  }
    int j=size;
    int w2=W;
    while(j>0 && w2>0){
        if(mat[j][w2]!=mat[j-1][w2]){
           selected_bool[j-1]=1 ;
           w2=w2-weights[j-1];
        }
        j--;
    }

    printf("Maximun profit: %d", mat[size][W]);
     printf("Selected items:"); 
    for(int i=0,i<=size;i++){
    if(selected_bool[i]==1)
        printf(" %c",items[i]);
    }

       

  }

    
    return 0;
}
	
