#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void first();
void second();

int main() {
    SetConsoleOutputCP(1251);
    first();
    second();
}
    void first() {
        bool p, q;
        // ввід значень p та q
        cout << "Введіть значення істинності для p та q (True - 1 або False - 0):\n";
        cout << "p = ";
        cin >> p;
        cout << "q = ";
        cin >> q;
        cout << endl;

        // кон'юнкція
        cout << "p AND q = " << (p && q) << endl;

        // диз'юнкція
        cout << "p OR  q = " << (p || q) << endl;

        // альтернативне "або"
        cout << "p XOR q = " << (p ^ q) << endl;

        // імплікація p → q
        cout << "p ->  q = " << ((!p) || q) << endl;

        // імплікація q → p
        cout << "q <-  p = " << ((!q) || p) << endl;

        // еквівалентність p ~ q
        cout << "p  ~  q = " << ((!p || q) && (!q || p)) << endl;
        cout << endl;
}
    void second() {
        string a = "111100000",
               b = "101010011";
        int n = a.length();
        string x = "";
        string y = "";
        string z = "";
        char c;
        bool aa, bb, cc;
        for (int i = 0; i < n; i++) {
            aa = (a[i] == '1');
            bb = (b[i] == '1');

            // OR operation
            cc = (aa || bb);
            c = cc ? '1' : '0';
            x = x + c;
            // AND operation
            cc = (aa && bb);
            c = cc ? '1' : '0';
            y = y + c;
            // XOR operation
            cc = (aa != bb);
            c = cc ? '1' : '0';
            z = z + c;
        }
        // Output results
        cout << "a:      " << a << endl;
        cout << "b:      " << b << endl;
        cout << "OR:     " << x << endl;
        cout << "AND:    " << y << endl;
        cout << "XOR:    " << z << endl;

    }
    