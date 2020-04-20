#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
  cin >> n;
  unordered_map<string, int> phonebook;
  for(int i = 0; i < n; i++){
    string name;
    int number;
    cin >> name;
    cin >> number;
    phonebook[name] = number;
  }

  // c++11 iterate over map
  // for (auto const& x : phonebook)
  //   {
  //     std::cout << x.first  // string (key)
  //               << ':' 
  //               << x.second // string's value 
  //               << std::endl ;
  //   }

  string query;
  while(true) {
    cin >> query;
    auto number = phonebook.find(query);
    if (number != phonebook.end()) {
      cout << query << "=" << number->second << endl;
    } else {
      cout << "Not found" << endl;
    }
    if (cin.eof()) break;
  }
  
    return 0;
}

