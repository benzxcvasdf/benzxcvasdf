#include <stdio.h>
#include <string.h>

int function(int x, int y);

int main(void)
{
    int input;
    int number[2] = {0};
    int flag = 0;
    int output[10000] ={0};
    scanf("%d", &input);

    for (int i = 0; i < input; i++){
        for (int j = 0; j< 2; j++){
            scanf("%d", &number[j]); 
        }
        output[i]= function(number[0], number[1]);
        
    }

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input-1; j++){
            if (output[j] > output[j+1]){
                int move = output[j];
                output[j] = output[j+1];
                output[j+1] = move;
            }
        }
    }

    for ( int i = 0; i <input; i++){
        printf("%d", output[i]);
        if (i <input){
            printf(" ");
        }
    }

    
    return 0;
}

int function(int x, int y){
    if (y == 0){
        return x;
    }else{
        function(y, x%y);
    }
}
