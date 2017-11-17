#include <iostream>
#include <fstream>
using namespace std;

struct pratymai
{
    string pavadinimas;
    int kiek;
};

pratymai A[1000], B[1000];



void nuskaitymas();
void skaiciavimai();
void spausdinimas();

int n, nb;

int main()
{
    nuskaitymas();
    /*cout << n <<endl;
    for(int i=0; i<n; i++)
    {

        cout << A[i].pavadinimas << " " << A[i].kiek << endl;
    }*/
    skaiciavimai();
    spausdinimas();

    return 0;
}

void nuskaitymas()
{
    char eil[21];
    ifstream fd("U2.txt");
    fd >> n;
    fd.ignore();
    for(int i=0; i<n; i++)
    {
        fd.get(eil, 21);
        A[i].pavadinimas = eil;
        fd >> A[i].kiek;
        fd.ignore();
    }
    fd.close();
}

void skaiciavimai()
{
    for(int i=0; i<n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(A[i].pavadinimas < A[j].pavadinimas) swap(A[i],A[j]);
        }
    }

    nb = 0;
    for(int i=0; i<n;)
    {
        int sum = 0;
        B[nb] = A[i];
        i++;
        while(A[i].pavadinimas == B[nb].pavadinimas)
        {
            B[nb].kiek += A[i].kiek;
            i++;
        }
        nb++;
    }
}

void spausdinimas()
{
    ofstream fr("U2rez.txt");
    for(int i=0; i<nb; i++)
    {
        fr << B[i].pavadinimas << B[i].kiek << endl;
    }
    fr.close();
}

