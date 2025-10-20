#pragma once
#include<string>
using namespace std;

struct Config {
    static const int len = 256;
    string key = "123456";
};
extern Config cfg;
