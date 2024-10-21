#include<iostream>
#include<string>
using namespace std;

void f(int size, int start, string current, int arr[]) {

    int i;
    if (current != "") {
        cout << "(" << current << ")" << endl;
    }

    for (i = start; i < size; i++) {
        if (current != "") {
            f(size, i + 1, current + "," + to_string(arr[i]), arr);
        }
        else
            f(size, i + 1, to_string(arr[i]), arr);
    }

}

int main() {
    int a, b, c;
    int s[3];
    cin >> a >> b >> c;
    s[0] = a;
    s[1] = b;
    s[2] = c;
    cout << "()" << endl;
    f(3, 0, "", s);

    return 0;
}

