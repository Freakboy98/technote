#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 배열의 특정 범위에서 랜덤한 인덱스를 반환하는 함수
int getRandomPivotIndex(int low, int high) {
    return low + rand() % (high - low + 1);
}

// 배열의 두 요소를 교환하는 함수
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// QuickSort 알고리즘
int partition(int arr[], int low, int high) {
    // pivot을 랜덤으로 선택
    int randomIndex = getRandomPivotIndex(low, high);
    swap(&arr[randomIndex], &arr[high]);

    int pivot = arr[high];
    int i = low - 1;
	int j; 
    for (j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i;
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

