#include <stdio.h>
#include <stdbool.h>

int main() {
	// 변수 선언 및 입력
	int n;
	scanf("%d", &n);
	bool satisfied = true;
	
	for(int i = 2; i < n; i++) {
		// 1과 자기자신을 제외한 약수가 전혀 없다면 그 수는 소수입니다.
		if(n % i == 0)
			satisfied = false;
	}

	//출력
	if(satisfied == true)
		printf("P");
	else
		printf("C");
	
    return 0;
}