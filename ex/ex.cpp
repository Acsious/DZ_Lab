#include <iostream>
using namespace std;

int main()
{
    string username;
    cout << "Как тебя зовут?";
    cin >> username;
    cout << "Рады тебя видеть, " + username + "!\n";
}