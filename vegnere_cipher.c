#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void vegnere_cipher(void);

int main(){
    vegnere_cipher();
    return 0;
}

void vegnere_cipher(void){
    int i,j;
    char plain_text[MAX_LEN] = {0};
    char key[MAX_LEN] = {0};
    char encrypted_text[MAX_LEN] = {0};

    printf("Enter the message: ");
    scanf("%s",plain_text);
    printf("Enter the key: ");
    scanf("%s",key);

    int size_of_plain_text = strlen(plain_text);
    int size_of_key = strlen(key);

    for(i=0;i<size_of_plain_text;i++){  
        int temp_num= (plain_text[i] + key[i % size_of_key]) % 127;
        char encryted_char = (char) temp_num;
        encrypted_text[i] = encryted_char;
    }

    printf("%s",encrypted_text);
}