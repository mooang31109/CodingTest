#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    string number = "";
    vector<string> numbers
    {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    for(int i=0; i<s.length(); i++)
    {
        char num = s[i];
        if(num >= '0' && num <= '9')
        {
            answer += num;
        }
        else
        {
            number += num;
            
            for(int j=0; j<10; j++)
            {
                if(number == numbers[j])
                {
                    answer += to_string(j);
                    number = "";
                    break;
                }
            }
        }
    }
    return stoi(answer);
}