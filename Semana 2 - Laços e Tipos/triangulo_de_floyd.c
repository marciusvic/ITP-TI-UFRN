#include <stdio.h>  

int main(){  
    int n, k = 1;   
   
    scanf( "%d", &n);  
    
    if(n <=0){
        printf("Você entrou com %d, tente de novo na próxima", n);
    }
    else{ 
        for (int i = 1; i <= n; i++){  
            for (int j = 1; j <= i; j++){
                printf("%2d ", k++);
            }    
            printf( "\n");  
        }
    }
    return 0;
} 