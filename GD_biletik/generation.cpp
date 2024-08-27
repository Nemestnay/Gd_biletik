//
// Created by alena on 26.10.22.
//

#include <iostream>
#include "Header1.h"
#include <fstream>
#include <cstring>
using namespace std;

void generation(int count) {
    fstream file;
    file.open( "text.xlsx", std::ios::in | std::ios::out | std::ios::trunc);
    file << "ФИО,Паспортные данные,Откуда,Куда,Дата отъезда,Дата приезда,Рейс,Тип вагона,Вагон,место,Стоимость,Карта"<< endl;
    srand(6);

    char bank_reysov[100][6][100]= {};
    int count_reys = 0;
    gen_reys(bank_reysov, &count_reys);
    for (int i = 1; i <= count; i++){
        int c = abs(rand());
        char zapis[13] [100] = {};
        srand(i);
        names(zapis);
        pasports(abs((i+c) % 1000000), zapis);
        reys(zapis, c, bank_reysov, count_reys);
        vag_mes(c, zapis);
        money(zapis, i);
        for (int j=0; j <= 12; j++) {
            if (j < 12) {
                file << zapis[j];
                file << ",";
            }
        }
        file << endl;
    }

    file.close();
}