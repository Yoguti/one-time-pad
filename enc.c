#include <stdio.h>
#include <stdlib.h>


void encrypt(FILE* file_user, FILE* file_encrypted, FILE* file_key) {
    int c;
    while ((c=fgetc(file_user) != EOF)) {
        int key = rand();
        int encrypted_c = c ^ key;

        fputc(key, file_key);
        fputc(encrypted_c, file_encrypted);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("error: provide a file to be encrypted");
    } else {
        char* file_user_name = argv[1];
        FILE* file_user = fopen(file_user_name, "r");
        FILE* file_encrypted = fopen("encrypted.out", "w");
        FILE* file_key = fopen("key.out", "w");
        
        encrypt(file_user, file_encrypted, file_key);

        fclose(file_user);
        fclose(file_encrypted);
        fclose(file_key);
    }
}
