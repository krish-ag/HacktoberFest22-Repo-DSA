#include <stdio.h>
#include <string.h>
int main(){
    char array[50];
    int len = 0;
    printf("Input: ");
    while (1)
    {
        char c;
        scanf("%c", &c); // reading input
        if (c == '\n')
        {
            break;
        }
        if (c != ',')
        {
            array[len++] = c;
        }
    }
    int i,j;
    char temp;
    for(i = 0; i < len; i++){
        for(j = i; j < len; j++){
            if ((array[i] > '9' && array[j] > '9'))
            {
                if(array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
            
            else if ((array[i] <= '9' && array[j] <= '9'))
            {
                if(array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
    int k;
    printf("The sorted array is : ");
    for(k = 0; k < len - 1; k++)
    {
        printf("%c, ", array[k]);
    }
    printf("%c", array[k]);
}
