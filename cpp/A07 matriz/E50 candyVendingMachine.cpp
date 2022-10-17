/* Brayan Mejía Mora

Nos piden que implementemos el software para una máquina expendedora de golosinas.
Cada golosina tiene un nombre y un precio.

También tendrán una cantidad inicial, que en principio será de 3. Debes crear otra matriz
para guardar esta información.

Implementar Vender golosina: pedirá la posición de la golosina que quiera. Esta máquina
tiene golosinas en cada posición, identificados por su fila y columna, que será lo que
introduzca el usuario al pedir una golosina, por ejemplo si el usuario teclea 20 significa que
está pidiendo la golosina que está en la fila 2 columna 0. Cuando no haya más golosinas se le
indicará al usuario. Solo puede pedir una golosina y supondremos que el usuario siempre
tiene dinero al elegir. Recuerda de disminuir la cantidad al pedir.

Deberás estar dentro de un ciclo hasta que el usuario diga que ya no quiere más dulces. Cada
vez que se venda un dulce deberás mostrar la leyenda “El dulce expedido es: Chicle Adams
con código 03, con precio de 1.5 dólares, quedan 2 en existencia”.

Una vez que ya no quiera comprar más dulces deberás mostrar las 3 matrices.

Entrada: Si quires comprar un dulce, y decir la posición del dulce
Salida: mostrar las matrices de dulces, posición y stock
*/

#include <iostream>
using namespace std;

const int n=4;

string sweet[n][n] = {
   {"KitKat","Chicles de fresa","Chicle Adams","Palotes"}, 
   {"Kinder Sorpresa","Doritos","Chetos","Twix"}, 
   {"Carlos V","M&M","Papitas","Chicles de menta"},
   {"Palomitas","Crunch","Milkyway","KitKat fresa"}
};

float price[n][n] = {
   {1.1, 0.8, 1.5, 0.9},
   {1.8, 1.0, 1.2, 1.0},
   {1.8, 1.3, 1.2, 0.8},
   {1.5, 1.1, 1.1, 1.1}
};

int stock[n][n] = {{3, 3, 3, 3},{3, 3, 3, 3},{3, 3, 3, 3},{3, 3, 3, 3}};

int main() {
   int cont=0, index, row, col;
   char answer;
   cout<<"Máquina expendedora de golosinas\n\n";

   do {
      // Mostrar las golocinas, su posición y su precio;
      cout<<"\t\t\t\tGolosinas\n";
      for (int i=0; i<n; i++) {
         for (int j=0; j<n; j++) {
            cout<<(i+1)<<j<<"."<<sweet[i][j];
            for (char c : sweet[i][j]) {
               cont++;
            }
            while (cont<=18) {
               cout<<" ";
               cont++;
            }
            cont=0;
         }
         cout<<endl;
         for (int j=0; j<n; j++) {
            if (j==0) {
               cout<<"["<<stock[i][j]<<"] $"<<price[i][j]<<"\t      ";
            } else if (j==1) {
               cout<<"["<<stock[i][j]<<"] $"<<price[i][j]<<"\t\t    ";
            } else if (j==2) {
               cout<<"["<<stock[i][j]<<"] $"<<price[i][j]<<"\t\t  ";
            } else {
               cout<<"["<<stock[i][j]<<"] $"<<price[i][j];
            }
         }
         cout<<endl<<endl;
      }

      // Preguntar si el usiario quiere seguir comprando
      cout<<"¿Quieres comprar un dulce? s/n "; 
      cin>>answer;

      // Vender golosina
      if (answer=='s') {
         cout<<"Digite la posición de la golosina: ";
         cin>>index;

         switch (index) {
         case 10: row=0; col=0; break;
         case 11: row=0; col=1; break;
         case 12: row=0; col=2; break;
         case 13: row=0; col=3; break;
         case 20: row=1; col=0; break;
         case 21: row=1; col=1; break;
         case 22: row=1; col=2; break;
         case 23: row=1; col=3; break;
         case 30: row=2; col=0; break;
         case 31: row=2; col=1; break;
         case 32: row=2; col=2; break;
         case 33: row=2; col=3; break;
         case 40: row=3; col=0; break;
         case 41: row=3; col=1; break;
         case 42: row=3; col=2; break;
         case 43: row=3; col=3; break;
         }


         if (stock[row][col]!=0) {
            stock[row][col]--;

            cout<<"El dulce expedido es: \n\t"<<sweet[row][col]<<" con código "<<row<<col;
            cout<<", con precio de "<<price[row][col]<<" dólares, quedan ";
            cout<<stock[row][col]<<" en exitencia\n";
         } else {
            cout<<"\n\tYa no hay más golosinas\n";
         }
      }

      cout<<endl;
   } while (answer=='s');

   // Mostrar de nuevo las tres matrices
   cout<<"Golosinas\n";
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         cout<<"["<<sweet[i][j]<<"]";
         for (char c : sweet[i][j]) {
            cont++;
         }
         while (cont<=16) {
            cout<<" ";
            cont++;
         }
         cont=0;
      }
      cout<<endl;
   }

   cout<<"\nPreciso\n";
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         if (price[i][j]==1) {
            cout<<"["<<price[i][j]<<".0]";
         } else {
            cout<<"["<<price[i][j]<<"]";
         }
      }
      cout<<endl;
   }

   cout<<"\nStock\n";
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         cout<<"["<<stock[i][j]<<"]";
      }
      cout<<endl;
   }

   cout<<endl;
   return 0;
}

/*
Máquina expendedora de golosinas

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[3] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [3] $1.1

¿Quieres comprar un dulce? s/n s  
Digite la posición de la golosina: 43
El dulce expedido es: 
        KitKat fresa con código 33, con precio de 1.1 dólares, quedan 2 en exitencia

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[3] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [2] $1.1

¿Quieres comprar un dulce? s/n s
Digite la posición de la golosina: 43
El dulce expedido es: 
        KitKat fresa con código 33, con precio de 1.1 dólares, quedan 1 en exitencia

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[3] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [1] $1.1

¿Quieres comprar un dulce? s/n s
Digite la posición de la golosina: 43
El dulce expedido es: 
        KitKat fresa con código 33, con precio de 1.1 dólares, quedan 0 en exitencia

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[3] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [0] $1.1

¿Quieres comprar un dulce? s/n s
Digite la posición de la golosina: 43

   Ya no hay más golosinas

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[3] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [0] $1.1

¿Quieres comprar un dulce? s/n s
Digite la posición de la golosina: 10
El dulce expedido es: 
        KitKat con código 00, con precio de 1.1 dólares, quedan 2 en exitencia

                                Golosinas
10.KitKat             11.Chicles de fresa   12.Chicle Adams       13.Palotes            
[2] $1.1              [3] $0.8              [3] $1.5              [3] $0.9

20.Kinder Sorpresa    21.Doritos            22.Chetos             23.Twix               
[3] $1.8              [3] $1                [3] $1.2              [3] $1

30.Carlos V           31.M&M                32.Papitas            33.Chicles de menta   
[3] $1.8              [3] $1.3              [3] $1.2              [3] $0.8

40.Palomitas          41.Crunch             42.Milkyway           43.KitKat fresa       
[3] $1.5              [3] $1.1              [3] $1.1              [0] $1.1

¿Quieres comprar un dulce? s/n n

Golosinas
[KitKat]           [Chicles de fresa] [Chicle Adams]     [Palotes]          
[Kinder Sorpresa]  [Doritos]          [Chetos]           [Twix]             
[Carlos V]         [M&M]              [Papitas]          [Chicles de menta] 
[Palomitas]        [Crunch]           [Milkyway]         [KitKat fresa]     

Preciso
[1.1][0.8][1.5][0.9]
[1.8][1.0][1.2][1.0]
[1.8][1.3][1.2][0.8]
[1.5][1.1][1.1][1.1]

Stock
[2][3][3][3]
[3][3][3][3]
[3][3][3][3]
[3][3][3][0]
*/