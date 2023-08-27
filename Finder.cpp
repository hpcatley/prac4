#include "Finder.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        int previous = 0;

        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.substr(0, i), previous);
            if (found != string::npos) {
                result.push_back(found);
                previous = found;
            } else {
                result.push_back(-1);
                break;
            }
        }
        return result;
    }

