#include <stdio.h>
#include <stdbool.h>

int main()
{
    char arr[1000];
    scanf("%s", &arr);
    bool check=false;
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]=='.' && check){
            check=false;
            break;
        }
        if(arr[i]=='.')
            if(arr[i+1]!='\0')
                check=true;
    }
    if(check)
        printf("valid");
    else
        printf("invalid");
    return 0;
}