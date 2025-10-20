#include"KSA.h"

void KSA(vector<int>& S, vector<int>& T) {
    int j = 0;
    for (int i = 0; i < cfg.len; i++) {
        j = (j + S[i] + T[i]) % cfg.len;
        swap(S[i], S[j]);
    }
}