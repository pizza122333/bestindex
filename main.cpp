#include <iostream>
using namespace std;

int main() {
    int score[3][3];   // 3명의 학생, 3과목(국어, 영어, 수학)
    double avg[3];     // 학생별 평균 점수
    int bestIndex = 0; // 최고 평균 학생 번호

    // 성적 입력
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
        cin >> score[i][0] >> score[i][1] >> score[i][2];

        // 평균 계산
        avg[i] = (score[i][0] + score[i][1] + score[i][2]) / 3.0;

        // 최고 평균 학생 찾기
        if (avg[i] > avg[bestIndex]) {
            bestIndex = i;
        }
    }

    // 출력
    cout << "최우수 학생은 " << bestIndex + 1 
         << "번째 학생이고 평균점수는 " << avg[bestIndex] 
         << "점이다" << endl;

    return 0;
}
