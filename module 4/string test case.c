#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("test case satisfy 8 length character, one upper,lower case,number and special character !\n");
    int len=0,upper=0,lower=0,number=0,sp_char=0;
    char str[100];
        printf("\n enter a string : ");
        scanf("%[^\n]s",str);
        for(int i=0;str[i] != '\0';i++){
                len++;
                if(str[i] >= '0' && str[i] <= '9')
                    number++;
                else if(str[i] >= 'a' && str[i] <= 'z')
                    lower++;
                else if(str[i] >= 'A' && str[i] <= 'Z')
                    upper++;
                else
                    sp_char++;
        }
        printf("\n len = %d",len);
        printf("\n upper = %d",upper);
        printf("\n lower = %d",lower);
        printf("\n number = %d",number);
        printf("\n sp_char = %d",sp_char);

        if(len == 8 && lower!=0 && upper!=0 && number!=0 && sp_char!=0)
        {
            printf("\ntest case satisfied");
        }
        else{
            printf("\ntest case not satisfied");
        }
    return 0;
}

