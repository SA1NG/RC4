#include"RC4.h"

string RC4(vector<int>& S, string& data) {
    int i = 0, j = 0, k, t;
    string ciphertext;
    for (unsigned char c : data) {
        i = (i + 1) % cfg.len;
        j = (j + S[i]) % cfg.len;
        swap(S[i], S[j]);
        t = (S[i] + S[j]) % cfg.len;
        k = S[t];
        ciphertext += c ^ k;
    }
    return ciphertext;
}