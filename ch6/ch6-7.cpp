#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
  int nVowel = 0;
  int nConson= 0;
  int nOther = 0;
  //char ch[20];
  string ch;
  const char vo[5] = {'a','e','i','o','u'};
  cout << "Enter words, enter q to quit." << endl;
  while (cin >> ch){     // cin can recognise word by space and enter....!
    if (isalpha(ch[0])){
      if (ch[0] == 'q'){
	break;
      }

      char temp = tolower(ch[0]);
      int i=0;
      for (i=1;i<5;++i){
	if (temp == vo[i]){
	  nVowel += 1;
	  break;
	}
      }
      if (i == 5)
	nConson += 1;
    } else {
      nOther += 1;
    } 
  }
  cout << nVowel << " words begining with vowels" << endl
       << nConson << " words begining with consonants" << endl
       << nOther << " others" << endl;
  
  return 0;
}
