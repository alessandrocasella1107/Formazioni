#include <iostream>
#include "FormazioniBuilder.h"
using namespace std;

int main()
{
    FormazioniBuilder f;
    string Final = "";
    int scelta;
    cout << "1 per la formazione del Milan, 2 per l'Inter, 3 per la Juventus: " << endl;
    cin>>scelta;
    switch (scelta)
    {
    case 1:
        Final = f.NameBuilder(1) + " " + f.FormBuilder(1);
        cout<<Final;
        break;
    case 2:
        Final = f.NameBuilder(2) + " " + f.FormBuilder(2);
        cout << Final;
        break;
    case 3:
        Final = f.NameBuilder(3) + " " + f.FormBuilder(3);
        cout << Final;
        break;
    default:
        break;
    }
}


