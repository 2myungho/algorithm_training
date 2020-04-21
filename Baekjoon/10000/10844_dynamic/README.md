# 10844. 쉬운 계단 수

[링크](https://www.acmicpc.net/problem/10844)

|  난이도  | 정답률(\_%) |
| :------: | :---------: |
| Silver I |   28.247    |

## 설계

### 끝자리가 i일때 가능한 경우의 수

끝자리가 i일 때 가능한 경우의 수는 다음과 같다

```cpp
p[i] = before_p[i-1] + before_p[i+1];
```

여기서 i-1과 i+1이 index 범위를 초과하지 않도록 유의한다.

0부터 9까지 p[i]를 모두 구한 후, 이를 더하면 현재 n번째에서 만들 수 있는 계단 수의 개수이다.

초기값은 다음과 같다.

```cpp
// n=1 일 때 각 끝자리수가 i일 때 가능한 경우의 수
int before_p[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
```

### 나머지의 법칙

```sh
( (a % m) + ( b % m) ) % m = ( a + b ) % m
```

위 연산에 따라 p를 구할 때마다 mod 연산을 수행한다.

이는 n의 수가 커지는 경우 int형의 범위를 초과하기 때문이다.

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점