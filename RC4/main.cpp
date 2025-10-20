#include <iostream>
#include <string>
#include <iomanip>
#include "encoder.h"
#include "decoder.h"
using namespace std;

int main() {
    string plaintext = "Hanoi University of Science and Technology";
    cout << "Plaintext: " << plaintext << "\n";

    string ciphertext = encoder(plaintext);

    cout << "Ciphertext (hex): ";
    cout << hex << setfill('0');
    for (unsigned char c : ciphertext) {
        cout << setw(2) << static_cast<int>(c);
    }
    cout << dec << setfill(' ') << "\n";

    string decrypted = decoder(ciphertext);
    cout << "Decrypted: " << decrypted << "\n";

    return 0;
}
