#include <QCoreApplication>
#include <iostream>
#include <sstream>
#include <QDir>
#include <QString>
#include <QStringList>
using namespace std;
int main(int argc, char *argv[])
{
    int columnSize = 8;
    if (argc <4) {
        cout<<"Argumentos insuficientes"<<endl;
        return 1;
    }
    stringstream ss;
    QString R=QString(argv[2]);
    if(R != "-R"){
        cout<<"Argumento invalido"<<endl;
        return 1;
    }
    ss << argv[1] << "/" << argv[3];
    QString path = QString(ss.str().c_str());
    cout << "Carpeta a Eliminar: "<<path.toStdString() << endl;
    QDir thisDir;
    thisDir.setPath(path);
    if(!thisDir.removeRecursively()){
        cout<<"No se pudo eliminar el directorio"<<endl;
        return 1;
    }
    cout << "Directorio Eliminado exitosamente!"<< endl;
    return 0;
}
