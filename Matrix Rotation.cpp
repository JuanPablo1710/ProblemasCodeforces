#include <iostream>
using namespace std;

bool check(int m[2][2]){
   return m[0][0] < m[0][1] && m[1][0] < m[1][1] && m[0][0] < m[1][0] && m[0][1] < m[1][1];
}

void rota(int m[2][2]){
   int x = m[0][0];
   m[0][0] = m[1][0];
   m[1][0] = m[1][1];
   m[1][1] = m[0][1];
   m[0][1] = x;
}

int main(){

   int t;
   cin >> t;
   int mt[2][2];

   while (t--) {
      for(int i = 0; i < 2; i++) for(int k = 0; k < 2; k++) cin >> mt[i][k];

      bool flag = true;

      if(check(mt)){
         cout << "YES \n";
         continue;
      }
      rota(mt);

      if(check(mt)){
         cout << "YES \n";
         continue;
      }
      rota(mt);

      if(check(mt)){
         cout << "YES \n";
         continue;
      }
      rota(mt);

      if(check(mt)){
         cout << "YES \n";
         continue;
      }

      cout << "NO \n";
   }

   return 0;
}
