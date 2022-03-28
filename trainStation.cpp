#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void input(string &name, string &date, char &trainType, string &place, int &passengers)
{
    cout << "Enter your name:  ";
    getline(cin, name);
    cout << endl;
    cout << "Enter the date ( month / Date ):  ";
    cin >> date;
    cout << endl;
    cout << "Choose your Train type     (A) => 100$     (B) =>80$       (C) => 60$      (D) => 40$      (E) => 25$  :   ";
    cin >> trainType;
    cout << endl;
    cout << "Place name:  ";
    cin >> place;
    cout << endl;
    cout << "The number of passengers:  ";
    cin >> passengers;
}
double ticketPrice(char &trainType, int &passengers)
{
    switch (trainType)
    {
    case 'A':
        return (passengers * 100);
        break;
    case 'B':
        return (passengers * 80);
        break;
    case 'C':
        return (passengers * 60);
        break;
    case 'D':
        return (passengers * 40);
        break;
    case 'E':
        return (passengers * 25);
        break;
    default:
        break;
    }
}

void shape(string &name, string &date, char &trainType, string &place, int &passengers, int &price)
{
    time_t t = time(0);
    tm *gottime = localtime(&t);
    cout << "Name : " << name << endl;
    cout << endl;
    cout << "Date : " << date << endl;
    cout << endl;
    cout << "Train Type : "
         << "(" << trainType << ")" << endl;
    cout << endl;
    cout << "Place : " << place << endl;
    cout << endl;
    cout << "passengers : "
         << "(" << passengers << ")" << endl;
    cout << endl;
    cout << "Price is : " << ticketPrice(trainType, passengers) << "$" << endl
         << endl;
    cout << "The ticket was edited in   " << gottime->tm_hour << ":" << gottime->tm_min << endl;
}

int main()
{
    string name, date, place;
    int passengers, price;
    char trainType;
    input(name, date, trainType, place, passengers);
    cout << endl;
    cout << "Here is your ticket";
    cout << endl
         << endl;
    shape(name, date, trainType, place, passengers, price);
    cout << endl
         << endl;
}