#include<iostream>
#include<string>

using namespace std;

int main()
{
  string word;
  while(word != "exit")
    {
      cout << "gimme a word." << endl;
      cin >> word;
      cout << "what kinda word is that... " << word << endl;
    }
  return 0;
}
