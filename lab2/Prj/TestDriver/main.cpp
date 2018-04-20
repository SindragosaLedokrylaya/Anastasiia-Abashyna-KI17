#include <iostream>
#include <ModuleAbashina.h>
#include <stdlib.h>

using namespace std;

const char num[13] = {'-',',','.','0','1','2','3','4','5','6','7','8','9'};

bool isNum (string s);
double toNum(string s);

int main()
{
    setlocale(LC_CTYPE,"ukr");
/*

       string qtest [5];
       qtest[0] = q_calculation(1, 2, 3);
       qtest[1] = q_calculation(1, 1, 1);
       qtest[2] = q_calculation(0, -1, 0);
       qtest[3] = q_calculation(10, 10, 10);
       qtest[4] = q_calculation(1, 5, 10);
       cout << " Test task 1 " << endl;
       if (qtest[0] == "Q(16) = 2.903F3B7A;\tQ(10) = 2.56346" )
       cout << "TestCase#1 Passed" << endl;
       if (qtest[1] == "Q(16) = 3.EC125359;\tQ(10) = 3.92215")
       cout << "TestCase#2 Passed" << endl;
       if (qtest[2] == "Q(16) = 1.B2897218;\tQ(10) = 1.69741")
       cout << "TestCase#3 Passed" << endl;
       if (qtest[3] == "Q(16) = 10.9DB02DFF;\tQ(10) = 16.616")
       cout << "TestCase#4 Passed" << endl;
       if (qtest[4] == "Q(16) = 9.0DAD80CF;\tQ(10) = 9.05343")
       cout << "TestCase#5 Passed" << endl;

       string s1, s2, s3, s4, s5;
       string stest1, stest2, stest3, stest4, stest5;
         s1 = s_calculation(1, 2, 3);
         s2 = s_calculation(1, 1, 1);
         s3 = s_calculation(0, -1, 0);
         s4 = s_calculation(10, 10, 10);
         s5 = s_calculation(1, 5, 10);
        cout << " Test task 2 " << endl;
        if (s1 == "S(16) = 7.80301339;\tS = 7.50073")
        cout << "TestCase#1 Passed" << endl;
        if (s2 == "S(16) = 6.9125AF1F;\tS = 6.56698")
        cout << "TestCase#2 Passed" << endl;
        if (s3 == "S(16) = .00000000;\tS = -1")
        cout << "TestCase#3 Passed" << endl;
        if (s4 == "S(16) = 8D0.6C55E76E;\tS = 2256.42")
        cout << "TestCase#4 Passed" << endl;
        if (s5 == "S(16) = 13.7F239F97;\tS = 19.4966")
        cout << "TestCase#5 Passed" << endl;
*/
    string ix, iy, iz, ia, ib;
    double x ,y, z, a, b;
    bool repeat = true;
    char exit;
    while (repeat)
    {
        cout << "Введiть число х: ";
        cin >> ix;
        if(isNum(ix)) x = toNum(ix);
        else { cout << "Помилка вводу даних. Очiкувалось число. Спробуйте ще раз" << endl; continue;}
        cout << "Введiть число у: ";
        cin >> iy;
        if(isNum(iy)) y = toNum(iy);
        else { cout << "Помилка вводу даних. Очiкувалось число. Спробуйте ще раз" << endl; continue;}
        cout << "Введiть число z: ";
        cin >> iz;
        if(isNum(iz)) z = toNum(iz);
        else { cout << "Помилка вводу даних. Очiкувалось число. Спробуйте ще раз" << endl; continue;}
        cout << "Введiть число а: ";
        cin >> ia;
        if(isNum(ia)) a = toNum(ia);
        else { cout << "Помилка вводу даних. Очiкувалось число. Спробуйте ще раз" << endl; continue;}
        cout << "Введiть число b: ";
        cin >> ib;
        if(isNum(ib)) b = toNum(ib);
        else { cout << "Помилка вводу даних. Очiкувалось число. Спробуйте ще раз" << endl; continue;}
        cout << name_abashina();
        cout << endl << "Result \"a + 5 >= b\" is "<< task_2(a,b);
        cout <<  q_calculation(x,y,z) << endl;
        cout <<  s_calculation(x,y,z) << endl;
        cout << endl << "Для виходу з програми натиснiть клавiшу Q/q, для повтору будь-яку (iншу) клавiшу " << endl;
        cin >> exit;
        if (exit == 'q' || exit == 'Q')
        {
            repeat = false;
        }
    }
    return 0;
}


double toNum(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',') s[i] = '.';
    }
    return atof(s.c_str());
}

bool isNum (string s)
{
    bool debug;
    if (s.length() == 1 && (s[0] == ',' || s[0] == '.'))
    {
        return false;
    }
    bool b = false;
    for (int i = 0; i < s.length(); i++)
    {
        b = false;
        for (int j = 0; j < 13; j++)
        {
            if(s[i] == num[j])
            {
                b = true;
                break;
            }
        }
        if (!b)
        {
           return false;
        }
    }
    return true;
}
