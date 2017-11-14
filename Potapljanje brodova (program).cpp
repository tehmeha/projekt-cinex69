#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int polje2D [10][10] = {{2,2,0,1,0,0,2,2,2,2},
                            {0,0,0,1,0,0,0,0,0,0},
                            {1,0,0,1,0,2,2,2,0,1},
                            {1,0,0,0,0,0,0,0,0,1},
                            {1,0,0,0,0,0,0,0,0,0},
                            {1,0,0,0,0,1,0,0,0,2},
                            {0,0,0,0,0,1,0,0,0,2},
                            {2,2,0,0,0,0,0,0,0,2},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,1,1,1,1,1,1}};
cout << "    ";
for (int i = 0; i < 10; i++)
{
    cout << i << " ";
}
cout << endl;
cout << "    ";
for ( int i = 0; i < 10; i++)
{
    cout << "--";
}
cout << endl;
    for(int i=0; i<10; i++)
    {
        cout << i << "|  ";
       for(int j=0;j<10;j++)
            {
                cout<<polje2D[i][j]<< " ";
            }
                cout<<endl;
    }
int redak, stupac;
int br_pogodjenih = 0;
int na_redu = 1;
int napada = 2;
while(1)
{
    cout << "Igrac" << na_redu << "Napada igraca 2" << napada << endl;
    cout << "Unesite redak: " << endl;
    cin >> redak;
    cout << "Unesite stupac: " << endl;
    cin >> stupac;
if (polje2D[redak][stupac] == napada)
{
    cout << "GG ship down! EZ! " << endl;
    br_pogodjenih++;
}
else
{
    cout << "NOOB!" << endl;
}
if( br_pogodjenih == 5)
{
    cout << "Igrac je pobijedio." << endl;
}
swap(na_redu, napada);
}



    return 0;
}



