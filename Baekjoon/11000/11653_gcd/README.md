# 11653. 소인수분해

[링크](https://www.acmicpc.net/problem/11653)

|   난이도   | 정답률(\_%) |
| :--------: | :---------: |
| Silver III |     54      |

## 설계

### 에라토스테네스의 체

에라토스 테네스의 체를 이용해 소수(prime)의 vector primes를 만든다.

입력받은 primes를 순회하며 N%prime == 0 이면 N/=prime, 아닌경우 다음 prime으로 넘어간다.

N이 1이 되면 종료한다.

### N=1일때

N이 1인경우 아무것도 출력하지 않는다.

## 정리

| 내 코드 | 빠른 코드 |
| :-----: | :-------: |
| 144 ms  |           |

## 고생한 점
