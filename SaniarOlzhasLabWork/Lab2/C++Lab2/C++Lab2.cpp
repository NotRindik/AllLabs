#include <iostream> 

#include <cmath> 

using namespace std;

class Vector2 {

public:

    float x;

    float y;

    Vector2(float x, float y) {

        this->x = x;

        this->y = y;

    };

    float Distance() {

        return sqrt(powf(x, 2) + powf(y, 2));

    };

    int WhitchQuater() {

        if (x > 0 && y > 0)

            return 1;

        else if (x < 0 && y > 0)

            return 2;

        else if (x < 0 && y < 0)

            return 3;

        else if (x > 0 && y < 0)

            return 4;

        else

            return 0;

    };

};


void ExerciseOne() {

    double a;

    double b;

    cout << "a= ";

    cin >> a;

    cout << endl;

    cout << "b= ";

    cin >> b;

    cout << endl;

    double SumOfQuadrats = pow(a, 2) + pow(b, 2);

    double QuadratOfSum = pow(a + b, 2);



    if (SumOfQuadrats > QuadratOfSum)

        cout << "Sum of quadrats will be bigger = " << SumOfQuadrats << endl;

    else if (SumOfQuadrats == QuadratOfSum)

        cout << "Both is equal" << SumOfQuadrats << " + " << QuadratOfSum << endl;

    else

        cout << "Quadrat Of Sum will be bigger = " << QuadratOfSum << endl;

};



void ExerciseTwo() {

    float seniority;

    float salary;



    cout << "seniority= ";

    cin >> seniority;

    cout << endl;

    cout << "salary= ";

    cin >> salary;

    cout << endl;



    if (seniority >= 2 && seniority < 5) {

        salary *= 1.02f;

        cout << "salary was increased to 2% = " << salary << endl;

    }

    else if (seniority >= 5 && seniority < 10) {

        salary *= 1.05f;

        cout << "salary was increased to 5% = " << salary << endl;

    }

    else

    {

        cout << "You looser, you work to long here. Your salary dont increase = " << salary << endl;

    }



};

void ExerciseThree() {

    float x0;

    float y0;

    float x1;

    float y1;

    cout << "x0:";

    cin >> x0;

    cout << "y0:";

    cin >> y0;

    cout << "x1:";

    cin >> x1;

    cout << "y1:";

    cin >> y1;



    Vector2 A(x0, y0);

    Vector2 B(x1, y1);

    if (A.Distance() > B.Distance()) {

        cout << "Point A further than B \n";

    }

    else if (A.Distance() == B.Distance())

    {

        cout << "Point A equal to point B \n";

    }

    else

    {

        cout << "Point B further than A \n";

    }



};

void ExerciseFour() {

    float a;

    float b;

    float c;

    cout << "a:";

    cin >> a;

    cout << "b:";

    cin >> b;

    cout << "c:";

    cin >> c;

    if (a > c || b > c) {

        cout << "'c' can't be lower than a or b \n";

        return;

    }



    if (pow(c, 2) == (pow(a, 2) + pow(b, 2))) {

        cout << "This is right angular triangle, you are TRUE \n";

    }

    else

    {

        cout << "This is Not right angular triangle, you are TRUE \n";

    }



};

void PositiveToQuadrat(float a) {

    if (a > 0)

    {

        a = powf(a, 2);

        cout << "Quadrat is: " << a << endl;

    }

    else

    {

        cout << "Number is Negative" << a << endl;

    }

}

void ExerciseFive() {

    float a, b, c;

    cout << "a:";

    cin >> a;

    cout << "b:";

    cin >> b;

    cout << "c:";

    cin >> c;

    PositiveToQuadrat(a);

    PositiveToQuadrat(b);

    PositiveToQuadrat(c);

};

void ExerciseSix() {

    float x;

    float y;

    cout << "x:";

    cin >> x;

    cout << "y:";

    cin >> y;

    Vector2 A(x, y);

    if (A.WhitchQuater() != 0)

    {

        cout << "Quater of this Vector equals to: " << A.WhitchQuater() << endl;

    }

    else

    {

        if (A.x == 0 && A.y == 0)

        {

            cout << "Point on center";

        }

        else if (A.x == 0) {

            cout << "Point on oY";

        }

        else {

            cout << "Point on oX";

        }

    }

};

void ExerciseSeven() {

    float x, y, R;

    cin >> x >> y >> R;

    Vector2 A(x, y);



    if (A.Distance() <= R) {

        cout << "Point in Radius";

    }

    else

    {

        cout << "Point NOT in Radius";

    }

};

void ExerciseEight() {

    float a1, b1, c1, a2, b2, c2, S1, S2, p1, p2;

    cin >> a1;

    cin >> b1;

    cin >> c1;

    cin >> a2;

    cin >> b2;

    cin >> c2;

    p1 = (a1 + b1 + c1) / 2;

    p2 = (a2 + b2 + c2) / 2;

    S1 = sqrt(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1));

    S2 = sqrt(p2 * (p2 - a2) * (p2 - b2) * (p2 - c2));

    if (S1 > S2) {

        cout <<"S1= "<< S1;
    }
    else if (S1 < S2)
    {

        cout << "S2= " << S2;

    }
    else
    {

        cout << "They are equal";

    }

};

void ExerciseNine() {
    float a, R;
    cin >> a >> R;

    float Ssquare = powf(a, 2);
    float Swheel = 3.14f * powf(R, 2);

    if (Ssquare > Swheel) {
        cout << "Square= " << Ssquare;
    }
    else if (Ssquare < Swheel)
    {
        cout << "Wheel= " << Swheel;
    }
    else
    {
        cout << "They are equal";
    }
};


void ExcerciseTen() {

    float a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a > 0) {
        a = powf(a, 3);
    }
    else
    {
        a = 0;
    }
    cout << a << endl;
    if (b > 0) {
        b = powf(b, 3);
    }
    else
    {
        b = 0;
    }
    cout << b << endl;

    if (c > 0) {
        c = powf(c, 3);
    }
    else
    {
        c = 0;
    }
    cout << c << endl;
};

void ExerciseEleven() {
    int N;

    cin >> N;

    if ((N % 2) == 0) {
        cout << "Even number";
    }
    else {
        if (N % 10 == 3) {
            cout << "End with 3";
        }
        else {
            cout << "Just Natural number";
        }
    }
};

void ExerciseTwelve() {

    double x, y;
    cin >> x >> y;

    Vector2 A(x, y);
    if (A.WhitchQuater() == 1) {
        cout << "A staying on firs quater";
    }
    else
    {
        cout << "A NOT stay on first quater";
    }
};

void ExerciseThirteen() {

    double depositSum, depositTermInMonth;
    cin >> depositSum;
    cin >> depositTermInMonth;

    if (depositTermInMonth == 6) {
        depositSum *= 1.06;
    }
    else if (depositTermInMonth == 12) {
        depositSum *= 1.08;
    }
    else
    {
        cout << "Invalid deposit term";
    }
    cout << "You will earn = " << depositSum;
};

void Exercise2One() {
    double a, b,HalfSumOfAbsoluteValues,sqareRootOfSumModule,moduleSum;
    cin >> a >> b;

    if (a < 0) {
        a *= -1;
    }

    if (b < 0) {
        b *= -1;
    }   
    moduleSum = (a + b);
    HalfSumOfAbsoluteValues = moduleSum / 2;
    sqareRootOfSumModule = moduleSum * moduleSum;

    cout << "Half Sum Of Absolute Values = " << HalfSumOfAbsoluteValues << endl;
    cout << "sqare Root Of Sum Module = " << sqareRootOfSumModule << endl;
};

void Exercise2Two() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == b && c != a) {
        cout << "isosceles triangle";
    }
    else if (a == c && b != a)
    {
        cout << "isosceles triangle";
    }
    else if (b == c && b != a)
    {
        cout << "isosceles triangle";
    }
    else {
        cout << "NOT isosceles triangle";
    }
};

void Exercise2Three() { 
    int year;
    string era;
    cout << "write year: ";
    cin >> year;
    cout << "write era (AD or BC)= ";
    cin >> era;
    if (year % 4 == 0 && year % 100 != 0) {
        if (era == "AD") {
            cout << year << " год нашей эры - високосный";
        }
        else if (era == "BC")
        {
            cout << year << " год до нашей эры - високосный";
        }
        else
        {
            cout << "ERORR ERA";
        }
    }
    else
    {
        if (era == "AD") {
            cout << year << " год нашей эры - не високосный";
        }
        else if (era == "BC")
        {
            cout << year << " год до нашей эры - не високосный";
        }
        else
        {
            cout << "ERORR ERA";
        }
    }
};

void Exercise2Four() {
    double cost;
    cin >> cost;

    if (cost > 1000) {

        cost -= (cost*0.10);
        cout << "Cost with discount equal to = " << cost;
    }
    else
    {
        cout << "Cost equal to = " << cost << " without discount";
    }
};
void Exercise2Five() {
    double weight;
    double height;;
    cin >> weight >> height;

    double idealWeight = height - 100;

    cout << "Ваш идеальный вес: " << idealWeight << " кг." << endl;

    if (idealWeight < weight) {
        cout << "Вам рекомендуется похудеть." << endl;
    }
    else if(idealWeight > weight)
    {
        cout << "Вам рекомендуется набрать вес." << endl;
    }
    else
    {
        cout << "Ваш вес идеален." << endl;
    }
};

void Exercise2Six() {
    string quetion = "Что такое переменная в программировании?";

    cout << quetion << endl;

    int answerIndex;

    cout << "(1) Это хранилише данных / " <<"(2) Это многомерная структура данных со своей индексацией / " << "(3) Это паттерн проэктирования" << endl;
    cout << "Введите ответ от (1-3): ";
    cin >> answerIndex;

    switch (answerIndex)
    {
    case 1:
        cout << "Правильно";
        break;
    case 2:
        cout << "Не правильно";
        break;
    case 3:
        cout << "Не правильно";
        break;
    default:
        cout << "Ошибка при выборе ответа";
        break;
    }
};

void Exercise2Eight() {

    double a, b, c;

    cout << "Введите 2 однозначных числа и их пройзведение: ";
    cin >> a >> b >> c;

    if (c == (a * b)) {
        cout << "Правильно" << endl;
    }
    else
    {
        cout << "Не правильно, ответ: " << (a * b) << endl;
    }
};

void Excercise2Nine() {

    double duration, costPerMinute, totalCost;
    int DayOfTheWeek;

    cout << "Введите продолжительность разговора (в минутах): ";
    cin >> duration;
    cout << "Введите стоимость минуты разговора: ";
    cin >> costPerMinute;
    cout << "Введите день недели (1 - Понедельник, 7 - Воскресенье): ";
    cin >> DayOfTheWeek;

    totalCost = duration * costPerMinute;
    if (DayOfTheWeek == 6 || DayOfTheWeek == 7) {
        totalCost *= 0.8;
    }

    cout << "Стоимость переговоров: " << totalCost << " грн" << endl;
};
void Excercise2Ten() {

    double cost;

    cout << "Введите сумму покупки: ";
    cin >> cost;

    if (cost > 1000) {
        cost *= 0.9;
    }
    else if (cost > 500) {
        cost *= 0.95; 
    }

    cout << "Итоговая сумма с учетом скидки: " << cost << " грн" << endl;
};

void Excercise2Eleven() {

    int month;

    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Ошибка: недопустимый номер месяца." << endl;
    }
    else if (month == 12 || month == 1 || month == 2) {
        cout << "Зима" << endl;
    }
    else if (month >= 3 && month <= 5) {
        cout << "Весна" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << "Лето" << endl;
    }
    else {
        cout << "Осень" << endl;
    }
};

void Excercise2Eleven() {

    double x1, y1, x2, y2, x3, y3;

    cout << "Введите координаты точки A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты точки C (x3, y3): ";
    cin >> x3 >> y3;

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1)) {
        cout << "Точки лежат на одной прямой." << endl;
    }
    else {
        cout << "Точки не лежат на одной прямой." << endl;
    }
};

void Excercise3One() {
    float y, u, x;

    int chooseVariation;

    cout << "x: ";
    cin >> x;

    cout << "Choose u variation, 1-sinx/2-cosx/3-tanx: ";

    cin >> chooseVariation;

    switch (chooseVariation) 
    {
        case 1:
            u = sin(x); 
        break;
        case 2:
            u = cos(x); 
        break;
        case 3:
            u = tan(x); 
        break;
        default:
            cout << "Fail variation"; 
        break;
    }

    if ((u + x) < -0.5)
        y = (pow(2u + 1, 2)) / (7 * 3.14 + x);
    else if ((u + x) >= -0.5 and (u + x) <= pow(10, -3))
        y = pow(cos(u), 2) - sin(u / 3);
    else if ((u + x) > pow(10, -3))
        y = (log(u + x) - exp(x)) / (3.5 * x);

    cout << "y= " << y;
};

void Excercise3Two() {

    float y, a, b, z, x;

    int variableVariation;

    cout << "x: ";
    cin >> x;

    cout << "Choose variable variations:";
    cin >> variableVariation;

    switch (variableVariation) {
        case 1:
            a = 0.4, b = 2.3, z = exp(2 * x); 
        break;
        case 2:
            a = 0.2, b = 0.8, z = exp(x); 
        break;
        case 3:
            a = 0.7, b = 8.1, z = 0.8; 
        break;
        default:
            cout << "Fail variation"; 
        break;
    }

    if (x < (3.5 * a))
        y = (a * b * x) - pow(cos(z * x), 2);
    else if ((3.5 * a) <= x and x <= b)
        y = pow(a - x, 2) - log(z + x);
    else if (x > b)
        y = sqrt(b * x - a + pow(z * x, 2));

    cout << "y= " << y;
};

void Excercise3Three() {

    float y, a, b, n, m, x;

    int variableVariation;

    cout << "x: ";
    cin >> x;

    cout << "Choose var variation:";

    cin >> variableVariation;

    switch (variableVariation) 
    {
        case 1:
            b = -1.6, m = 0.9, n = -1.4; 
            break;
        case 2:
            b = 4.5, m = -2, n = 2.2; 
            break;
        case 3:
            b = -4.5, m = 0.5, n = -1.5; 
            break;
        default:
            cout << "Fail variation"; 
            break;
    }
    if (abs(b * m) > pow(x, 2))
        y = sin(b * m + cos(n * x));
    else if (abs(b * m) < pow(x, 2))
        y = cos(b * m - sin(x));
    else if (abs(b * m) == pow(x, 2))
        y = sqrt(exp(cos(x)) + sqrt(abs(b * m * x)));
    cout << "y= " << y;
};

void Excercise3Four() 
{
    float y, a, b, z, x;

    int variableVariation;

    cout << "x: ";
    cin >> x;

    cout << "Choose type var variation:";
    cin >> variableVariation;

    switch (variableVariation) 
    {
        case 1:
            a = 0.2, b = 0.5, z = exp(a * x); 
            break;
        case 2:
            a = 0.15, b = 0.2, z = exp(2 * a * x); 
            break;
        case 3:
            a = 0.9, b = 5, z = exp(2.5 * a * x); 
            break;
        default:
            cout << "Fail variation"; 
            break;
    }

    if (x < -log(a))
        y = a * pow(sin(x), 2) + b * cos(z * x);
    else if (-log(a) <= x and x <= b)
        y = pow(a, b) - pow(cos(a + z * x), 3);
    else if (x > b)
        y = sqrt(pow(2.5 * a, 3) + pow(b - z * pow(x, 2), 6));

    cout << "y= " << y;
};

void Excercise3Five()
{
    float y, a, b, c, x;
    int variableVariation;

    cout << "x:";
    cin >> x;

    cout << "Choose type var variation:";
    cin >> variableVariation;

    switch (variableVariation) {
    case 1:
        a = 4.2, b = 5.3, c = 1.5; break;
    case 2:
        a = -0.35, b = 1.8, c = -1.8; break;
    case 3:
        a = 2.8, b = -0.6, c = 2.0; break;
    default:
        cout << "Fail variation"; break;
    }

    if (exp(a + b) > exp(x))
        y = sin(exp(a + b)) + pow(x, 2);
    else if (exp(a + b) == exp(x))
        y = atan(a * b * c) + pow(x, 1 / 3);
    else if (exp(a + b) < exp(x))
        y = cos(sqrt(abs(x + a * b * c)));

    cout << "y=" << y;
};

void Excercise3Six()
{
    float y, a, b, z, x;

    int variableVariation;
    cout << "x:";
    cin >> x;
    cout << "Choose type var variation:";
    cin >> variableVariation;
    switch (variableVariation) {
        case 1:
            a = -5, b = 2.5, z = log(pow(b * x, 3)); 
        break;
        case 2:
            a = 3, b = 5, z = log(b * x); 
        break;
        case 3:
            a = -10, b = 3, z = log(pow(b * x, 2)); 
        break;
        default:
            cout << "Fail variation"; 
        break;
    }
    if (x < a)
        y = 2.8 * pow(sin(a * x), 2) - b * pow(x, 3) * z;
    else if (a <= x and x <= pow(b, 2))
        y = z * pow(cos(a * x + b), 2) + log(z);
    else if (x > pow(b, 2))
        y = exp(2.5 * a * x) + z * a * b * x;

    cout << "y=" << y;
};

void Excercise3Seven()
{
    float y, a, b, c, x;
    int varVariation;

    cout << "x:";
    cin >> x;

    cout << "var variation";

    cin >> varVariation;

    switch (varVariation) {
        case 1:
            a = 3.2, b = -0.7, c = 2.2; 
            break;
        case 2:
            a = 10.5, b = -2.5, c = 5.6; 
            break;
        case 3:
            a = 5.4, b = 3, c = 2.6; 
            break;
        default:
            cout << "FAIL"; 
            break;
    }
    if ((abs(1 - pow(x, 2))) == (a + c))
        y = x * exp(a) + exp(abs(b * c));
    else if ((abs(1 - pow(x, 2))) > (a + c))
        y = pow(sin(a * x), 2) + cos(b * c);
    else if ((abs(1 - pow(x, 2))) < (a + c))
        y = sqrt(a * pow(b, 4) + pow(c * pow(x, 2), 1 / 5));

    cout << "y=" << y;
};

void Excercise3Eight()
{
    float y, k, m, n, x;

    int varVariation;

    cout << "x:";
    cin >> x;

    cout << "Choose variable variation:";

    cin >> varVariation;

    switch (varVariation) {
        case 1:
            k = 3.1, m = 5.15, n = -1.15; 
            break;
        case 2:
            k = 0.78, m = -2.4, n = 4.36; 
            break;
        case 3:
            k = 1.1, m = 0.8, n = 0.41; 
            break;
        default:
            cout << "Failed"; 
            break;
    }

    if (pow(x, 2) > (m + n))
        y = log(abs(m * x + n));
    else if (pow(x, 2) == (m + n))
        y = exp(cos(abs(m * x - n)));
    else if (pow(x, 2) < (m + n))
        y = pow(pow(k, 2) + pow(cos(x), 2), 1 / 3);

    cout << "y=" << y;
};

void Excercise3Nine()
{
    float y, a, b, z, x;

    int varVariation;

    cout << "x:";
    cin >> x;

    cout << "choose variable variation:";
    cin >> varVariation;

    switch (varVariation) {
        case 1:
            a = 1.2, b = 7.2, z = exp(x); 
            break;
        case 2:
            a = -1.5, b = 3.2, z = exp(2 * x); 
            break;
        case 3:
            a = 1.7, b = 5.5, z = exp(3); 
            break;
        default:
            cout << "Choose 1-3"; 
            break;
    }
    if (x < pow(a, 3))
        y = a * pow(sin(x), 2) + b * cos(z * x + a);
    else if (pow(a, 3) <= x and x <= b)
        y = pow(a + b * x, 2) - sin(a + z * x);
    else if (x > b)
        y = sqrt(x - (sin(b * x + z)));

    cout << "y=" << y;
};

void Excercise3Ten()
{
    float y, a, b, c, x;
    int varVariation;

    cout << "x:";
    cin >> x;

    cout << "choose variable variation:";
    cin >> varVariation;

    switch (varVariation) {
        case 1:
            a = 0.1, b = 9.8, c = 11.12; 
            break;
        case 2:
            a = 10, b = 10.05, c = 6.2; 
            break;
        case 3:
            a = 100, b = 3.03, c = 7.12; 
            break;
        default:
            cout << "Choose 1-3";
            break;
    }

    if (log10(a) < x)
        y = pow(pow(b, 2) + sqrt(abs(x + c)), 1 / 3);
    else if (log10(a) == x)
        y = cos(x - b - c);
    else if (log10(a) > x)
        y = sin(x + a - b);

    cout << "y=" << y;
};


int main()
{
    setlocale(LC_ALL, "RU");
    //BASE LEVEL
    
    //ExerciseOne(); 

    //ExerciseTwo(); 

    //ExerciseThree(); 

    //ExerciseFour(); 

    //ExerciseFive(); 

    //ExerciseSix(); 

    //ExerciseSeven(); 

    //ExerciseEight();

    //ExerciseNine();

    //ExcerciseTen();

    //ExerciseEleven();

    //ExerciseTwelve();

    //ExerciseThirteen();

    //Level2

    //Exercise2One();

    //Exercise2Two();

    //Exercise2Three();

    //Exercise2Four();

    //Exercise2Five();

    //Exercise2Six();

    //Exercise2Seven();

    //Exercise2Eight();

   // Excercise2Nine();
   // 
    //Excercise2Ten();

    //Excercise2Eleven()

    //Level3

    //Excercise3One();
    // 
    //Excercise3Two();
    // 
    //Excercise3Three();
    // 
    //Excercise3Four();
    // 
    //Excercise3Five();
    // 
    //Excercise3Six();
    // 
    //Excercise3Seven();
    // 
    //Excercise3Eight();
    // 
    //Excercise3Nine();
    // 
    //Excercise3Ten();

    return 0;
};