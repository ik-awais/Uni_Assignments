#include <iostream>
using namespace std;

  void average(int (&tokens)[50], int n){
    float total = 0;
    for(int i = 0; i < n; i++)
    {
      total += tokens[i];
    }
    cout << "Average Token: " << total/n << endl;
  }
  
  void highest(int (&tokens)[50], int n){
  int highest = 0;
  for(int i = 0; i < n; i++)
  {
    if(highest < tokens[i])
    {
      highest = tokens[i];
    }
  }
  cout << "Highest Token:" << highest << endl;
}

  void lowest(int (&tokens)[50], int n){
  int lowest = 32000;
  for(int i = 0; i < n; i++)
  {
    if(tokens[i] < lowest)
    {
      lowest = tokens[i];
    }
  }
  cout << "Lowest Token:" << lowest << endl;
}

  void check(int (&tokens)[50], int n, int input)
  {
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      if(input == tokens[i])
      {
        count++;
      }
    }
    if(count) cout << "Yes\n";
    else cout << "No\n";
  }
  void reverse(int (&tokens)[50], int n){
    int first = 0, last = n-1; //Studied Dutch flag algorithm and Two pointers in summer :)
    int temp;
    while(first < last)
    {
      temp = tokens[first];
      tokens[first] = tokens[last];
      tokens[last] = temp;
      first++;last--;
    }
    cout << "Tokens in reverse order: ";
    for(int i = 0; i < n; i++)
    {
      cout << tokens[i] << " ";
    }
    cout << endl;
  }
  int main(){
 
  int tokens[50];
  int Norders;
  cout << "Enter number of Tokens: ";
  cin >> Norders;
  cout << "Enter " << Norders << " Token numbers:\n";
  
  for (int i = 0; i < Norders; i++) {cin >> tokens[i];}
  
  average(tokens, Norders);
  highest(tokens, Norders);
  lowest(tokens, Norders);
  int input;
  cout << "Check if same token exists: ";
  cin >> input;
  check(tokens, Norders, input);
  reverse(tokens, Norders);
  return 0;
}
