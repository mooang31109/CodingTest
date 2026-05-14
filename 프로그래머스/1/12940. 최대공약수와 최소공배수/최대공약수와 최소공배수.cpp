#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = 1; //최대공약수
    int lcm = 1; // 최소공배수
    int sn = n > m ? m : n ; //두 수 비교. 작은 수
    int bn = n > m ? n : m ; //두 수 비교. 큰 수
    for(int i=1; i<=sn; i++) //최대공약수
    {
        gcd = (n%i == 0 && m%i == 0) ? i : gcd;
    }
    answer.push_back(gcd);
    
    lcm = (bn%sn == 0) ? bn : (bn*sn)/gcd;
    answer.push_back(lcm);
    
    return answer;
}