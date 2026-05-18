#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n > 0)
    {
        v.push_back(n % 3);
        n /= 3;
    }
    long long mul = 1;
    for(int i=v.size()-1; i>=0; i--)
    {
        answer += v[i] * mul;
        mul *= 3;
    }
    return answer;
}