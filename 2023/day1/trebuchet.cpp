#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main() {
  ifstream myfile;
  myfile.open("input.txt");

  int totalSum = 0;

  string s;
  while (myfile >> s && myfile.is_open()) {
    int start = 0, end = s.length() - 1;
    char first = '0', last = '0';

    while (start <= end) {

      if (first != '0' && last != '0') {
        break;
      }

      if (first == '0') {
        if (s[start] == '1' || s[start] == '2' || s[start] == '3' ||
            s[start] == '4' || s[start] == '5' || s[start] == '6' ||
            s[start] == '7' || s[start] == '8' || s[start] == '9') {
          first = s[start];
        } else {
          start++;
        }
      }

      if (last == '0') {
        if (s[end] == '1' || s[end] == '2' || s[end] == '3' || s[end] == '4' ||
            s[end] == '5' || s[end] == '6' || s[end] == '7' || s[end] == '8' ||
            s[end] == '9') {
          last = s[end];
        } else {
          end--;
        }
      }
    }
    string temp = "";
    temp += first;
    temp += last;
    totalSum += stoi(temp);
  }

  cout << totalSum;
}
