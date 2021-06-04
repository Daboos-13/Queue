#include <iostream>
#include <queue>
 #include "FCIQueue.cpp"
using  namespace std;
int main() {
FCIQueue<int> qu ;

while (true) {
    cout << "welcome to queue using stack program" << endl;
    cout << "1- enqueue" << endl;
    cout << "2- dequeue" << endl;
    cout << "3- first" << endl;
    cout << "4- is empty" << endl;
    cout << "5- clear" << endl;
    cout << "6- print " << endl;
    cout << "0- exit" << endl;
    string choice;
    int value;
    cin >> choice;
    if (choice == "1") {
        cout << "enter the value : " << endl;
        cin >> value;
        qu.enqueue(value);
        qu.print();
    } else if (choice == "2") {
        if (!qu.isEmpty()) {
            cout << "item has been removed" << endl;
        }
        qu.dequeue();
        qu.print();

    } else if (choice == "5") {
        qu.clear();
        cout << "queue had been cleared " << endl;

    } else if (choice == "4") {
        if (qu.isEmpty())
            cout << "queue is empty" << endl;
        else
            cout << "queue is not empty" << endl;
    } else if (choice == "6") {
        if (!qu.isEmpty())
            qu.print();
        else
            cout<<"list is empty";
    } else if (choice == "0") {
        break;
    }else if (choice=="3"){
        if (!qu.isEmpty())
            cout<<qu.first() <<" is the first "<<endl;
        else
            cout<<"queue is already empty"<<endl;
    }
}
    return 0;

}
