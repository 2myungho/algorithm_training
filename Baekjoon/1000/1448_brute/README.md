# 1448. 삼각형 만들기

[링크](https://www.acmicpc.net/problem/1448)

|   난이도   | 정답률(\_%) |
| :--------: | :---------: |
| Silver III |   44.891    |

## 설계

### 시간복잡도

N은 3 ~ 1,000,000인 자연수이다. 빨대의 길이는 1,000,000보다 작거나 같다.

제일 긴 삼각형의 둘레의 길이를 찾아야 하므로, 모든 경우를 탐색한다.

이 때 제일 긴 변을 정하고 나머지 변들로 만들 수 있는지 여부를 판별하면 되므로

시간복잡도는 O(N^2) 이다.

이 때 N이 매우 크므로 일반적인 N^2라면 제한시간 내에 불가능하다.

따라서 최선의 경우만 탐색해 문제를 풀이해야한다.

### 삼각형을 만들 수 있는지 여부

다음 조건을 만족해야 한다.

```cpp
제일 긴 변 < 두 번째 긴 변 + 세 번째 긴 변
```

입력받은 빨대의 길이들을 오름차순으로 정렬하면 제일 마지막엔 가장 긴 빨때가 존재한다.

그 빨때의 index를 i라고 하자. i를 2까지 감소시키며, 각 경우마다 아래 iteration을 수행한다.

j를 i-1 부터 1번까지 감소시키며 다음 경우를 판단한다.

```cpp
if (longest < arr[j] + arr[j - 1]){
  // answer
  return;
}
```

만약 다음 조건을 만족하는 경우가 가장 길게 삼각형을 만들 수 있을 경우이다.

이는 가장 긴 막대들 부터 비교하기 때문이다.

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|     168      |       12       |

## 고생한 점
