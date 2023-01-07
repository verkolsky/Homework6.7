#include <iostream>
#include "IProducts.h"
#include "portable.h"
#include "consumer.h"
#include "portcons.h"
using namespace std; 

int main()
{
    const int x = 9;
    IProducts* product[x];
    product[0] = new Laptop("LapTop171", 2.65, 17.1);
    product[1] = new Laptop("MagBook13Pro", 2.25, 13.3);
    product[2] = new Powerbank("PwrBang", 0.27, 10500);
    product[3] = new Powerbank("Bankeerz20K", 0.53, 20000);
    product[4] = new TV("Ultraplazma55", 7.77, 55);
    product[5] = new TV("Horizont", 5.43, 31.3);
    product[6] = new Washer("Moidodyr", 22.22, 10.5);
    product[7] = new Washer("Brosch", 15.35, 7);
    product[8] = new PortCons("XDrill", 3.33, 5000);

    bool open = true;
    while (open)
    {
        cout << "Choose any product: " << endl;
        for (int j = 0; j < x; j++)
        {
            cout << j+1 << " - ";
            product[j]->getName();
        }
        cout << "0 to exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            product[0]->Show();
            break;
        case 2:
            product[1]->Show();
            break;
        case 3:
            product[2]->Show();
            break;
        case 4:
            product[3]->Show();
            break;
        case 5:
            product[4]->Show();
            break;
        case 6:
            product[5]->Show();
            break;
        case 7:
            product[6]->Show();
            break;
        case 8:
            product[7]->Show();
            break;
        case 9:
            product[8]->Show();
            break;        
        case 0:
            open = false;
            break;
        default:
            cout << "Choose product!!!" << endl;
            break;
        }
    }
    for (int i = 0; i < x; i++)
    {
        delete product[i];
    }
    
    return 0;
}