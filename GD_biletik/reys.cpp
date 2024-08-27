//
// Created by alena on 26.10.22.
//

#include <cstring>
using namespace std;



void reys(char zap[][100], int x, char br[100][6] [100], int count_reys) {
    strcat(zap[2], br[x % count_reys][0]);
    strcat(zap[3], br[x % count_reys][1]);
    strcat(zap[4], br[x % count_reys][2]);
    strcat(zap[5], br[x % count_reys][3]);
    strcat(zap[6], br[x % count_reys][4]);
    strcat(zap[12], br[x % count_reys][5]);

}