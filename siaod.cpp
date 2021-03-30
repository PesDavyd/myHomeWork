#define NOT_CREATE cout << "\nList not created\n"
#define PRINT printList(mylist)

#include <list>
#include <iostream>
#include <iterator>
using namespace std;

bool empty(const list <int>& list_) {
    if(list_.empty()) {
        return true;
    } else {
        return false;
    }
}

void createList(list <int>& list_, int range){
    if(!empty(list_)) list_.clear();

    for(int i = 0; i < range; i++) {
        cout << "Input values: ";
        int temp;
        cin >> temp;
        list_.push_front(temp);
    }
}

void avgValue(const list<int>& list_, int range) {
    int sum = 0;

    for(auto i: list_) sum += i;

    cout << "\nAverage value = " << double(sum) / double(range) << '\n';
}

void changeValue(list <int>& list_) {
    list <int> :: iterator iter;

    int have_now, change_to;
    cout << "Change valur:\t";
    cin >> have_now ;

    cout << "\nChanged value:\t";
    cin >> change_to;

    for(iter = list_.begin(); iter != list_.end(); iter++)
        if(*iter == have_now) *iter = change_to;
}

void swapValues(list <int>& list_) {
    list <int>:: iterator it_begin, it_end;

    it_begin = list_.begin();
    it_end   = list_.end();

    swap(it_begin, it_end);
}

void printList(const list <int>& list_) {
    ostream_iterator <int> iter(cout, " ");
    copy(list_.begin(), list_.end(), iter);
    cout << '\n';
}

int main() {
    list <int> mylist;
    bool flag = false;
    int range;

    while(true) {
        int exe;
        cout << "->\t";
        cin >> exe;

        switch(exe) {
            case 1:
                if(flag) {
                    if(empty(mylist)) cout << "\nList empty\n"; 
                    else {
                        cout << "\nList not empty\n";
                        PRINT;
                    }
                } else { 
                    NOT_CREATE;
                }

                break;

            case 2:
                cout << "Input list-range: ";
                cin >> range;

                createList(mylist, range);
                PRINT;

                if(!flag) flag = true;
                break;

            case 3:
                if(flag)
                    avgValue(mylist, range);

                else NOT_CREATE;

                break;

            case 4:
                if(flag) {
                    changeValue(mylist);
                    PRINT;
                }

                else NOT_CREATE;
                break;

            case 5:
                if(flag) {
                    swapValues(mylist);
                    PRINT;
                }

                else NOT_CREATE;
                break;

            case 0:
                exit(0);

            default:
                cout << "\nFunction not found, try again\n->\t";
                cin >> exe;
        }
    }
}