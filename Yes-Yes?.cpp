#include <iostream>
using namespace std;

int main(){

   int t, it, len;
   cin >> t;
   string s;
   char y[3] {'Y', 'e', 's'};

   while (t--) {
      cin >> s;
      bool flag = true;

      if(s[0] == y[0]) it = 0;
      else if (s[0] == y[1]) it = 1;
      else if (s[0] == y[2]) it = 2;
      else{
         cout << "NO" << '\n';
         continue;
      }

      len = s.length();

      for(int i = 0; i < len; i++){
         if(s[i] != y[it]){
            cout << "NO" << '\n';
            flag = false;
            break;
         }

         it++;
         if(it == 3) it = 0;
      }

      if(flag)cout << "YES" << '\n';

   }

   return 0;
}
