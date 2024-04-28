#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ELE 'L'

using namespace std;

int x = 20;
int y = 20;

void gotoxy() {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

int main()
{

    int base1, base2, base3, base4;
    char opcion, a;

    bool finalizar = true;
    while (finalizar) {
        if (kbhit()) {
            char tecla = getch();
            if (tecla == IZQUIERDA) x--;
            if (tecla == DERECHA) x++;
            if (tecla == ARRIBA) y--;
            if (tecla == ABAJO) y++;
            if (tecla == ELE) finalizar = false;
        }
        gotoxy();
    }



    do{





    cout<<"1. Hacer un triangulo"<<endl;
    cout<<"2. Hacer un cuadrado"<<endl;
    cout<<"3. Hacer un rectangulo"<<endl;
    cout<<"4. Hacer un circulo"<<endl;
    cout<<"Presione 0 para deneter el programa"<<endl;
    cin>>opcion;



    switch(opcion){
        case '1':
            cout<<"Ingrese la base del triangulo";
            cin >> base1;
            system("cls");
            gotoxy();
            for (int i = 0; i < base1; i++) {

                for (int j = 0; j < base1 - i - 1; j++) {

                    cout << " ";
                }

                for (int j = 0; j < 2 * i + 1; j++) {

                if (i == base1 - 1 || j == 0 || j == 2 * i) {
                        cout << "X";
                } else {

                        cout << " ";
                  }
                }
                cout << endl;
            }
            break;
        case '2':
            cout<<"Ingrese la base del cuadrado";
            cin>>base2;
            system("cls");
            gotoxy();
              for(int i = 1; i<=base2; i++){
                    for(int j = 1; j<=base2; j++){
                        if(i == 1 || i == base2) {
                            cout<<"x ";
                        }else if(j == 1 || j == base2){
                            cout<<"x ";
                        }else{
                            cout<<"  ";
                        }
                    }
                    cout<<endl;
               }
            break;
        case '3':
            cout<<"Ingrese la base del rectangulo";
            cin>>base3;
            system("cls");
            gotoxy();
            for(int i = 0; i<base3; i++){
                    for(int j=0; j<base3-i; j++){
                            cout<<" ";
                            }
                            for(int j=0; j<2*i+1; j++){
                                    cout<<"x";
                            }


                     cout<<endl;
            }
            break;
        case '4':
            cout<<"Ingrese la base del circulo";
            cin>>base4;
            system("cls");
            gotoxy();
            for(int i=-1;i<=base4; i++){
                    for(int j=-1; j<=base4; j++){
                            if(i == -1 || i == base4) {
                                cout<<"x ";
                                 }else if(j == 0 || j == base4){

                        }else{
                            cout<<" ";
                        }
                    }
                    cout<<endl;
               }



            break;
            }
    cout<<endl;
    }while(opcion != '0');



  return 0;
  }


