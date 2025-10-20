#include"initS.h"

// Khởi tạo S, T
void initS(vector<int>& S, vector<int>& T) {
    for (int i = 0; i < cfg.len; i++) {
        S[i] = i;
        T[i] = cfg.key[i % cfg.key.length()];
    }
}