#include <iostream>
#include <fstream>

using namespace std;

struct imon
{
    string pav;
    int x;
    int y;
};

imon A[51];
int n, m, rez, sk;

void nuskaitymas();
void skaiciavimai();
void spausdinimas();

int main() // pagrindine programa
{
    nuskaitymas();
    skaiciavimai();
    spausdinimas();


    for(int i=0; i<n; i++)
    {
        cout << A[i].pav << A[i].x << " " << A[i].y <<endl;
    }
    return 0;
}

void nuskaitymas() // skaitymas is failo
{
    char eil[10];
    ifstream fd("U1.txt");
    fd >> n >> m;
    fd.ignore();
    for(int i=0; i<n; i++)
    {

        fd.get(eil, 10);
        A[i].pav = eil;
        fd >> A[i].x >> A[i].y;
        if(A[i].x<0) A[i].x = A[i].x*(-1);
        if(A[i].y<0) A[i].y = A[i].y*(-1);

        fd.ignore();
    }
    fd.close();
}

void skaiciavimai() // kelioniu atstumu skaiciavimas
{
    int temp = 0;
    rez = 0;
    for(int i=0; i<n; i++)
    {

        if(rez <= m)
        {sk = i;
        temp = (A[i].x + A[i].y)*2;
        rez = rez + temp;}

    }
        sk--;
        rez = rez - temp;
}

void spausdinimas() // rezultato isvedimas i faila
{
    ofstream fr("U1rez.txt");
    fr << sk+1 << " " << rez << " " << A[sk].pav << endl;
    fr.close();
}
