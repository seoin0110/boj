#include <iostream>
#include <string>
using namespace std;

int gwaza[26];
int bs[26];
int ans = 1000;
int main(void){
  int n;
  string s;
  string bs_s = "BRONZESILVER";
  cin >> n;
  cin >> s;
  for(int i = 0; i < bs_s.length();i++){
    bs[bs_s[i]-'A']++;
  }
  for(int i = 0; i < s.length();i++){
    gwaza[s[i]-'A']++;
  }
  for(int i = 0; i < 26;i++){
    if(bs[i] > 0){
      ans = min(ans, gwaza[i] / bs[i]);
    }
  }
  cout << ans;

  return 0;
}