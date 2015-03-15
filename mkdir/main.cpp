#include <QCoreApplication>
#include <iostream>
#include <QDir>
#include <QString>
#include <QStringList>
using namespace std;
int main(int argc, char *argv[])
{
    int columnSize = 8;
    if (argc <3) {
        cout<<"Argumentos insuficientes"<<endl;
        return 1;
    }

    QString path = QString(argv[1]);
    QDir thisDir;
    thisDir.setPath(path);
    QString name = QString(argv[2]);
    if(!thisDir.mkdir(name)){
        cout<<"No se puede crear el directorio"<<endl;
        return 1;
    }
    cout << "Directorio Creado exitosamente!"<< endl;
    return 0;
}
