#include <stdio.h>

int main()
{
    char arr[1000];
    int answer=0, cnt=0, p=0, q=0;
    scanf("%s", arr);
    for(int i=0; arr[i]!='\0'; i++){
        if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z') || (arr[i]>='0' && arr[i]<='9'))
            answer=1;
        else if((arr[i]=='.' || arr[i]=='-' || arr[i]=='_' || arr[i]=='@') && (i!=0 && arr[i+1]!='\0'))
            answer=1;
        else {
            answer=-1;
            break;
        }
        if(arr[i]=='@'){
            cnt++;
            p=i;
        }
        if(cnt>1){
            answer=-1;
            break;
        }
        if(arr[i]=='.')
            q=i;    
    }
    if(q-p<2)
        answer=-1;
    if(answer==1)
        printf("Valid Email ID");
    else
        printf("Email is not valid");
}