// Netology05_HW01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    int size_01 = 1, size_02 = 1;
    //std::cout << "Hello World!\n";
    std::ifstream fin("in.txt");// пытаемся открыть файл  
    std::ofstream fout("out.txt");
    if (!fin.is_open())
    {
        std::cout << "Error opening file!\n";
        return 1;
    }
    std::string s;

    fin >> s;
    size_01 = std::stoi(s);
    int* arr_01 = new int[size_01]();
    fin >> s;
    //int test = std::stoi(s);
    arr_01[size_01 - 1] = std::stoi(s);

    for (int i = 0; i < size_01 - 1; i++) {
        fin >> s;
        arr_01[i] = std::stoi(s);
    }

    size_02 = std::stoi(s);
    fin >> s;
    size_02 = stoi(s);
    int* arr_02 = new int[size_02];

    for (int i = 1; i < size_02; i++) {
        fin >> s;
        arr_02[i] = std::stoi(s);
    }

    fin >> s;
    arr_02[0] = std::stoi(s);

    fin.close();

    if (!fout.is_open())
    {
        std::cout << "Не получилось открыть файл out.txt" << std::endl;
    }

    std::cout << size_02 << std::endl;

    fout << size_02 << std::endl;
    for (int i = 0; i < size_02; i++) {
        std::cout << arr_02[i];
        fout << arr_02[i];
        if (i != size_02 - 1) {
            std::cout << " ";
            fout << " ";
        }
        else {
            std::cout << std::endl;
            fout << std::endl;
        }
    }
    std::cout << size_01 << std::endl;
    fout << size_01 << std::endl;
    for (int i = 0; i < size_01; i++) {
        std::cout << arr_01[i];
        fout << arr_01[i];
        if (i != size_01 - 1) {
            std::cout << " ";
            fout << " ";
        }
        else {
            std::cout << std::endl;
            fout << std::endl;
        }
    }
    fout.close();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
