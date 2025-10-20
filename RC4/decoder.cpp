#include"decoder.h"

string decoder(const string& ciphertext) {
    vector<int> S(Config::len);
    vector<int> T(Config::len);
    initS(S, T);
    KSA(S, T);
    string data = ciphertext;
    return RC4(S, data);
}