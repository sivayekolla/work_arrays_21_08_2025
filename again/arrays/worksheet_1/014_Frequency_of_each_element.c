#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;   
    }

    for(i=0; i<n; i++) {
        if(freq[i] == -1) { 
            count = 1;
            for(j=i+1; j<n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count; 
        }
    }

    for(i=0; i<n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d time%s\n", arr[i], freq[i], (freq[i] > 1 ? "s" : ""));
        }
    }

    return 0;
}
