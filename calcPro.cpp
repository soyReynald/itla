#include "iostream"
#include "conio.h"
#include "stdlib.h"

using namespace std;
float promedioA, promedioT, promedioC;
int matricula, mult1, mult2, mult3, mult4, mult5, creditos;
int cuatrimestre, cont;
bool comp;
int notita, des;

int notasT(char _nota, int _note)
{
    if(_nota == 'A'){_note = 4;}   
    if(_nota == 'B'){_note = 3;}
    if(_nota == 'C'){_note = 2;}
    if(_nota == 'D'){_note = 1;}
    
    if(_nota == 'a'){_note = 4;}   
    if(_nota == 'b'){_note = 3;}
    if(_nota == 'c'){_note = 2;}
    if(_nota == 'd'){_note = 1;}
    
    return _note;
}

int main(void)
{
    char nota1, nota2, nota3, nota4, nota5;
    int note1, note2, note3, note4, note5;
    char nombre[20];
    //Creditos...
    cout<<"/*********************************************/"<<endl;
    cout<<"\t \t Programa Realizado por:   "<<endl;
    cout<<" \t \t  Reynald Rodriguez Ramirez"<<endl;
    cout<<"/*******************************************/"<<endl;
    //Pide al usuario su nombre y leelo...
    cout<<"Ingrese su nombre y apellido por favor: "<<endl;
    gets(nombre);
    
    //Pide al usuario su matricula
    cout<<"Ingrese su matricula:"<<endl;
    cin>>matricula;
    
do
{
float promedio,  notas; 
if(des == 1)
{

        cout<<"Desea agregar otro cuatrimestre?\n SI=1, o NO = 2 \n"<<endl;
        cin>>des;
}
if(des != 2)
{
    cout<<"Ingresa el cuatrimestre que deseas evaluar..."<<endl;
    cin>>cuatrimestre; 
    cout<<"El programa calculara el promedio del cuatrimestre "<<cuatrimestre<<" desea continuar ?\nSI = 1, NO = 0 "<<endl;
    cin>>des;
    cont = 1;
    if(des == 1)
    {
        system("cls");
        cout<<"--------------------------------\nBienvenido! \n"<<nombre<<"\n---------------------------\nNum. de matricula\n"<<matricula<<endl;
        cout<<"--------------------------------\n"<<endl;
     
        switch(cuatrimestre)
        {
         case 1:
              cout<<"\n--------------->Primer Cuatrimestre<----------- \n ------>Introduzca su nota (A, B, C o D)"<<endl;
              cout<<"Ingles Tecnico: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;
              
              cout<<"Fundamentos del computador: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 4;
              
              cout<<"Precalculo: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita *4;
              
              cout<<"Redaccion Castellana: ";
              cin>>nota4;
              notita = notasT(nota4, note4);
              mult4 = notita * 4;
              
              cout<<"Historia Dominicana: ";
              cin>>nota5;
              notita = notasT(nota5, note5);
              mult5 = notita *4;
              
              creditos =  21;
              cout<<"El total de creditos de este Cuatrimestre es: \n"<<creditos<<"\n"<<endl;
              notas = mult1+mult2+mult3+mult4+mult5;
              
              promedio = notas/creditos;
              promedioC = promedio;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;
              
         case 2:
              cout<<"\n------------->2do Cuatrimestre<------- \n Introduzca su nota\n \n"<<endl;
              cout<<"Fundamentos de programacion: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;
              
              cout<<"Introduccion a las bases de datos: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 4;
              
              cout<<"Calculo diferencial: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita * 4;
              creditos = 13;
              cout<<"El total de creditos de este cuatrimestre es: \n"<<creditos<<"\n"<<endl;
              notas = mult1+mult2+mult3;
              promedio = notas / creditos;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;
         
         case 3:
              cout<<"\n------------->3r Cuatrimestre<------- \n Introduzca su nota\n \n"<<endl;
              cout<<"Programacion I: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;
              
              cout<<"Etica Social y profesional: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 3;
              
              cout<<"Calculo Integral: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita * 5;

              creditos = 12;
              cout<<"El total de creditos de este cuatrimestre es: \n"<<creditos<<"\n"<<endl;
              notas = mult1+mult2+mult3;
              promedio = notas / creditos;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;

         case 4:
              cout<<"\n------------->4to Cuatrimestre<------- \n Introduzca su nota\n \n"<<endl;
              cout<<"Analicis y Diseño: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;
              
              cout<<"Bases de Datos Avanzadas: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 4;
              
              cout<<"Programacion II: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita * 4;
              
              cout<<"Fisica Aplicada I: ";
              cin>>nota4;
              notita = notasT(nota4, note4);
              mult4 = notita * 5;
              
              creditos = 17;
              
              cout<<"El total de creditos de este cuatrimestre es: \n"<<creditos<<"\n"<<endl;
              notas = mult1+mult2+mult3+mult3+mult4;
              promedio = notas / creditos;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;

         case 5:
              cout<<"\n------------->5to Cuatrimestre<------- \n Introduzca su nota\n \n";
              cout<<"Auditoria Informatica: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;

              cout<<"Programacion III: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 4;

              cout<<"Diseño Centrado en el Usuario: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita * 4;

              cout<<"Programacion Web: ";
              cin>>nota4;
              notita = notasT(nota4, note4);
              mult4 = notita * 4;

              creditos = 16;
              cout<<"El total de creditos de este Cuatrimestre es: \n"<<creditos<<"\n"<<endl;
              promedio = notas/creditos;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;

         case 6:
              cout<<"Estructura de Datos: ";
              cin>>nota1;
              notita = notasT(nota1, note1);
              mult1 = notita * 4;

              cout<<"Administracion de Proyectos de Software: ";
              cin>>nota2;
              notita = notasT(nota2, note2);
              mult2 = notita * 4;

              cout<<"Mineria de Datos e Inteligencia de Negocios: ";
              cin>>nota3;
              notita = notasT(nota3, note3);
              mult3 = notita * 4;

              cout<<"Introduccion a la Ingenieria de Software: ";
              cin>>nota4;
              notita = notasT(nota4, note4);
              mult4 = notita * 4;

              creditos = 16;
              cout<<"El total de Creditos de este cuatrimestre es: \n"<<creditos<<"\n"<<endl;

              notas = mult1+mult2+mult3+mult4;
              promedio = notas / creditos;
              cout<<"El promedio total de este cuatrimestre es: \n"<<promedio<<endl;
              promedioT = promedio + promedioT;
              if(promedioT > 4){
                promedioA = promedioT / 2;
                cout<<"En total posee un promedio de: \n"<<promedioA<<endl;
              }
              break;

         default:
              cout<<"Porfavor Introduzca un cuatrimestre...";
        }
     }        

} 
}while(des == 1);   
    getch();
    return 0;      
}
