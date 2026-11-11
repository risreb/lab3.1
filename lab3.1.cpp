#include <iostream>
#include <Windows.h>
class Calculator
{
private:
    double num1{};
    double num2{};

public:

    double add()
    {
        return num1 + num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double subtract_1_2()
    {
        return num1 - num2;
    }

    double subtract_2_1()
    {
        return num2 - num1;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }

    bool set_num1(double num1)
    {
        if (num1 == 0)
        {
            return false;
        }

        this->num1 = num1;
        return true;
    }

    bool set_num2(double num2)
    {
        if (num2 == 0)
        {
            return false;
        }

        this->num2 = num2;
        return true;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calculator;

    double num1{};
    double num2{};

    while (true)
    {
        std::cout << "Введите num1 : ";
        std::cin >> num1;

        if (!calculator.set_num1(num1))
        {
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }

        std::cout << "Введите num2 : ";
        std::cin >> num2;

        if (!calculator.set_num2(num2))
        {
            std::cout << "Неверный ввод!" << std::endl;
            continue;
        }

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;

        std::cout << std::endl;
    }

    return 0;
}