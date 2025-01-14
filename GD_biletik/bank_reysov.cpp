//
// Created by alena on 26.10.22.
//
#include <iostream>
#include <cstring>
#include "Header1.h"
#include <set>

using namespace std;

char vokzal[322] [100] = {
        "Абакан",
        "Азов",
        "Александров",
        "Алексин",
        "Альметьевск",
        "Анапа",
        "Ангарск",
        "Анжеро-Судженск",
        "Апатиты",
        "Арзамас",
        "Армавир",
        "Арсеньев",
        "Артем",
        "Архангельск",
        "Асбест",
        "Астрахань",
        "Ачинск",
        "Балаково",
        "Балахна",
        "Балашиха",
        "Балашов",
        "Барнаул",
        "Батайск",
        "Белгород",
        "Белебей",
        "Белово",
        "Белогорск (Амурская область)",
        "Белорецк",
        "Белореченск",
        "Бердск",
        "Березники",
        "Березовский (Свердловская область)",
        "Бийск",
        "Биробиджан",
        "Благовещенск (Амурская область)",
        "Бор",
        "Борисоглебск",
        "Боровичи",
        "Братск",
        "Брянск",
        "Бугульма",
        "Буденновск",
        "Бузулук",
        "Буйнакск",
        "Великие Луки",
        "Великий Новгород",
        "Верхняя Пышма",
        "Видное",
        "Владивосток",
        "Владикавказ",
        "Владимир",
        "Волгоград",
        "Волгодонск",
        "Волжск",
        "Волжский",
        "Вологда",
        "Вольск",
        "Воркута",
        "Воронеж",
        "Воскресенск",
        "Воткинск",
        "Всеволожск",
        "Выборг",
        "Выкса",
        "Вязьма",
        "Гатчина",
        "Геленджик",
        "Георгиевск",
        "Глазов",
        "Горно-Алтайск",
        "Грозный",
        "Губкин",
        "Гудермес",
        "Гуково",
        "Гусь-Хрустальный",
        "Дербент",
        "Дзержинск",
        "Димитровград",
        "Дмитров",
        "Долгопрудный",
        "Домодедово",
        "Донской",
        "Дубна",
        "Евпатория",
        "Егорьевск",
        "Ейск",
        "Екатеринбург",
        "Елабуга",
        "Елец",
        "Ессентуки",
        "Железногорск (Красноярский край)",
        "Железногорск (Курская область)",
        "Жигулевск",
        "Жуковский",
        "Заречный",
        "Зеленогорск",
        "Зеленодольск",
        "Златоуст",
        "Иваново",
        "Ивантеевка",
        "Ижевск",
        "Избербаш",
        "Иркутск",
        "Искитим",
        "Ишим",
        "Ишимбай",
        "Йошкар-Ола",
        "Казань",
        "Калининград",
        "Калуга",
        "Каменск-Уральский",
        "Каменск-Шахтинский",
        "Камышин",
        "Канск",
        "Каспийск",
        "Кемерово",
        "Керчь",
        "Кинешма",
        "Кириши",
        "Киров (Кировская область)",
        "Кирово-Чепецк",
        "Киселевск",
        "Кисловодск",
        "Клин",
        "Клинцы",
        "Ковров",
        "Когалым",
        "Коломна",
        "Комсомольск-на-Амуре",
        "Копейск",
        "Королев",
        "Кострома",
        "Котлас",
        "Красногорск",
        "Краснодар",
        "Краснокаменск",
        "Краснокамск",
        "Краснотурьинск",
        "Красноярск",
        "Кропоткин",
        "Крымск",
        "Кстово",
        "Кузнецк",
        "Кумертау",
        "Кунгур",
        "Курган",
        "Курск",
        "Кызыл",
        "Лабинск",
        "Лениногорск",
        "Ленинск-Кузнецкий",
        "Лесосибирск",
        "Липецк",
        "Лиски",
        "Лобня",
        "Лысьва",
        "Лыткарино",
        "Люберцы",
        "Магадан",
        "Магнитогорск",
        "Майкоп",
        "Махачкала",
        "Междуреченск",
        "Мелеуз",
        "Миасс",
        "Минеральные Воды",
        "Минусинск",
        "Михайловка",
        "Михайловск (Ставропольский край)",
        "Мичуринск",
        "Москва",
        "Мурманск",
        "Муром",
        "Мытищи",
        "Набережные Челны",
        "Назарово",
        "Назрань",
        "Нальчик",
        "Наро-Фоминск",
        "Находка",
        "Невинномысск",
        "Нерюнгри",
        "Нефтекамск",
        "Нефтеюганск",
        "Нижневартовск",
        "Нижнекамск",
        "Нижний Новгород",
        "Нижний Тагил",
        "Новоалтайск",
        "Новокузнецк",
        "Новокуйбышевск",
        "Новомосковск",
        "Новороссийск",
        "Новосибирск",
        "Новотроицк",
        "Новоуральск",
        "Новочебоксарск",
        "Новочеркасск",
        "Новошахтинск",
        "Новый Уренгой",
        "Ногинск",
        "Норильск",
        "Ноябрьск",
        "Нягань",
        "Обнинск",
        "Одинцово",
        "Озерск (Челябинская область)",
        "Октябрьский",
        "Омск",
        "Орел",
        "Оренбург",
        "Орехово-Зуево",
        "Орск",
        "Павлово",
        "Павловский Посад",
        "Пенза",
        "Первоуральск",
        "Пермь",
        "Петрозаводск",
        "Петропавловск-Камчатский",
        "Подольск",
        "Полевской",
        "Прокопьевск",
        "Прохладный",
        "Псков",
        "Пушкино",
        "Пятигорск",
        "Раменское",
        "Ревда",
        "Реутов",
        "Ржев",
        "Рославль",
        "Россошь",
        "Ростов-на-Дону",
        "Рубцовск",
        "Рыбинск",
        "Рязань",
        "Салават",
        "Сальск",
        "Самара",
        "Санкт-Петербург",
        "Саранск",
        "Сарапул",
        "Саратов",
        "Саров",
        "Свободный",
        "Севастополь",
        "Северодвинск",
        "Северск",
        "Сергиев Посад",
        "Серов",
        "Серпухов",
        "Сертолово",
        "Сибай",
        "Симферополь",
        "Славянск-на-Кубани",
        "Смоленск",
        "Соликамск",
        "Солнечногорск",
        "Сосновый Бор",
        "Сочи",
        "Ставрополь",
        "Старый Оскол",
        "Стерлитамак",
        "Ступино",
        "Сургут",
        "Сызрань",
        "Сыктывкар",
        "Таганрог",
        "Тамбов",
        "Тверь",
        "Тимашевск",
        "Тихвин",
        "Тихорецк",
        "Тобольск",
        "Тольятти",
        "Томск",
        "Троицк",
        "Туапсе",
        "Туймазы",
        "Тула",
        "Тюмень",
        "Узловая",
        "Улан-Удэ",
        "Ульяновск",
        "Урус-Мартан",
        "Усолье-Сибирское",
        "Уссурийск",
        "Усть-Илимск",
        "Уфа",
        "Ухта",
        "Феодосия",
        "Фрязино",
        "Хабаровск",
        "Ханты-Мансийск",
        "Хасавюрт",
        "Химки",
        "Чайковский",
        "Чапаевск",
        "Чебоксары",
        "Челябинск",
        "Черемхово",
        "Череповец",
        "Черкесск",
        "Черногорск",
        "Чехов",
        "Чистополь",
        "Чита",
        "Шадринск",
        "Шали",
        "Шахты",
        "Шуя",
        "Щекино",
        "Щелково",
        "Электросталь",
        "Элиста",
        "Энгельс",
        "Южно-Сахалинск",
        "Юрга",
        "Якутск",
        "Ялта",
        "Ярославль"
};


void gen_reys(char br[100][6] [100], int *count_reys) {
    set<int> bank;
    for (int i=0; i < 50; i++) {
        srand(i * 3);
        int c = abs(rand() * (i + 9) % 322);
        int d = abs(c + 1 + (abs(rand()) % 320)) % 322;
        strcat(br[i * 2][0],vokzal[c]);
        strcat(br[i * 2 + 1][0],vokzal[d]);

        strcat(br[i * 2][1],vokzal[d]);
        strcat(br[i * 2 + 1][1],vokzal[c]);

        time_t now = time(0);
        int otpravlenie = rand() % (90 * 24 * 60);
        time_t otpravlenie_time = now + otpravlenie * 60;
        tm *ltm = localtime(&otpravlenie_time);
        int year = 1900 + ltm->tm_year;
        int month = 1 + ltm->tm_mon;
        int day =  ltm->tm_mday;
        int hour = ltm->tm_hour;
        int minute = ltm->tm_min;
        char tek[17] = "123456789012345";
        tek[0] = char((year / 1000) + 48);
        tek[1] = char((year / 100) % 10+ 48);
        tek[2] = char((year / 10) % 10 + 48);
        tek[3] = char((year % 10)+ 48);
        tek[4] = '-';
        tek[5] = char((month / 10) + 48);
        tek[6] = char((month % 10) + 48);
        tek[7] = '-';
        tek[8] = char((day / 10) + 48);
        tek[9] = char((day % 10) + 48);
        tek[10] = 'T';
        tek[11] = char((hour / 10) + 48);
        tek[12] = char((hour % 10) + 48);
        tek[13] =  char(58);
        tek[14] = char((minute / 10) + 48);
        tek[15] = char((minute % 10) + 48);
        strcat(br[i * 2][2], tek);

        int vremi_v_pyti = rand() % (18 * 60 * 60);
        time_t prib_time = now + otpravlenie * 60 + 60 * 30 + vremi_v_pyti;
        tm *ltm1 = localtime(&prib_time);
        int year1 = 1900 + ltm1->tm_year;
        int month1 = 1 + ltm1->tm_mon;
        int day1 =  ltm1->tm_mday;
        int hour1 = ltm1->tm_hour;
        int minute1 = ltm1->tm_min;
        tek[0] = char((year1 / 1000) + 48);
        tek[1] = char((year1 / 100) % 10+ 48);
        tek[2] = char((year1 / 10) % 10 + 48);
        tek[3] = char((year1 % 10)+ 48);
        tek[4] = '-';
        tek[5] = char((month1 / 10) + 48);
        tek[6] = char((month1 % 10) + 48);
        tek[7] = '-';
        tek[8] = char((day1 / 10) + 48);
        tek[9] = char((day1 % 10) + 48);
        tek[10] = 'T';
        tek[11] = char((hour1 / 10) + 48);
        tek[12] = char((hour1 % 10) + 48);
        tek[13] =  char(58);
        tek[14] = char((minute1 / 10) + 48);
        tek[15] = char((minute1 % 10) + 48);
        strcat(br[i * 2][3], tek);

        time_t otpr2 = now + otpravlenie * 60 + 4 * 24 * 60 * 60;
        tm *ltm2 = localtime(&otpr2);
        int year2 = 1900 + ltm2->tm_year;
        int month2 = 1 + ltm2->tm_mon;
        int day2 =  ltm2->tm_mday;
        int hour2 = ltm2->tm_hour;
        int minute2 = ltm2->tm_min;
        tek[0] = char((year2 / 1000) + 48);
        tek[1] = char((year2 / 100) % 10+ 48);
        tek[2] = char((year2 / 10) % 10 + 48);
        tek[3] = char((year2 % 10)+ 48);
        tek[4] = '-';
        tek[5] = char((month2 / 10) + 48);
        tek[6] = char((month2 % 10) + 48);
        tek[7] = '-';
        tek[8] = char((day2 / 10) + 48);
        tek[9] = char((day2 % 10) + 48);
        tek[10] = 'T';
        tek[11] = char((hour2 / 10) + 48);
        tek[12] = char((hour2 % 10) + 48);
        tek[13] =  char(58);
        tek[14] = char((minute2 / 10) + 48);
        tek[15] = char((minute2 % 10) + 48);
        strcat(br[i * 2 + 1][2], tek);

        time_t prib2 = now + otpravlenie * 60 + 60 * 30 + vremi_v_pyti + 4 * 24 * 60 * 60;
        tm *ltm3 = localtime(&prib2);
        int year3 = 1900 + ltm3->tm_year;
        int month3 = 1 + ltm3->tm_mon;
        int day3 =  ltm3->tm_mday;
        int hour3 = ltm3->tm_hour;
        int minute3 = ltm3->tm_min;
        tek[0] = char((year3 / 1000) + 48);
        tek[1] = char((year3 / 100) % 10+ 48);
        tek[2] = char((year3 / 10) % 10 + 48);
        tek[3] = char((year3 % 10)+ 48);
        tek[4] = '-';
        tek[5] = char((month3 / 10) + 48);
        tek[6] = char((month3 % 10) + 48);
        tek[7] = '-';
        tek[8] = char((day3 / 10) + 48);
        tek[9] = char((day3 % 10) + 48);
        tek[10] = 'T';
        tek[11] = char((hour3 / 10) + 48);
        tek[12] = char((hour3 % 10) + 48);
        tek[13] =  char(58);
        tek[14] = char((minute3 / 10) + 48);
        tek[15] = char((minute3 % 10) + 48);
        strcat(br[i * 2 + 1][3], tek);

        int number = 1 + abs(rand() % 789);

        if (month < 6 || month > 8) {
            while ((number >= 151 && number <= 298) || (number >= 451 && number <= 598)) {
                number = 1 + abs(rand() % 789);
            }
        }
        char te[4] = "000";
        te[0] = char((number / 100) + 48);
        te[1] = char((number / 10 % 10) + 48);
        te[2] = char((number % 10) + 48);
        strcat(br[i * 2][4], te);
        strcat(br[i * 2 + 1][4], te);

        char vvp_char[7] = "";
        vvp_char[0] = char((vremi_v_pyti / 100000) % 10 + 48);
        vvp_char[1] = char((vremi_v_pyti / 10000) % 10 + 48);
        vvp_char[2] = char((vremi_v_pyti / 1000) % 10 + 48);
        vvp_char[3] = char((vremi_v_pyti / 100) % 10 + 48);
        vvp_char[4] = char((vremi_v_pyti / 10) % 10 + 48);
        vvp_char[5] = char(vremi_v_pyti % 10 + 48);
        strcat(br[i * 2][5], vvp_char);
        strcat(br[i * 2 + 1][5], vvp_char);

        if (bank.find((otpravlenie / 1440) * 1000 + number) == bank.end() \
        && bank.find((otpravlenie / 1440 + 7) * 1000 + number) == bank.end()) {
            bank.insert((otpravlenie / 1440) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 1) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 2) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 3) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 4) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 5) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 6) * 1000 + number);
            bank.insert((otpravlenie / 1440 + 7) * 1000 + number);
            *count_reys += 1;
        }
    }
    set <int> :: iterator it = bank.begin();
}