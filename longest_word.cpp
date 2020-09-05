#include <bits/stdc++.h>
using namespace std;


//Not completed
string LongestWord(string sen) {
  int i = 0;
  int end = 0;
  int cnt = 0, max_cnt=0;
  while(i<=sen.size())
  {
      char temp = sen[i];
    if(sen[i] - 'A'< 0 || sen[i] - 'Z' > 0 || sen[i] - 'a' < 0 || sen[i] - 'z' > 0 || i==sen.size())
    {
      if(max_cnt < cnt && max_cnt != cnt)
      {
        max_cnt = cnt;
        end = i;
        cnt = 0;
      }
      if(i==sen.size())
        break;
    }
    else
    {
      cnt++;
    }
    i++;
  }
  string ans;
  for(int i = end-max_cnt;i<end;i++)
  {
      ans = ans + sen[i];
  }  
  return ans;

}

int main(void) { 
   string sample = "I love dogs";
  // keep this function call here
  cout << LongestWord(sample);
  return 0;
    
}