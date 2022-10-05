#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string s[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    int loader[N];
    for (int i = 0; i < N; i++) {
        loader[i] = 0;
    }

    int j = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == "T") {
            loader[j] = loader[j - 1] * 2;
            j++;
        }

        else if (s[i] == "R") {
            loader[j - 1] = 0;
            j--;
        }
        else if (s[i] == "+") {
            loader[j] = loader[j - 1] +loader[j - 2];
            j++;
        }
        else {
            loader[j] = stoi(s[i]);
            j++;
        }
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += loader[i];
    }
    cout<<sum<<endl;
    return 0;
}
