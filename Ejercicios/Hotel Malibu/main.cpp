#include <iostream>
#include <conio.h>
#include <stdlib.h>

// Hotel Malibu


using namespace std;
int main()
{
	system ("color 0B");
   int av=0,c=0,habitacion=0,m=0,av1[49],av2[49],av3[49],i;
   char opcion;
   for (i=0;i<49;i++)
   av1[i]=0;
   for (i=0;i<49;i++)
   av2[i]=0;
   for (i=0;i<49;i++)
   av3[i]=0;
   cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같Hotel Malibu같같같같같같같같같같같같같같같같같같같같같같같같같같같같같";
   getch();
    do
     {  system("cls");
         cout<<"\n\n\t Seleccione Una Opcion Del Menu\n";
         cout<<"\n\n\t 1. Reservar\n";
         cout<<"\n\n\t 2. Confirmar Reserva\n";
         cout<<"\n\n\t 3. Cancelar Reserva\n";
         cout<<"\n\n\t 4. Estado de la Habitacion\n";
         cout<<"\n\n\t 5. Salir\n";
         cout<<"\nIntroduzca el Numero de la Opcion:";
         cin>>opcion;
         switch(opcion)
         {
         case '1':
              cout<<"\nDesea En:""\n""Piso 1""\n""Piso 2""\n""Piso 3""\n""Eliga El Numero Correspondiente Al Piso Del Hotel Deseado: ";
              cin>>av;
              cout<<"\nQue Tipo De Habitacion Desea: ""\n""1-Sencilla""\n""2-Doble\n";
              cin>>c;
              if (c==1)
              {
                do {
                cout<<"\nIntroduzca El Numero De Habitacion Puede Ser  Entre 0 y 14: ";
                cin>>habitacion;
                if ((habitacion<0)||(habitacion>14))
                cout<<"\n Dato De Habitacion No Valido....";
                } while ((habitacion<0)||(habitacion>14));
                    }
                    else
              {cout<<"Elija Una Habitacion Entre 15 y 49:";
               do {
                cout<<"\nIntroduzca El Numero De Habitacion: ";
                cin>>habitacion;
                if ((habitacion<15)||(habitacion>49))
                cout<<"\nDato De Habitacion, No Valido....";
                } while ((habitacion<15)||(habitacion>49));
                }
                if (av==1)
              { if (av1[habitacion]==0)
                    {av1[habitacion]=1;
                    cout<<"Su Operacion Se Realizo Con Exito...";
                    }
                 else
                cout<<"La Habitacion No Esta Disponible....";
               }
              if(av==2)
              { if (av2[av==2]==0)
                    {av2[habitacion]=1;
                     cout<<"Su Operacion Se Realizo Con Exito...";
                    }
                else
                cout<<"La Habitacion No Esta Disponible....";
              }
                if(av==3)
                { if (av3[av==3]==0)
                      {av3[habitacion]=1;
                       cout<<"Su Operacion Se Realizo Con Exito...";
                      }
                      else
                cout<<"La Habitacion No Esta Disponible....";
                }

              break;
         case '2':
              cout<<"\nPara Confirmar Su Reserva:""\n""Ingrese El Numero de Piso  En Que Reservo:";
              cin>>av;
              cout<<"\nIngrese El Numero De Habitacion:";
              cin>>habitacion;
              if (av==1)
              { if (av1[habitacion]==1)
                    {av1[habitacion]=2;
                    cout<<"Su Confirmacion Se Realizo Con Exito...";
                    }
                 else
                cout<<"Habitacion No Ha Sido Reservado Aun Por Favor Reservelo Antes....";
               }
              if(av==2)
              { if (av2[av==2]==1)
                    {av2[habitacion]=2;
                     cout<<"Su Confirmacion Se Realizo Con Exito...";
                    }
                else
                cout<<"La Habitacion No Ha Sido Reservada Aun por Favor Reservelo Antes....";
               }
                if(av==3)
                { if (av3[av==3]==1)
                      {av3[habitacion]=2;
                        cout<<"Su Confirmacion Se Realizo Con Exito...";
                      }
                      else
                cout<<"La Habitacion No Ha Sido Reservado Aun por Favor Reservelo Antes....";
                }


              break;
         case '3':
              cout<<"\nPara Cancelar Su Reserva:""\n""Ingrese El Numero de piso donde Reservo:";
              cin>>av;
              cout<<"\nIngrese El Numero De Habitacion:";
              cin>>habitacion;
              if (av==1)
              {if (av1[habitacion]==0)
                   cout<<"\nLa Habitacion No Ha Sido Reservada Aun Por Favor Reservelo Antes....";
                        {if (av1[habitacion]==2)
                         cout<<"La Habitacion Ya No Se Puede Cancelar Gracias....";
                         else
                         {if (av1[habitacion]==1)
                              av1[habitacion]=0;
                              cout<<"\nSu Reserva Ha Sido Cancelada.";
                         }
                         }
            }
              if(av==2)
              { if (av2[av==2]==2)
                    av2[habitacion]=0;
                else
                cout<<"El Habitacion Ya No Se Puede Cancelar Gracias....";
               }
                if(av==3)
                { if (av3[av==3]==2)
                      av3[habitacion]=0;
                      else
                cout<<"La Habitacion Ya No Se Puede Cancelar Gracias....";
                }

              break;
        case '4':
              cout<<"\nEn Cual Piso Desea Verificar Piso 1, Piso 2 o Piso 3:";
              cin>>av;
             cout<< "\nQue Desea Verificar:""\n""1-Reservas""\n""2-Reservas Confirmadas""\n""3-Habitaciones Vacias""\n""Eliga La Opcion a Verificaar: ";
              cin>>m;
              if ((av==1)&&(m==1))
              { cout<<"Las Habitaciones Reservadas Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av1[i]==1)
                     cout<<" Habitacion "<<i <<","; }
              }
                 else
               if ((av==1)&&(m==2))
              { cout<<"Las Habitaciones Confirmados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av1[i]==2)
                     cout<<" Habitacion "<<i <<","; }
              }
                 else
               if ((av==1)&&(m==3))
              { cout<<"Las Habitaciones Vacias Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av1[i]==0)
                     cout<<" Habitacion "<<i <<","; }
              }
                if ((av==2)&&(m==1))
              { cout<<"Las Habitaciones Reservadas Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av2[i]==1)
                     cout<<" Habitacion "<<i <<","; }
              }
                 else
               if ((av==2)&&(m==2))
              { cout<<"Las Habitaciones Que Fueron Reservadas Y Confirmadas Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av2[i]==2)
                     cout<<" Habitacion "<<i <<","; }
              }
                 else
               if ((av==2)&&(m==3))
              { cout<<"Las Habitaciones Disponibles Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av2[i]==0)
                     cout<<" Habitacion "<<i <<","; }
              }

               if ((av==3)&&(m==1))
              { cout<<"Las Habitaciones Reservados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av3[i]==1)
                     cout<<" Habitacion "<<i <<","; }
              }
                 else
               if ((av==3)&&(m==2))
              { cout<<"Las Habitaciones Confirmados Son: \n";
                  for (i=0;i<=49;i++)
                  { if(av3[i]==2)
                     cout<<" Habitacion "<<i <<","; }
					  }
              
                 else
               if ((av==3)&&(m==3))
              { cout<<"Las Habitaciones Que No Estan Disponibles son: \n";
                  for (i=0;i<=49;i++)
                  { if(av3[i]==0)
                     cout<<" Habitacion "<<i <<","; }
              }
               break;
         case '5':
              break;
         default:
                 cout<<"\n  ";
         }
         getch();
   } while (opcion != '5');
         cout<<"\nHa Decidido Salir Del Menu...";
         getch();
         return 0;
}
