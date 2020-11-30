# 15829. Hashing

[링크](https://www.acmicpc.net/problem/15829)

|  난이도   | 정답률(\_%) |
| :-------: | :---------: |
| Bronze II |   35.847    |

## 설계

### 시간 복잡도

글자의 크기는 최대 50 이다.

각 글자별로 summation을 수행해야 하므로 시간 복잡도는 최대 50이다.

### 공간 복잡도

R은 제곱 수 이므로 L이 커질 때마다 매우 커진다. 따라서 각 과정마다 M을 나눠주지 않으면 범위를 초과한다.

### 해시 계산

문제 조건에 따라 로직을 작성함

```cpp
for (char c : word) {
  summation += (c - 'a' + 1) * R;
  summation %= M;
  R *= 31;
  R %= M;
}
```

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점