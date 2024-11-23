#include <stdio.h>
#include <stdlib.h>


void decrypt(FILE* file_encrypted_user, FILE* file_key, FILE* decrypted_file) {
    int enc_c;
    while ((enc_c=fgetc(file_encrypted_user) != EOF)) {
        int key = fgetc(file_key);
        int decrypted_c = enc_c ^ key;

        fputc(decrypted_c, decrypted_file);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("error: provide a file to be encrypted (first input is the encrypted file, second one is the key file)");
    } else {

        FILE* file_encrypted_user = fopen(argv[1], "r");
        FILE* file_key = fopen(argv[2], "r");
        FILE* decrypted_file = fopen("decrypted.out", "w");

        
        decrypt(file_encrypted_user, file_key, decrypted_file);

        fclose(file_encrypted_user);
        fclose(file_key);
        fclose(decrypted_file);
    }
}
