#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
    int id;
    string name;
    string major;
    string university;

    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "학번을 입력하세요: ";
    cin >> id;
    cout << "학과를 입력하세요: ";
    cin >> major;
    cout << "학교를 입력하세요: ";
    cin >> university;

    cout << "\n<출력>\n";
    cout << "이름: " << name;
    cout << "\n학번: " << id;
    cout << "\n학과: " << major;
    cout << "\n학교: " << university;
}