#include <string>
#include <vector>
using namespace std;

vector<string> string_to_array(const string& s) {
    vector<string> ourvec;
    string addedup;
    for(auto i : s) {
      switch(i) {
        case(' '):
          ourvec.push_back(addedup);
          addedup = "";
        default:
          addedup += i; 
      }
    }
    ourvec.push_back(addedup);
    return ourvec;
}
