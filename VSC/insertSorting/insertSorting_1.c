#include <stdio.h>

int main(){

    int a[] = {60, 10, 5, 40, 7};
    int key = 0;

    for (int i = 2; i < 20; i++)
    {
        key = a[i-2];
        for (int j = 0; j < i-1; j++)
        {
            if( key < a[j] )
            {
                a[j+1] = a[j];
                
            }

        }
        
        
    }
    

    return 0;
}