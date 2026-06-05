#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int a=0; a<commands.size(); a++)
    {
        int i = commands[a][0];
        int j = commands[a][1];
        int k = commands[a][2];
    
        vector<int> step1(array.begin() + (i-1), array.begin() + j);
        sort(step1.begin(), step1.end());
        answer.push_back(step1[k-1]);
    }
    return answer;
}