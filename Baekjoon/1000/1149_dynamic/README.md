# 1149. RGB거리

[링크](https://www.acmicpc.net/problem/1149)

|  난이도  | 정답률(\_%) |
| :------: | :---------: |
| Silver I |   47.684    |

## 설계

### dp

```cpp
int dp[N][C];
```

dp[N][c]를 다음과 같이 구성하며, 의미는 다음과 같다

- N번째 집에서 C번째 색 (R, G, B)을 선택했을 때 드는 총 합의 최소 비용

일반 식은 다음과 같다.

```cpp
int dp[N][C] = min(dp[N-1][다른 색 1], dp[N-1][다른 색 2]) + h[N][C];
```

h[N][c]는 N번째 집에서 C번째 색을 선택하는 비용이다.

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점
