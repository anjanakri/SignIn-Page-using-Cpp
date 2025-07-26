#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

//Centre Alginment Function
void centerText(string text, int width = 80) {
    int padding = (width - text.length()) / 2;
    for (int i = 0; i < padding; i++) cout << " ";
    cout << text << endl;
}

void login();
void signup();
void forgot();

int main() {
    centerText("====================================================================");
    centerText("Welcome");
    centerText("_________________Menu_________________");
    cout<<"1.   Sign In\n";
    cout<<"2.   Sign Up\n";
    cout<<"3.   Forgot Password\n";
    cout<<"4.   Exit\n";
    int c;
    cout<<"Enter your choice\n";
    cin>> c;
    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        signup();
        break;
    case 3:
        forgot();
        break;
    case 4:
        return 1;
        break;
    default:
        cout<<"Invalid Choice\nKindly choice from above menu only";
        break;
    }

    return 0;
}
void login(){
    cout<<"hELLO";
}
void signup(){
    cout<<"hELLO";
}
void forgot(){
    cout<<"hELLO";
}