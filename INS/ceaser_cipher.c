#include<stdio.h>
int main() {
    char message[100], ch;
    int i, key, n, new_key;

    printf("Enter a Text Message:");
    gets(message);
    printf("Enter Key:-");
    scanf("%d",&key);
    if (key>=26) {
        n = key / 26;
        new_key = key - (n * 26);
        printf("\n New Key=%d", new_key);
    }

    for(i=0; message[i] != '\0'; ++i) {
        ch = message[i];

        if(ch>= 'a' && ch<='z') {
            ch = ch + new_key;

            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
                //printf("%d", ch);
            }
            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + new_key;

            if(ch > 'z') {
                ch = ch - 'Z' + 'A' -1;
            }
            message[i] = ch;
        }
    }
    printf("Encrypted Message: %s", message);
    return 0;
}
