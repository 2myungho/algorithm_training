# 1966. 프린터 큐

[링크](https://www.acmicpc.net/problem/1966)

|   난이도   | 정답률(\_%) |
| :--------: | :---------: |
| Silver III |   53.815    |

## 설계

### 구조체 사용

처음 입력받은 순번을 기억하기 어려우므로, 구조체를 사용해 답을 구하고자 하는 문서를 확인한다.

```cpp
struct paper {
  int cost;
  bool target;  // 답을 구하고자 하는 대상인지 여부
};
```

### 현재 인쇄가 가능한지 여부 판단

중요도들을 내림차순으로 정렬 후 큐에 저장한다.

현재 문서와 큐의 맨앞을 비교 후 맞으면 인쇄 & 큐 pop

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|      0       |       0        |

## 고생한 점
