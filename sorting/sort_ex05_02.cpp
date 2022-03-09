#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct INFO{
    string name;
    int kor,eng,math;
    bool operator < (const INFO &v) const{
        if(kor == v.kor){
            if(eng == v.eng){
                if(math == v.math){
                    return name < v.name;
                }
                return math > v.math;
            }
            return eng < v.eng;
        }
        return kor > v.kor;
    } 
};
int N;
vector<INFO> A;
void input(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>N;
    A.resize(N);
    for(int i=0;i<N;i++){
        cin>> A[i].name >> A[i].kor >> A[i].eng >> A[i].math;
    }
}

void solution(){
    sort(A.begin(),A.end());
    for(INFO info : A) cout<<info.name<<'\n';
}
int main(){
    // (10825)
    // 국영수
    // 도현이네 반 학생 N명의 이름과 국어, 영어, 수학 점수가 주어진다.
    // 이때, 다음과 같은 조건으로 학생의 성적을 정렬하는 프로그램을 작성하시오.

    // 1. 국어 점수가 감소하는 순서로
    // 2. 국어 점수가 같으면 영어 점수가 증가하는 순서로
    // 3. 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
    // 4. 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)

    // 첫째 줄에 도현이네 반의 학생의 수 N (1 ≤ N ≤ 100,000)이 주어진다.
    // 둘째 줄부터 한 줄에 하나씩 각 학생의 이름, 국어, 영어, 수학 점수가 공백으로 구분해 주어진다.
    // 점수는 1보다 크거나 같고, 100보다 작거나 같은 자연수이다. 
    // 이름은 알파벳 대소문자로 이루어진 문자열이고, 길이는 10자리를 넘지 않는다.
    
    // 문제에 나와있는 정렬 기준으로 정렬한 후 첫째 줄부터 N개의 줄에 걸쳐 각 학생의 이름을 출력한다.
    input();
    solution();
    return 0;
}