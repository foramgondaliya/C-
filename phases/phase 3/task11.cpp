#include <iostream>

using namespace std;

// Function to encrypt a message using Caesar Cipher
void encryptMessage(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; ++i) {
        // Encrypt only alphabets, leave non-alphabetic characters unchanged
        if ((message[i] >= 'A' && message[i] <= 'Z') || (message[i] >= 'a' && message[i] <= 'z')) {
            char base = (message[i] >= 'A' && message[i] <= 'Z') ? 'A' : 'a';
            message[i] = static_cast<char>((message[i] - base + shift) % 26 + base);
        }
    }
}

// Function to decrypt an encrypted message using Caesar Cipher
void decryptMessage(char encryptedMessage[], int shift) {
    // Decrypting is just encrypting with the opposite shift
    encryptMessage(encryptedMessage, 26 - shift);
}

int main() {
    // Get the message from the user
    cout << "Enter the message to be encrypted: ";
    char message[100];  // Assume a maximum message length of 99 characters
    cin >> message;

    // Get the ASCII value as the shift
    cout << "Enter the ASCII value for encryption: ";
    int asciiValue;
    cin >> asciiValue;

    // Calculate the shift value based on the ASCII value
    int shift = asciiValue % 26;

    // Encrypt the message
    encryptMessage(message, shift);

    // Display the encrypted message
    cout << "Encrypted Message: " << message << endl;

    // Decrypt the message
    decryptMessage(message, shift);

    // Display the decrypted message
    cout << "Decrypted Message: " << message << endl;

    return 0;
}

