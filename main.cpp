#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    
    int *b = new int[NELEMENTS]; // Hiba: NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //Hiba: ';' hiányzik
    for (int i = 0;) // Hiba: A for hibásan van definiálva.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Hiba: Az átlag változónak megkell adni kezdő értéket.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //Hiba: ';' hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //Hiba: Lefoglalt dinamikus memória felszabadítása hiányzik
    return 0;
}
