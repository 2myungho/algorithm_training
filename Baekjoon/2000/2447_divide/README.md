# 2447. 별 찍기 - 10

[링크](https://www.acmicpc.net/problem/2447)

|  난이도  | 정답률(\_%) |
| :------: | :---------: |
| Silver I |   50.248    |

## 설계

### 시간 복잡도

(3^8)^2 크기의 배열을 출력해야 하므로 N^2 의 시간이 들어간다.

이는 43,046,721 번 이며 제한시간 1초 내에 충분하다.

내부 배열을 채우는 방법은 재귀 함수를 이용한다.

현재 범위를 9등분 하고, 가운데 부분을 제외하고 다시 함수를 호출해 내부를 채운다.

이 때 가운데를 비우기 위해 현재 범위의 크기가 3^2 일때 내부를 채우고 return 한다.

### 공간 복잡도

N은 최대 3^8 이므로 6,561 까지이므로 int형으로 선언해도 괜찮다.

### 재귀함수

현재 범위에서 내부 크기를 탐색할 수 있도록 재귀함수를 구성한다.

재귀함수의 탈출은 현재 범위의 크기가 3^2 일때 이다.

```cpp
void req(Axis start, Axis end) {
  if (end.x - start.x == 3 && end.y - start.y == 3) {
    // ***
    // * *
    // ***
    return;
  }

  Axis tri = {(end.y - start.y) / 3, (end.x - start.x) / 3};

  for (int y = start.y; y < end.y; y += tri.y) {
    for (int x = start.x; x < end.x; x += tri.x) {
      if (y == start.y + tri.y && x == start.x + tri.x) {
        // 가운데 부분은 건너 뜀
        continue;
      }

      req({y, x}, {y + tri.y, x + tri.x});
    }
  }
}
```

## 정리

| 내 코드 (ms) | 빠른 코드 (ms) |
| :----------: | :------------: |
|     124      |       8        |

## 고생한 점
