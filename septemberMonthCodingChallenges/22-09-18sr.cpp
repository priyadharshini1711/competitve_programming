#include <iostream>

#include <string.h>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int x, y;
  x = s1.length();
  y = s2.length();
  int c = 0;
  int i;
  string s3;
  for (i = 0; i < x;) {
    s3 = s1.substr(i, i + y - 1);
    cout << s3 << "\n";
    if (s2 == s3) {
      c++;
      i = i + y;
    } else {
      i = i + 1;
    }
  }
  cout << c;
  return 0;
}

/*
output1:
hellohi
hi
h
el
llo
lohi
ohi
hi
1

output2:
hello
hi
h
el
llo
lo
o
0
*/