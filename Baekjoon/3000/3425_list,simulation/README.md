# 3425. 고스택

[링크](https://www.acmicpc.net/problem/3425)

| 난이도 | 정답률(\_%) |
| :----: | :---------: |
| Gold I |   14.624    |

## 설계

### 구현

구현 자체가 복잡한 문제이다.

나누기와 나머지 연산의 경우, 기본 컴퓨터의 연산을 그대로 따라간다.

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      8       |                |

## 고생한 점

런타임 에러와, 틀린 답안이 너무 많이 발생한 문제이다.

답이 틀린 경우는 정확히 파악할 수 없었다.

따라서 이를 해결하기 위해 완전히 safe guard 처리를 하도록, 모든 연산을 함수로 빼고 수행했다.
