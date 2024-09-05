/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int ID;
    int match_ID;
    int obj[101];
    int pm[101];
    
    scanf("%d", &num);
    
    for(int i=0; i<num; i++ ){
        scanf("%d", &obj[i]);
    }
    for(int i=0; i<num; i++ ){
        scanf("%d", &pm[i]);
    }
    scanf("%d", &ID);
    
    scanf("%d", &match_ID);
    if(ID == match_ID) {
        for(int i=0; i<num; i++ ){
            printf("%d ", obj[i]-pm[i]);
        }
    }

    return 0;
}