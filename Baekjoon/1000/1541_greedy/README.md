# 1541. 잃어버린 괄호

[링크](https://www.acmicpc.net/problem/1541)

|  난이도   | 정답률(\_%) |
| :-------: | :---------: |
| Silver II |   49.329    |

## 설계

### 시간 복잡도

식을 한번 순회하며 계산하면 되므로, 식의 최대 길이 N만큼 수행한다.

이는 50이므로 제한시간 내에 충분하다.

### 공간 복잡도

5자리가 수의 최대이다. 절대값 99999 인 수를 10번 수행하는 경우 정답의 범위는 최대 6자리 이므로 int형으로 충분하다.

### 음수, 양수

이전에 음수가 나왔는지, 양수가 나왔는지에 따라 분기처리를 한다.

이전에 음수가 한번이라도 나온 경우, 이후에 나온 더하기 연산(양수) 는
괄호를 적절히 끼워 맞추면 빼기 연산(음수)으로 변경할 수 있다.

```cpp
for (char c : line) {
  if (c == '+') {
    if (!isPlus) {
      answer -= temp;
    } else {
      answer += temp;
    }
    temp = 0;
    continue;
  } else if (c == '-') {
    if (!isPlus) {
      answer -= temp;
    } else {
      answer += temp;
    }
    temp = 0;
    isPlus = false;
    continue;
  }

  temp *= 10;
  temp += c - '0';
}
```

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점