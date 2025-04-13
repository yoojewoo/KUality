#include <stdio.h>

int main() {
    int a = 0;  // a는 0번째 피보나치 수
    int b = 1;  // b는 1번째 피보나치 수
    int fibo;   
    int n;

    printf("몇 번째 피보나치 수열을 구할까요?: ");
    scanf("%d", &n);

    if (n < 0 || n > 45) {  // n의 범위 지정(0 <= n <= 45)
        printf("입력 범위를 벗어났습니다. 다시 입력하세요: ");  // n의 범위를 벗어났을 때 다시 n값을 입력받음
        scanf("%d", &n);
    }

    if(n == 0) {    // n이 0이면 결과는 a
        fibo = a;
    } else if (n == 1) {    // n이  1이면 결과는 b
        fibo = b;
    } else {    // n이 2 이상이면 반복문을 통하여 피나보치 수열 값 계산
        for (int i = 2; i <= n; i++) {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        
    }
    
    printf("%d번째 피보나치 수열의 값은 %d입니다.\n", n, fibo);
    return 0;
}