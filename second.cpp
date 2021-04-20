#include <iostream>
#define CREATED if(!flag) {std::cout << "\nList is not created\n"; break;}

struct LineList {
    int data;
    LineList *next;
};

bool isEmpty(const LineList *list) {
    if(list == NULL) return true;
    else return false;
}

void outList(LineList *List) {
    LineList *list = List;
    std::cout << "List ";

    bool flag = false;

    while(list != NULL) {
        std::cout << list -> data << ' ';
        list = list -> next;
        flag = true;
    }

    if(!flag) std::cout << " is empty\n";
    std::cout << '\n';
}

void avgValue(LineList *List) {
    LineList *list = List;

    int sum, count = sum = 0;

    while(list != NULL) {
        sum += list -> data;
        list = list -> next;
        count++;
    }

    std::cout << "\nAverage value :\t" << float(sum / float(count)) << '\n'; 
}

void changeValue(LineList *List) {
    LineList *list = List;

    int was, now;
    std::cout << "\nChanging value:\t";
    std::cin >> was;

    std::cout << "\nNew value:\t";
    std::cin >> now;

    while(list != NULL) {
        if(list -> data == was) list -> data = now;
        list = list -> next;
    }
}

void changeBeginEnd(LineList *List) {
    LineList *list = List;
    int count = 0;

    int begin, end;
    begin = List[0].data;

    for(int i = 0; i < 5; i++, std::cout << List[i].data << ' ');

    int count_ = 0;

    while(list != NULL) {
        // std::cout << "\nlist[" << count_++ << "] = \t" << list -> data << std::endl;
        if(list -> next == NULL) end = list -> data, list -> data = begin;
        list = list -> next;
    }

    LineList temp;
    bool flag_beggint, flag_ended;
    flag_beggint = flag_ended = false;

    // while()

}
    
LineList createList(){
    int range;
    std::cout << "\nInput range of list:\t";
    std::cin >> range;

    LineList *list = new LineList[range];

    int count = 0;

    while(count != range) {
        std::cout << " \nInput element [" << count << "]:\t";
        std::cin >> list[range - count++ - 1].data;
    }


    for(int i = 0; i < range - 1; i++) {
        list[i].next = &list[i + 1];
    }

    list[range - 1].next = NULL;

    std::cout << "\nList was created!\n";
    return *list;
}


int main() {
    
    LineList myList;
    bool flag = false;
    
    char operation;

    std::cout << "\n>\t";
    std::cin >> operation;

    while(true) {
        switch(operation) {
            case '1': myList = createList(); flag = true;break;
            case '2':
                CREATED;
                std::cout << "\n\nhere\n\n";
                if(isEmpty(&myList)) std::cout << "\nList is empty\n";
                else std::cout << "\nList is not empty\n";
                break;

            case '3':
                CREATED;

                avgValue(&myList);
                break;

            case '4':
                CREATED;

                changeValue(&myList);
                break;

            case '5':
                CREATED;

                changeBeginEnd(&myList);
                break;

            case '6':
                CREATED;

                outList(&myList);
                break;

            case '0':
                return 0;

            default:
                std::cout << "\nOperation not found\n";
        }
        std::cout << "\n>\t";
        std::cin >> operation;
    }
}