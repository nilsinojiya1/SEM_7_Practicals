/*
@@
@@ @Nil Sinojiya
@@
*/
#include<stdio.h>
int main() {
    char message[200], c[26], cipher[200];
    int i, j, index;

    printf("Enter message:");
    gets(message);

    printf("Enter Key a To z:");
    for(i=0;i<26;i++) {
        printf("%c = ",i+97);
        c[i] = getch();
        printf("%c , ",c[i]);
    }

    for(i=0; i<strlen(message); i++) {
        index = message[i] - 97;
        cipher[i] = c[index];
    }
    printf("\n cipher message: %s", cipher);

    return 0;
}
/*
@@
@@ @Nil Sinojiya
@@
*/