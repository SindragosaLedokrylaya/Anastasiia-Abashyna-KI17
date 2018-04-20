#include<iostream>
#include<cstring>
#include<cmath>
#include<clocale>
#include <math.h>
#include <sstream>
#include <cstdlib>

using namespace std;

const double pi = 3.1415926535897932384626433832795;

string name_abashina()
{
    return "Абашина Анастасiя Андрiївна © \n";
}

string task_2 (int a, int b)
{
    if (a+5 >= b)
    {
        return "true \n";
    } else
    return "false \n";
}

string doubleToHex (double input)
{
    string digits[16] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };
    string hex;
    int int_num = input, buffer;
    double frac_num = input - int_num;
    //cout << int_num << endl << frac_num << endl;
    while (int_num>0)
        {
            hex.insert(0, digits[int_num % 16]);
            int_num /= 16;
        }
    hex += ".";
    for (int i = 0; i < 8; i++)
        {
            frac_num *= 16;
            buffer = floor(frac_num);
            hex += digits[buffer];
            frac_num -= floor(frac_num);
        }
    return hex;
}

string q_calculation (double x, double y, double z)
{
    try
    {
        double q;
        q=(sqrt(abs(y+z/2))+y+pi*cos(pow(y, abs(x))));
        std::ostringstream strs;
        strs << q;
        std::string str = strs.str();
        if (q != q)     // неопределенность (NaN) не равна ни одному числу, И НЕ РАВНА САМОЙ СЕБЕ
        {
            return "Перевищен лiмiт допустимого значення";
        }
        else
        {
            return "Q(16) = " + doubleToHex(q) + ";\tQ(10) = " + str;
        }
    }
    catch(const exception&error)
    {
        return "Невiрно введенi даннi";
    }
}

string s_calculation(double x, double y, double z)
{
    try
    {
        double s;
        s = sqrt(abs(z*z*(y/2)))+((pi*x+(exp(abs(x)))/y));
        std::ostringstream strs;
        strs << s;
        std::string str = strs.str();
        if (isinf(s))
        {
            return "Невiрно введенi даннi";
        }
        return "S(16) = " +  doubleToHex(s) + ";\tS = "+ str;
    }
    catch(const exception&error)
    {
        return "Невiрно введенi даннi";
    }
}





