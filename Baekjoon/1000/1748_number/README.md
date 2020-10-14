# 1748. 수 이어 쓰기 1

[링크](https://www.acmicpc.net/problem/1748)

|   난이도   | 정답률(\_%) |
| :--------: | :---------: |
| Silver III |   54.909    |

## 설계

### 시간 복잡도

N은 최대 100,000,000 까지이다. 이를 브루트 포스 방법으로 해결할 경우 불가능하다.

따라서 각 자리수별로 나눠 생각해야한다.

이 때 시간 복잡도는, 10의 몇 승인지에 따라 달라지며, log_10(N) 이므로 최대 9이다.

따라서 제한시간 내에 충분하다.

### 공간 복잡도

N은 100,000,000 까지이다. 이는 int형으로 충분하다.

정답의 count의 경우 아무리 많아도 900,000,000 이내이다. 따라서 int형으로 선언한다.

### 자리수별 계산

입력받은 수를 각 자리수별로 나눠서 생각하자

- 1 ~ 9
- 10 ~ 99
- 100 ~ 999

각 자리수에 존재하는 숫자의 글자 수는 같음에 유의한다.

각 자리수보다 N이 큰 경우 각 자리에 존재하는 숫자와 그 숫자의 글자 수의 곱 만큼을 정답에 계속 더해준다.

남은 숫자에 대해서는, 이전에 계산한 직후부터 N까지 숫자를 세고 글자 수의 곱을 더해준다.

이 때, 마지막 숫자를 셀 때 하나의 수를 더 세줘야 함에 유의한다 (0부터 세므로)

```cpp
int count = 1;
int temp = 10;

while (temp <= N) {
  answer += (temp * 0.9) * count;
  count += 1;
  temp *= 10;
}

N -= temp / 10;
answer += (N + 1) * count;
```

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점