#include <stdio.h>   
#include <string.h>    

int main(void) {
    char text[1000];      
    char newText[1000];   
    int hashedValue;      
    int i;              

    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Enter the value to hash (shift): ");
    scanf("%d", &hashedValue); 

    if(hashedValue == 26) {
        printf("%s", text);
    } else {

        for (i = 0; i < strlen(text); i++) {
            newText[i] = text[i] + hashedValue;
        }
    
        newText[i] = '\0';   
    
        printf("\nEncrypted text: %s\n", newText);
    }

    return 0;  
}
