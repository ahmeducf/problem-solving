/*
 * Directed by: UltraPlus {Ahmed Salah, Eslam Walid, Ahmed Hossam}
 * */

#include <bits/stdc++.h>
 
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define terminate return 0
#define space ' '
 
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
 
int main() {
    IO;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cin.ignore();
 
 
        while (n--)
        {
            string field[10];
            string author, title, journal, volume, number, pages, year;
            for (int i = 0; i < 10; ++i) {
                getline(cin, field[i]);
            }
 
            for (int i = 1; i < 9; i++) {
                switch (field[i][0]) {
                    case 'a': {
                        field[i] = field[i].substr(7, field[i].length() - 7);
                        string cur, first, second;
                        for (int j = 0; j < field[i].length(); ++j) {
                            if (isalpha(field[i][j])) {
                                cur += field[i][j];
                            } else if (field[i][j] == ' ') {
                                first = string(1, cur[0]) + string(1, cur[1]);
                                cur = "";
                            } else if (field[i][j] == ',') {
                                second = string(1, cur[0]);
                                cur = "";
                                j++;
                                author += first + ". " + second + ", ";
                            } else if (field[i][j] == '}') {
                                second = string(1, cur[0]);
                                cur = "";
                                author += first + ". " + second;
                                break;
                            }
                        }
                        break;
                    }
 
                    case 't': {
                        field[i] = field[i].substr(6, field[i].length() - 6);
                        for (int j = 0; j < field[i].length(); j++) {
                            if (isalpha(field[i][j]) || field[i][j] == ' ')
                                title += string(1, field[i][j]);
                        }
                        break;
                    }
 
                    case 'j': {
                        field[i] = field[i].substr(8, field[i].length() - 8);
                        for (int j = 0; j < field[i].length(); j++) {
                            if (isalpha(field[i][j]) || field[i][j] == ' ')
                                journal += string(1, field[i][j]);
                        }
                        break;
                    }
 
                    case 'y': {
                        field[i] = field[i].substr(4, field[i].length() - 4);
                        for (int j = 0; j < field[i].length(); j++) {
                            if (isdigit(field[i][j]))
                                year += string(1, field[i][j]);
                        }
                        break;
                    }
 
                    case 'v': {
                        field[i] = field[i].substr(7, field[i].length() - 7);
                        for (int j = 0; j < field[i].length(); j++) {
                            if (isdigit(field[i][j]))
                                volume += string(1, field[i][j]);
                        }
                        break;
                    }
 
                    case 'n': {
                        field[i] = field[i].substr(7, field[i].length() - 7);
                        for (int j = 0; j < field[i].length(); j++) {
                            if (isdigit(field[i][j]))
                                number += string(1, field[i][j]);
                        }
                        break;
                    }
 
                    case 'p': {
                        if (field[i].substr(0, 5) == "pages") {
                            field[i] = field[i].substr(6, field[i].length() - 6);
                            for (int j = 0; j < field[i].length(); j++) {
                                if (isdigit(field[i][j]) || field[i][j] == '-')
                                    pages += string(1, field[i][j]);
                            }
                        }
                        break;
                    }
                }
            }
            cout << author << ". " << title << ". " << journal << ". " << year << ";" << volume << "(" << number << "):" << pages << "." << endl;
        }
    }
    terminate;
}