/*
A. Joysticks

친구들이 콘솔 게임을 할 것이다. 그들은 두 개의 조이스틱과 하나의 충전기를 가지고 있다.
초기에 첫번째 조이스틱은 a1 퍼센트 충전되어있고 두번째는 a2 퍼센트 충전되어있다.
당신은 매 분의 시작에만 조이스틱를 충전할 수 있다.
1 분에 조이스틱은 2 퍼센트 배터리가 소모되거나 (충전기에 연결되지 않으면) 1 퍼센트씩 충전된다 (충전기에 연결되어 있으면).

게임은 두 조이스틱 모두 배터리가 있는 동안 계속된다.
만약 1 분의 시작에 어떤 조이스틱이 1 퍼센트 충전되어 있었다면 충전기에 연결되어야 한다.
그렇지 않으면 게임은 끝난다. 만약 어떤 조이스틱이 완전히 방전되면 (충전량이 0) 게임은 역시 끝난다.

게임이 지속될 수 있는 최장 시간을 구해라. 게임을 멈추는 것은 금지되어있다.
즉 모든 순간 두 조이스틱들은 사용 가능해야 한다. 조이스티은 100 퍼센트 이상 충전될 수 있다.
*/
#include <iostream>
using namespace std;

int main() {
  int a1, a2;
  cin >> a1 >> a2;

  int min = a1 + a2;

  while (a1 > 0 && a2 > 0 && a1 + a2 > 2) {
    bool b = true;
    if (a1 < a2) b = false;

    if (b) {
      a1 -= 2;
      a2 += 1;
    } else {
      a1 += 1;
      a2 -= 2;
    }
  }

  cout << min - a1 - a2;
  return 0;
}
