#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  char c = ' ';
  bool flag = true;
  do{
    c = getchar();
    if(c == EOF){
        break;
    }
    if (c == '"') {
      if (flag) {
        cout << "``";
      } else {
        cout << "''";
      }
      flag = !flag;
    } else {
      cout << c;
    }
  }while (true) ;
  return 0;
}
