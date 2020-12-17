#include<locale.h> // çàãîëîâî÷ãûé ôàéë äëÿ ôóíêöèè setlocale()
#include<iomanip> // çàãîëîâî÷íûé ôàéë äëÿ cout, « è ìíîãî ÷åãî åùå
#include<bitset>
#include<iostream>

int main()
{
    std::cout << "\t\t\t\t\t\t\t" << "Óêàçàòåëü è äåéñòâèÿ ñ íèì" << std::endl;
    setlocale(LC_ALL, "Russian");
    //int *print_int;

    //íåëüçÿ ðàñïå÷àòàòü ïåðåìåííóþ êîòîðóþ íåèíèöèàëèçèðîâàíà
    //std::cout<<print_int<<std::endl; // ïîêàçûâàåò íîìåð â ïðîãðàììå
//std::cout<<*print_int<<std::endl; //ïîêàçûâàåò çíà÷åíèå ïåðåìåííîé ïðèíò

    std::cout << "\t" << "Çàïðèíòèëè ïåðåìåííóþ ÷åðåç óêàçàòåëü" << std::endl;
    int* print;
    int A = 0;
    print = &A;
    std::cout << *print << std::endl;
    std::cout << "\t" << "Ðàñïå÷àòêà â ðåæèìå sizeof" << std::endl;
    std::cout << sizeof(print) << std::endl; //âîçðàùàåò ðàçìåð îáúåêòà â áàéòàõ ( â äàííîì ñëó÷àå óêàçàòåëÿ)
    std::cout << sizeof(*print) << std::endl; // â äàííîì ñëó÷àå âîçâðàùàåò ðàçìåð ïåðåìåííîé â áàéòàõ
    std::cout << "\t\t\t\t\t\t\t" << "Ìàññèâû" << std::endl;
    int massiv[3] = { 0,5,6 };// ñîçäàíèå ñàìîãî ïðîñòî îäíîìåðíîãî ìàññèâà
    std::cout << massiv[0] << massiv[1] << massiv[2] << std::endl; // ðàñïå÷àòêà îäíîìåðíîãî ìàññèâà áåç èíèöèàëèçàöèè

   // ìàññèâ íåëüçÿ îáúÿâèòü ïðè ïîìîùè ïåðåìåííîé, ýòî áóäåò ïîçäæå â äèíàìè÷åñêîé ïàìÿòè

    std::cout << "\t" << "Äâóìåðíûé ìàññèâ/ìàòðèöà ñ êëàâèàòóðû" << std::endl;
    int massiv2[3][3];
    for (int i = 0; i < 3; ++i) { // ñ÷¸ò÷èê äëÿ çàïîëíåíèÿ ñòîëáöîâ
        for (int j = 0; j < 3; ++j) { // ñ÷¸ò÷èê äëÿ çàïîëíåíèÿ ñòðîê
            std::cin >> massiv2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) {
            std::cout << massiv2[i][j] << "\t"; // âûâîä ìàññèâ÷èêà (èìåííî ýòà ñòðîêà-ñòðîê)
        }
        std::cout << std::endl; // ñòîëáöû
    }
    std::cout << "\t" << " Âûâîä ýëåìåíòà ìàññèâà ñ èíäåêñîì 1/1 = " << massiv2[1][1] << std::endl; // âûâîä îïðåäåë¸ííîãî ýëåìåíòà ìàññèâà

     //åñëè ñëåãêà âûéòè çà ãðàíèöû ìàññèâà, òî îí çàïîëíèò åãî ìóñîðîì

     //åñëè ñèëüíî âûéòè çà ïðåäåëû ìàññèâà, òî îí íå ñìîæåò âûâåñòè íè÷åãî è âûäàñò îøèáêó

    std::cout << "\t" << "Âûáåðèòå íóæíûé âàì ýëåìåíò ìàññèâà " << std::endl;
    int nomer; int nomer2; std::cin >> nomer; std::cin >> nomer2;
    int* vivod; int* vivod2;  vivod = &nomer; vivod2 = &nomer2;
    std::cout << " Âûâîä ýëåìåíòà ìàññèâà c  âûáðàííûì ýëåìåíòîì=" << massiv2[*vivod][*vivod2] << std::endl; // ðàñïå÷àòêà ýëåìåíòà ìàññèâà ñ êëàâèàòóðû
    std::cout << "\t" << "Ècïîëüçîâàíèå ôîðìóëàìè äëÿ íàõîæäåíèå ýëåìåíòà ìàññèâà" << std::endl;
    int forymmasiv[6] = { 1,2,3,4,5,6 };
    std::cout << "Óêàçàòåëü:\t" << forymmasiv << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Àäðåñ çíà÷åíèÿ: " << forymmasiv + i << "/t";
        std::cout << "Çíà÷åíèå:" << *(forymmasiv + i) << std::endl;
    }
    int forymmasiv2[2][2] = { {1,2},{3,4} };
    std::cout << "\n";
    std::cout << "Óêàçàòåëü 2 :\t" << forymmasiv2 << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int h = 0; h < 2; h++) {
            std::cout << "Àäðåñ çíà÷åíèÿ: " << forymmasiv2 + i << "\t";
            std::cout << "Çíà÷åíèå:" << *(*(forymmasiv2 + h) + i) << std::endl;
        }
    }
    std::cout << "\t" << "Ìàññèâ â ôîðìå êâàäðàòíîé ïèðàìèäêè " << std::endl;
    int massiv3[10][10];
    for (int l = 0; l < 10; ++l) { // â ýòî öèêëå ïåðå÷èñëÿþòñÿ ñòîëáöû  ìàññèâà
        for (int h = 0; h <= l; ++h) { // ñ÷¸ò÷èê äëÿ çàïîëíåíèÿ ñòðî÷åê
            massiv3[l][h] = h + 1;
            std::cout << massiv3[l][h] << "\t";
        }
        for (int h = 10; h > l; --h) {
            massiv3[l][h] = h == 0;

            std::cout << massiv3[l][h] << "\t";

        }

        std::cout << std::endl;
    }
    std::system("pause"); // âûçîâ ôóíêöèè system() èç ñòàíäàðòíîé áèáëèîòåêè
    return 0;
}