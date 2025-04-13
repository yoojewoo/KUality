#include <stdio.h>

int fibo(int n) {   // 재귀함수를 이용한 피보나치 수열 계산하는 함수
    if (n == 0){    // 첫 번째 피보나치 수는 0
        return 0;
    } else if (n <= 1) {    // 두 번째 피보나치 수는 1
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);   // n번째 피보나치 수 계산식
 }

 int main() {
    int n;  

    printf("몇 번째 피보나치 수열을 구할까요?: ");  
    scanf("%d", &n);
    
    if (n < 0 || n > 45) {  // n의 범위 지정(0 <= n <= 45)
        printf("입력 범위를 벗어났습니다. 다시 입력하세요: ");  // n의 범위를 벗어났을 때 다시 n값을 입력받음
        scanf("%d", &n);
    }
    printf("%d번째 피보나치 수열의 값은 %d입니다.\n", n, fibo(n));  

    return 0;
 }