#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

      std::cout << "Welcome to ElZatoona!" << std::endl;

    std::cout << "change 1" << std::endl;
    std::cout << "change 2" << std::endl;

    return a.exec();
}
