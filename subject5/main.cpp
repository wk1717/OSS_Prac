#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
    int id;
    string name;
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "학번을 입력하세요: ";
    cin >> id;

    cout << "\n<출력>\n";
    cout << "이름: " << name;
    cout << "\n학번: " << id;
}