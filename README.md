
# One-Time Pad (OTP) Encryption and Decryption

This repository provides a simple implementation of a one-time pad encryption and decryption system using C. The program takes a plaintext file, encrypts it with a randomly generated key, and allows decryption using the generated key file.


## Features

Entropy Sources:

- Encryption: Encrypt a plaintext file using the XOR operation with a randomly generated key.
- Decryption: Decrypt an encrypted file using the key file produced during encryption.
File Outputs:

    encrypted.out: Contains the encrypted data.
    key.out: Contains the randomly generated key.
    decrypted.out: Contains the decrypted plaintext.

## Prerequisites

To compile and run the code, you need:

   - A C compiler (e.g., gcc).
   - A terminal or shell to run the compiled programs.

## Compilation

Use the following commands to compile the encryption and decryption programs:
Encryption:

```gcc -o encrypt encrypt.c```

Decryption:

```gcc -o decrypt decrypt.c```



## Usage
### 1. Encrypting a File

Run the encryption program with the plaintext file as an argument:

./encrypt <plaintext_file>

    Input: A plaintext file (e.g., message.txt).
    Outputs:
        encrypted.out: Encrypted file.
        key.out: Key file used for encryption.

Example:

```./encrypt message.txt```

### 2. Decrypting a File

Run the decryption program with the encrypted file and key file as arguments:

```./decrypt <encrypted_file> <key_file>```

    Input:
        Encrypted file (encrypted.out).
        Key file (key.out).
    Output:
        decrypted.out: Decrypted plaintext.

Example:

```./decrypt encrypted.out key.out```

### Notes

    One-Time Pad Principle:
        The key is randomly generated for each encryption and is as long as the plaintext.
        Both the encrypted file and key file are essential for successful decryption.

    Output Files:
        Each run will overwrite encrypted.out, key.out, and decrypted.out.

    Error Handling:
        The program will notify you if the correct number of arguments is not provided.
