#include <iostream>
#include <fstream>
//2013 1st task
using namespace std;

struct imon                                 //structure of the complex array to read and store
{                                           //the data from the list of organisations
    string pav;                             //string for the organisations' names
    int x;                                  //first coordinate
    int y;                                  //second coordinate
};

imon A[51];
int n, m, rez, sk;

void nuskaitymas();                         //function for reading from data file
void skaiciavimai();                        //function for calculations
void spausdinimas();                        //function for writing to the result (output) file

int main()                                  //main function
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

void nuskaitymas()                          //reading function
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

void skaiciavimai()                         //calculation of the drive km by driver for each delivery
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

void spausdinimas()                         //output
{
    ofstream fr("U1rez.txt");
    fr << sk+1 << " " << rez << " " << A[sk].pav << endl;
    fr.close();
}
