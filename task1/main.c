#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char username[20],password[20];
    int count=0;
    do{
        printf ("enter username: ");
        scanf("%s",username);
        printf("enter password: ");
        scanf("%s",password);
        if(strcmp(username,"admin") == 0 && strcmp(password,"123")){
            break;
        }
        printf("username or password incorrect\n");
        count++;
    }while(count <3);
    if(count >=3){
        printf("try in 3 minutes");
    }else{
        printf("username and password correct");
    }
}
