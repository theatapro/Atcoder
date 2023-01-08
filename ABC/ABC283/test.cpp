#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int main() {
 
  // 文字列
  string str; // 文字列変数を宣言
 
  str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入
 
  cout << str.at(0) << endl; // 1つ目である'a'を出力
 
  cout << str.size() << endl; // 文字列の長さである4を出力
 
 
  // 配列
  vector<int> vec = { 25, 100, 64 };
 
  cout << vec.at(0) << endl; // 1つめである25を出力
 
  cout << vec.size() << endl; // 配列の長さである3を出力
}