#ifndef STOCKAGE_H
#define STOCKAGE_H

#include "../../Nouveau/defs/Librairie.h"

class Stockage {
public:
    Stockage();
    virtual ~Stockage();

    void calculMemoireUSD();
    void calculMemoireRAM();

    string getMemoireRAM();
    string getMemoireUSD();
    string getPourcentage();
    string getOccupationRAM();
    string getUnit();

private:

    FILE * ouvrirAccesUSD();
    FILE * ouvrirAccesRAM();

    string lectureLigneUSD(FILE * pFile);
    string lectureLigneRAM(FILE * pFile);

    string trouverPositionUSD(string str);
    string trouverPositionRAM(string str);

    static string memram;
    static string memUSD;

    string memoireRAM;
    string memoireUSD;
    string occupationRAM;
    string pourcentageutilise;
    string unit;
};

#endif /* STOCKAGE_H */
