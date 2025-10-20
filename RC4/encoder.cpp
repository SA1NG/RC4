#include"encoder.h"

string encoder(const string& plaintext) {
    vector<int> S(Config::len);
    vector<int> T(Config::len);
    initS(S, T);
    KSA(S, T);
    string data = plaintext;
    return RC4(S, data);
}