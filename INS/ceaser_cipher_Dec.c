#include<stdio.h>

int main() {
    char message[200], ch;
    int i,n,key,new_key;

    printf("Enter Text message:-");
    gets(message);
    printf("Enter Key:-");
    scanf("%d",&key);

    if(key>=26) {
        n = key / 26;
        new_key = key - (n * 26);
    } else {
        new_key = key;
    }

    for(i=0; message[i] != '\0'; ++i) {
        ch = message[i];


        if(ch>= 'a' && ch <= 'z') {
            ch = ch - new_key;
            if(ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        } else if(ch>= 'A' && ch<='Z') {
            ch = ch - new_key;
            if(ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }

    }
    printf("Decrypted Text message: %s", message);
    return 0;
}
