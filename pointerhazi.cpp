#include <iostream>
#include <vector>
#include <string>

using namespace std;
int lista[5];


void listazas(int lista[])
{

    cout << "------- Valtozok ------- \n";

    for (int i = 0; i<5; i++)
    {
        if (lista[i]==0)
        {
            cout << i+1 << ". ---" <<"\n";
        }
        else
        {
         cout << i+1 <<". int " <<lista[i] <<"\n";
        }
    }

    cout << "------- Cimek ------- \n";

    for (int i = 4; i>-1; i--)
    {
        if (lista[i]==0)
        {
            cout << 5-i << ". ---" <<"\n";
        }
        else
        {
            cout << 5-i <<". int " << &lista[i] <<"\n";
        }
         
    }
}



int main()
{
    int elso = 1;
    int masodik = 2;
    int harmadik = 3;
    int negyedik = 4;
    int otodik = 5;

    lista[0] = elso;
    lista[1] = masodik;
    lista[2] = harmadik;
    lista[3] = negyedik;
    lista[4] = otodik;

    while (true)
    {
        listazas(lista);
        cout << "Kerek egy tippet pl.: 2 3\n";
        string talalat;
        getline(cin, talalat);
        
        int valtozo = stoi(talalat.substr(0,1));
        int pointer = stoi(talalat.substr(2,1));
        
       
        if (valtozo == 5-pointer+1)
        {
            lista[valtozo-1] = 0;
            
        }
        

    }



    return 0;
}

