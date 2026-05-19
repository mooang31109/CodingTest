#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != ' ')
        {
            if(idx % 2 == 0)
            {
                answer+= toupper(s[i]);
                idx++;
            }
            else
            {
                answer += tolower(s[i]);
                idx++;
            }
        }
        else
        {
            answer += ' ';
            idx = 0;
        }
    }
    return answer;
}