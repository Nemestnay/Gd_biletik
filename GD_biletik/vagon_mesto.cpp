//
// Created by alena on 27.10.22.
//
#include <iostream>
#include <cstring>
using namespace std;

char vagon[15] [10] = {
        "1Р","1В","1С","1Е","2С","2В","2Е","2Р","2Э","3Э",
        "СВ", "1Б","1Л","1А","1И"
};


void vag_mes(int x, char zap[][100]) {
    srand(x);
    int y = abs(rand() % 99) + 1;
    char tek[3] = "00";
    tek[0] = char(y % 10 + 48);
    tek[1] = char(y / 10 + 48);
    char nomer_vagona[] = "0";
    nomer_vagona[0] = char(rand() % 9 + 49);
    strcat(zap[7], vagon[x%15]);
    strcat(zap[8], nomer_vagona);
    strcat(zap[9], tek);
}