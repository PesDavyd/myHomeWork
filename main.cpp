#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <vector>
#include <map>
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

//complete
void first_four(){
    ofstream fout;
    fout.open("file.txt");

    if(fout.is_open()){
        for(int i = 0; i < 10; i++){
            cout << "Input num: ";
            double temp;

            while(!(cin >> temp)){
                cout << "Input num: ";
                cin >> temp;
                cin.clear();

                while(cin.get() != '\n') continue;
            }

            fout << temp << '\n';
        }
        fout.close();
    }

    ifstream fin;
    fin.open("file.txt");

    if(fin.is_open()){
        string temp = "";
        double temp_num, sum = 0;
        while(getline(fin, temp)){
            sum += stod(temp);
            temp = "";
        }
        fin.close();
        cout << "Sum = " << sum << "\n\n";
    }
}

//helper-function
int temp_f(double x){
    if(x > 0) return 1;
    else if(x == 0) return 0;
    else return -1;
}
//complete
void second_four(){
    double x;

    cout << "Input x: ";
    while(!(cin >> x)){
        cout << "Input x: ";
        cin >> x;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    cout << temp_f(x) << "\n\n";
}

//helper-function
double triangle(){
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
        cin >> c;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    double P = a + b + c;

    return sqrt(P * (P - a) * (P - b) * (P - c));
}
//helper-function
double rectangle(){
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

    return a * b;
}
//helper-function
double circle(){
    double R;
    
    cout << "Input R: ";
    while(!(cin >> R)){
        cout << "Input R: ";
        cin >> R;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    return R * R * M_PI;
}
//complete
void third_four(){
    int search;
    cout << "Input searching S(1/2/3): ";
    while(!(cin >> search)){
        cout << "Input searching S(1/2/3): ";
        cin >> search;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    switch(search){
        case 1: cout << "S rectogle = " << rectangle() << '\n'; break;
        case 2: cout << "S triangle = " << triangle() << '\n'; break;
        case 3: cout << "S circle = " << circle() << "\n"; break;
    }
    cout << '\n';
}

//complete
void fourth_four(){
    cout << " ______________________________________\n";
    cout << "|* * * * * * * |||||||||||||||||||||||||\n";
    cout << "|* * * * * * * |_______________________|\n";
    cout << "|* * * * * * * |||||||||||||||||||||||||\n";
    cout << "|* * * * * * * |_______________________|\n";
    cout << "|* * * * * * * |||||||||||||||||||||||||\n";
    cout << "|* * * * * * * |_______________________|\n";
    cout << "|* * * * * *   |||||||||||||||||||||||||\n";
    cout << "|______________|_______________________|\n";
    cout << "||||||||||||||||||||||||||||||||||||||||\n";
    cout << "|______________________________________|\n";
    cout << "||||||||||||||||||||||||||||||||||||||||\n";
    cout << "|______________________________________|\n";
    cout << "||||||||||||||||||||||||||||||||||||||||\n\n";

}

//complite
void fiveth_four_1(){
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

//complite
void fiveth_four_2(){
    system("python3 main.py");
}

//complete
void sixth_four(){
    string chars = "IVXLCDM";
    string str = "";

    while(true){
        cout << "Input Roma number: ";
        cin >> str;

        bool flag = true;

        for(int i = 0; i < str.length(); i++){
            for(int j = 0; j < chars.length(); j++){
                if(str[i] == chars[j]){
                    flag = true;
                    break;
                }else{
                    flag = false;
                }
            }
            if(!flag) break;
        }
        if(flag) break;
    }

    map <char, int> roma = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int *array = new int [str.length()];
    for(int i = 0; i < str.length(); i++) array[i] = roma[char(str[i])];

    long long sum = 0;

    for(int i = str.length() - 1; i >= 0; i--){
        if(i == str.length() - 1) sum += array[i];
        else{
            if(array[i] < array[i + 1]) sum -= array[i];
            else sum += array[i];
        }
    }
    cout << sum;
    cout << "\n\n";
}

//complete
void seventh_four(){
    srand(time(NULL));
    
    int i = rand(), m = rand(), c = rand();
    cout << "S = " << (m * c + i) * abs(c) << "\n\n";
}

//helper-functions
float max(float a, float b){
    float max_;
    a >= b ? max_ = a : max_ = b;
    return max_;
}
float min(float a, float b){
    float min_;
    a <= b ? min_ = a : min_ = b;
    return min_;
}
//complete
void eighth_four(){
    int A[3][4] = {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}
    };

    float B[2][4] = {
        {1.2, 2.8, 5, 2},
        {0.5, 0.4, 1, 1.5}
    };

    float commission[] = {0, 0, 0};
    float pay [] = {0, 0, 0};

    float C[2][3] = {
        {0, 0, 0}, // get pay
        {0, 0, 0} // commission
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            C[0][i] += A[i][j] * B[0][j];
            C[1][i] += A[i][j] * B[1][j];
        }
    }

    float f = C[0][0], s = C[0][1], t = C[0][2];
    string max__pay, max__comm, min__pay, min__comm;

    {
        {
            float max_pay = max(f, max(s, t));
            if(f == max_pay){
                max__pay = "First seler have max. salary\n";
            }else if(s== max_pay){
                max__pay = "Second seler have max. salary\n";
            }else{
                max__pay = "Third seler have max. salary\n";
            }
        }

        {
            float max_comm = max(C[1][0], (C[1][1], C[1][2]));
            if(max_comm == C[1][0]){
                max__comm = "First seler have max. commission\n";
            }else if(max_comm == C[1][1]){
                max__comm = "Second seler have max. commission\n";
            }else{
                max__comm = "Third seler have max. commission\n";
            }
        }

        {
            float min_pay = min(f, min(s, t));
            if(f == min_pay){
                min__pay = "First seler have min. salary\n";
            }else if(s == min_pay){
                min__pay = "Second seler have min. salary\n";
            }else{
                min__pay = "Third seler have min. salary\n";
            }
        }

        {
            float min_comm = min(C[1][0], (C[1][1], C[1][2]));
            if(min_comm == C[1][0]){
                min__comm = "First seler have min. commission\n";
            }else if(min_comm == C[1][1]){
                min__comm = "Second seler have min. commission\n";
            }else{
                min__comm = "Third seler have min. commission\n";
            }
        }
    }

    float all_pay = C[0][0] + C[0][1] + C[0][2];
    float all_commission = C[1][0] + C[1][1] + C[1][2];
    float all_selary = all_pay - all_commission;
    
    cout << "1)\t" << max__pay << "\n\t" << min__pay << endl;
    cout << "2)\t" << max__comm << "\n\t" << min__comm << endl;
    cout << "3)\t" << all_selary << '\n';
    cout << "4)\t" << all_commission << '\n';
    cout << "5)\t" << all_pay << "\n\n";
}

//complete
void nineth_four(){
    string num = "";
    while(true){
        bool flag = true;

        cout << "Input number (max 16 number system): ";
        cin >> num;

        for(int i = 0; i < num.length(); i++){
            if(num[i] > 'F' || num[i] < 0) flag = false;
            if(!flag){
                break;
            }
        }

        if(flag) break;
    }

    float ons;
    cout << "Input old number system(max 16): ";
    while(!(cin >> ons) && int(ons) != ons && ons <= 16){
        cout << "Input old number system(max 16): ";
        cin >> ons;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    float nns;
    cout << "Input new number system(max 16): ";
    while(!(cin >> nns) && int(nns) != nns && nns <= 16){
        cout << "Input old number system(max 16): ";
        cin >> nns;
        cin.clear();
        while(cin.get() != '\n') continue;
    }

    map <char, int> rebrand = {
        {'0', 0},
        {'1', 1},
        {'2', 2},
        {'3', 3},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 7},
        {'8', 8},
        {'9', 9},
        {'A', 10},
        {'B', 11},
        {'C', 12},
        {'D', 13},
        {'E', 14},
        {'F', 15}
    };
    map <int, char> rerebrand = {
        {0, '0'},
        {1, '1'},
        {2, '2'},
        {3, '3'},
        {4, '4'},
        {5, '5'},
        {6, '6'},
        {7, '7'},
        {8, '8'},
        {9, '9'},
        {10, 'A'},
        {11, 'B'},
        {12, 'C'},
        {13, 'D'},
        {14, 'E'},
        {15, 'F'}
    };

    int ten = 0;
    for(int i = 0; i < num.length(); i++){ // remove to 10-ns
        ten += rebrand[num[num.length() - i - 1]] * pow(ons, i);
    }

    vector <char> vec;

    if(ten == 0) vec.push_back(rerebrand[0]);
    while(ten != 0){
        int temp = ten % int(nns);
        vec.insert(vec.begin(), rerebrand[temp]);
        ten /= nns;
    }

    cout << "New number: ";
    for(auto i: vec) cout << i;

    cout << "\n\n";
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

                case 4: switch(exe){
                    case 1: first_four(); break;
                    case 2: second_four(); break;
                    case 3: third_four(); break;
                    case 4: fourth_four(); break;
                    case 5: 
                        int k;
                        while(true){
                            cout << "Input release of example(1 | 2): ";
                            while(!(cin >> k)){
                                cout << "Input release of example(1 | 2): ";
                                cin >> k;
                                cin.clear();
                                while(cin.get() != '\n') continue;
                            }
                            if(k == 1 || k == 2) break;
                        }

                        if(k == 1) fiveth_four_1();
                        else fiveth_four_2();
                    ;break;

                    case 6: sixth_four(); break;
                    case 7: seventh_four(); break;
                    case 8: eighth_four(); break;
                    case 9: nineth_four(); break;
                }
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
