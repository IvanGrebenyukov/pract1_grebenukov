// practic1_var5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int findDividionemainder(int dividend, int devider) {
    if (devider != 0) {
        return dividend % devider;
    }
    else {
        std::cout << "Ошибка деления на ноль!" << std::endl;
        return 0;
    }
}


int Calculation(char operation, int firstNumber, int secondNumber)
{
    switch (operation) {
    case '+':
        return firstNumber + secondNumber;
    case '-':
        return firstNumber - secondNumber;
    case '*':
        return firstNumber * secondNumber;
    case '/': {
        if (secondNumber != 0) {
            return firstNumber / secondNumber;
        }
        else {
            std::cout << "Деление на ноль невозможно!" << std::endl;
            return 0;
        }
    }
    case '%': {
        if (secondNumber != 0) {
            return firstNumber % secondNumber;
        }
        else {
            std::cout << "Деление на ноль невозможно!" << std::endl;
            return 0;
        }
    }

    }
}
void Zad1() {
    int dividend, devider;

    std::cout << "Введите делимое: ";
    std::cin >> dividend;

    std::cout << "Введите делитель: ";
    std::cin >> devider;

    int remainderDivision = findDividionemainder(dividend, devider);
    std::cout << "Остаток от деления = " << remainderDivision << std::endl;
}
void Zad2() {
    int firstNumber, secondNumber, result;
    char operation;
    bool check = true; 
    bool checkOperation = true;
    

    do {
        std::cout << "Введите первое число: ";
        while (!(std::cin >> firstNumber)) {
            std::cout << "Введите первое число корректно" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            check = false;

        }

        std::cout << "Введите второе число: ";
        while (!(std::cin >> secondNumber)) {
            std::cout << "Введите второе число корректно" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            check = false;
        }

        do {

            std::cout << "Введите операцию (+, -, *, /, %) или 0 для выхода из программы: ";
            std::cin >> operation;

            if (operation == '0') {
                checkOperation = false;
            }
            else if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '%') {
                std::cout << "Введите правильный знак операции!" << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            else {
                checkOperation = false;
            }

        } while (checkOperation == true);

        if (operation == '0') {
            check = false;
        }

        result = Calculation(operation, firstNumber, secondNumber);

        std::cout << "Результат: " << result << std::endl;
        std::cout << "Нажмите Enter чтобы начать заново!" << std::endl;
        std::cin.ignore(100, '\n');
        std::cin.get();
        std::cout << "\033[2J\033[1;1H";

    } while (check == true);
}
int main()
{
    setlocale(LC_ALL, "rus");
    /*Zad1();*/
    Zad2();
    
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
