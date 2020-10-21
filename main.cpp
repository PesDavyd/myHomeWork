#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

#define M_PI 3.14159265358979323846

//complite
void first_first(){
    cout << "Nikita\n\n";
}

//complete
void second_first(){
    double a, b;

    cout << "Input a: ";
    while(!(cin >> a)){
        cout << "Input a: ";
        cin >> a;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input b: ";
    while(!(cin >> b)){
        cout << "Input b: ";
        cin >> b;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if(b != 0) cout << "1 / b = " << a / b << endl;

    cout << endl;
}

//complite
void third_first(){
    double a, b;

    cout << "Input b: ";
    while(!(cin >> a)){
        cout << "Input b: ";
        cin >> a;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input c: ";
    while(!(cin >> b)){
        cout << "Input c: ";
        cin >> b;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(a == 0 && b == 0) cout << "X can be anynumber\n\n";
    else if(a == 0 && b != 0) cout << "X can`t be found\n\n";
    else if(a != 0 && b == 0) cout << "X = 0";
    else cout << -b / a << "\n\n"; 
}

//complite
void fourth_first(){
    double a, b, c;

    cout << "Input a: ";
    while(!(cin >> a)){
        cout << "Input a: ";
        cin >> a;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input b: ";
    while(!(cin >> b)){
        cout << "Input b: ";
        cin >> b;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input c: ";
    while(!(cin >> c)){
        cout << "Input c: ";
        cin >> b;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(a == 0){
        if(b == 0){
            if(c == 0){
                cout << "X can be anynumber\n\n";
            }else{
                cout << "X can`t be found\n\n";
            }
        }else{
            if(c == 0){
                cout << "X = 0\n\n";
            }else{
                cout << -c / b << "\n\n";
            }
        }
    }else{
        if(b == 0){
            if(c == 0){
                cout << "X = 0";
            }else{
                if(-c / a >= 0){
                    cout << "X = " << sqrt(-c / a) << "\n\n";
                }else{
                    cout << "X can`t be found\n\n";
                }
            }
        }else{
            if(c == 0){
                cout << "X = 0; " << -b / a;
            }else{
                double d = b * b - 4 * a * c;
                if(d > 0){
                    cout << "X = " << (-b + sqrt(d)) / (2 * a) << "; " << (-b - sqrt(d)) / (2 * a) << "\n\n";
                }else if(d == 0){
                    cout << "X = " << -b / (2 * a) << "\n\n";
                }else{
                    cout << "X can`t be found\n\n";
                }
            }
        }
    }
}

//complite
int fiveth_first(){ 
    string lamp, curtains, day;

    while(true){
        cout << "Lamp is toggled? (+/-): ";
        cin >> lamp;
        if(lamp == "+" || lamp == "-") break;
    }

    if(lamp == "+"){
        cout << "Room is lit\n\n";
        return 0;
    }else{
        while(true){
            cout << "At now is day? (+/-): ";
            cin >> day;
            if(day == "+" || day == "-") break;
        }

        if(day == "-"){
            cout << "Room doesn`t lit\n\n";
            return 0;
        }else{
            while(true){
                cout << "Curtains are open? (+/-): ";
                cin >> curtains;
                if(curtains == "+" || curtains == "-") break;
            }

            if(curtains == "+"){
                cout << "Room is lit\n\n";
                return 0;
            }else{
                cout << "Room doesn`t lit\n\n";
                return 0;
            }
        }
    }
    return 0;
}

//complete
bool first_second(){
    double R, r, h, l;

    cout << "Input R: ";
    while(!(cin >> R)){
        cout << "Input R: ";
        cin >> R;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input r: ";
    while(!(cin >> r)){
        cout << "Input r: ";
        cin >> r;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(R <= r){
        cout << "Logical fall\n\n";
        return false;
    }

    cout << "Input l: ";
    while(!(cin >> l)){
        cout << "Input l: ";
        cin >> l;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input h: ";
    while(!(cin >> h)){
        cout << "Input h: ";
        cin >> h;
        cin.clear();
        while(cin.get() != '\n') continue;
    }    

    cout << "V = " <<  M_PI * 1. / 3. * h * (R * R + R * r + r * r) << '\n';
    cout << "S = " << M_PI * (R * R + (R * r) * l + r * r) << "\n\n";

    return true;
}

//complite
void second_second(){
    double a, x;

    cout << "Input a: ";
    while(!(cin >> a)){
        cout << "Input a: ";
        cin >> a;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input x: ";
    while(!(cin >> x)){
        cout << "x: ";
        cin >> x;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(abs(x) < 1){
        if(x > 0){
            cout << "w = " << a * log(x) << "\n\n";
        }else{
            cout << "error\n\n";
        }
    }else{
        if(a - x * x >= 0){
            cout << "w = " << sqrt(a - x * x) << "\n\n";
        }else{
            cout << "error\n\n";
        }
    }
}

//complite
void third_second(){
    double x, b, y;

    cout << "Input x: ";
    while(!(cin >> x)){
        cout << "Input x: ";
        cin >> x;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input b: ";
    while(!(cin >> b)){
        cout << "Input b: ";
        cin >> b;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input y: ";
    while(!(cin >> y)){
        cout << "Input y: ";
        cin >> y;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(b - y > 0 && b - x >= 0){
        cout << "z = " << log(b - y) * sqrt(b - x) << "\n\n";
    }else{
        cout << "error\n\n";
    }
}

//complite
void fourth_second(){
    double x;

    cout << "Input x: ";
    while(!(cin >> x)){
        cout << "Input x: ";
        cin >> x;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    if(x < 0){
        for(int i = int(x)    ; i < int(x) + 10; i++) cout << i << ' ';
        cout << "\n\n";
    }else{
        for(int i = int(x) + 1; i < int(x) + 11; i++) cout << i << ' ';
        cout << "\n\n";
    }
}

//complite
void fiveth_second(){
    for(float i = -4; i < 4; i += 0.5){
        if(int(i) == i)
            if(i != 1)
                cout << "i = " << i << "   \t|\ty = " << (i * i - 2 * i + 2) / (i - 1) << '\n';
            else
                cout << "i = " << i << " \t\t|\ty = " << "--\n";
        else{
             cout << "i = " << i << "  \t|\ty = " << (i * i - 2 * i + 2) / (i - 1) << '\n';
        }
    }
    cout << "\n\n";
}

//complite
void first_third(){
    double S, p, n, r;

    cout << "Input S: ";
    while(!(cin >> S)){
        cout << "Input S: ";
        cin >> S;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input p: ";
    while(!(cin >> p)){
        cout << "Input p: ";
        cin >> p;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input n: ";
    while(!(cin >> n)){
        cout << "Input n: ";
        cin >> n;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    r = p / 100.;

    cout << "\nm = " << (S * r * pow((1 + r), n)) / (12 * pow(1 + r, n) - 1) << "\n\n";
}

// complite
void second_third(){
    double m, p, n, r;

    cout << "Input m: ";
    while(!(cin >> m)){
        cout << "Input m: ";
        cin >> m;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input p: ";
    while(!(cin >> p)){
        cout << "Input p: ";
        cin >> p;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << "Input n: ";
    while(!(cin >> n)){
        cout << "Input n: ";
        cin >> n;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    r = p / 100.;

    cout << "\nS = " << (12 * m * (pow(1 + r, n) - 1)) / (r * pow(1 + r, n)) << "\n\n";
}

//complite
int third_third(){
    ifstream fout;
    char s;
    fout.open("text.txt");

    if(!fout.is_open()){
        cout << "File doen`t found!\n\n";
        return 0;
    }

    while(fout.get(s))
        cout << s;

    cout << "\n\n";

    fout.close();
    return 0;
}

//complite
void fourth_third(){
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char temp;
    ifstream fin;

    fin.open("text.txt");

    if(!fin.is_open()){
        cout << "file doesn`t found!\n\n";
    }else{
        while(fin.get(temp)){
            for(int i = 0; i < 10; i++){
                if(temp == nums[i]){
                    cout << temp;
                    break;
                }
            }
        }
    }
    cout << "\n\n";
    fin.close();
}

//complite
void fiveth_third(){
    string str;

    for(int i = 0; i < 30; i++){
        char temp;
        bool flag = false;
        while(!flag){
            cin >> temp;
            if(tolower(temp) >= 'a' && tolower(temp) <= 'z'){
                flag = true;
                str += temp;
            }
        }
    }

    for(int i = 0; i < 29; i++){
        for(int j = i + 1; j < 30; j++){
            if(str[i] > str[j]) swap(str[i], str[j]);
        }
    }

    cout << str << "\n\n";
}

void fiveth_four(){
    string array[10][18]; //count of x = 17, count of y = 10
    array[0][0] = to_string(sin(90 * M_PI / 180));
    array[1][0] = to_string(sin(60 * M_PI / 180));
    array[2][0] = to_string(sin(45 * M_PI / 180));
    array[3][0] = to_string(sin(30 * M_PI / 180));
    array[4][0] = to_string(sin(0 * M_PI / 180));
    array[5][0] = '-' + array[3][0];
    array[6][0] = '-' + array[2][0];
    array[7][0] = '-' + array[1][0];
    array[8][0] = '-' + array[0][0];
    array[9][0] = " ";

    array[9][1] = "0";
    array[9][2] = "30";
    array[9][3] = "45";
    array[9][4] = "60";
    array[9][5] = "90";
    array[9][6] = "120";
    array[9][7] = "135";
    array[9][8] = "150";
    array[9][9] = "180";
    array[9][10] = "210";
    array[9][11] = "225";
    array[9][12] = "240";
    array[9][13] = "270";
    array[9][14] = "300";
    array[9][15] = "315";
    array[9][16] = "330";
    array[9][17] = "360";

    int x[17];
    for(int i = 0; i < 17; i++){
        x[i] = stod(array[9][i + 1]);
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 18; j++){
            double temp = sin(x[j - 1]* M_PI / 180);
            if(array[i][0] == to_string(temp)) array[i][j] = "*";
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 18; j++){
            cout << array[i][j] << '\t';
        }
        cout << '\n';
    }   
}

int main(){
    int num;
    cout << "Input number of homework: ";
    while(!(cin >> num)){
        cout << "Input number of homework: ";
        cin >> num;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    while(num != 0){
        int exe = -1;

        while(exe != 0){
            bool f_s = false;

            cout << "Input number of exaption: ";

            while(!(cin >> exe)){
                cout << "Input number of exaption: ";
                cin >> exe;
                cin.clear();
                while(cin.get() != '\n') continue;
            }
            
            switch(num){
                case 1: switch(exe){
                    case 1: first_first(); break;
                    case 2: second_first(); break;
                    case 3: third_first(); break;
                    case 4: fourth_first(); break;
                    case 5: fiveth_first(); break;
                };break;

                case 2: switch(exe){
                    case 1: while(!f_s) f_s = first_second(); break;
                    case 2: second_second(); break;
                    case 3: third_second(); break;
                    case 4: fourth_second(); break;
                    case 5: fiveth_second(); break;
                };break;

                case 3: switch(exe){
                    case 1: first_third(); break;
                    case 2: second_third(); break;
                    case 3: third_third(); break;
                    case 4: fourth_third(); break;
                    case 5: fiveth_third(); break;
                };break;
            }
        }
        cout << "Input number of homework: ";

        while(!(cin >> num)){
            cout << "Input number of homework: ";
            cin >> num;
            cin.clear();
            while(cin.get() != '\n') continue;
        }
    }

    return 0;
}
