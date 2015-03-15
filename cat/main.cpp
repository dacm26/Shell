#include <QCoreApplication>
#include <iostream>
#include <sstream>
#include <QDir>
#include <QString>
#include <QStringList>
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    int columnSize = 8;
    if (argc < 3) {
        cout<<"Argumentos insuficientes"<<endl;
        return 1;
    }

    string line;
    stringstream ss;
    ss << argv[1] << "/" << argv[2];
    ifstream myfile;
    myfile.open(ss.str().c_str());
    if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
            cout << line << endl;
        }
        myfile.close();
      }

    else cout << "No se puede abrir el archivo";


    return 0;
}
