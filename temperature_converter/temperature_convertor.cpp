#include <iostream>
int main()
{
    int choice;
    float fahrenheit_temper, celsius_temper, result;
    do
    {
        std::cout << "Please select one option" << std::endl;
        std::cout << "Press \"1\" to convert from fahrenheit to celsius" << std::endl;
        std::cout << "Press \"2\" to convert from celsius to fahrenheit" << std::endl;
        std::cout << "Press \"0\" to exit" << std::endl;
        std::cout << "You choose # ";
        std::cin >> choice;
        if (choice == 1)
        {
            std::cout << "**********************************************************************\n";
            std::cout << "***********Temperature Converter from Fahrenheit to Celsius***********\n";
            std::cout << "**********************************************************************\n";
            std::cout << "Please enter the temperature in Fahrenheit : ";
            std::cin >> fahrenheit_temper;
            std::cout << "**********************************************************************\n";
            std::cout << "**********************************************************************\n";

            result = (fahrenheit_temper - 32) * 5 / 9;
            std::cout << "Temperature in Celsius is :" << result << std::endl;
            std::cout << "**********************************************************************\n";
            std::cout << "**********************************************************************\n";
        }
        else if (choice == 2)
        {
            std::cout << "**********************************************************************\n";
            std::cout << "***********Temperature Converter from Celsius to Fahrenheit***********\n";
            std::cout << "**********************************************************************\n";
            std::cout << "Please enter the temperature in Celsius : ";
            std::cin >> celsius_temper;
            std::cout << "**********************************************************************\n";
            std::cout << "**********************************************************************\n";

            result = (celsius_temper * 9 / 5) + 32;
            std::cout << "Temperature in Fahrenheit is :" << result << std::endl;
            std::cout << "**********************************************************************\n";
            std::cout << "**********************************************************************\n";
        }
        if (choice == 0)
        {
            std::cout << "You have been exited successfuly................!";
            break;
        }
    } while (true);
    return 0;
}
