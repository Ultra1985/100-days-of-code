#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int visited[100000] = {0};   // Adjust size if needed
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;      // Found repeated element in same iteration
        }
        visited[arr[i]] = 1;
    }

    printf("%d", repeated);

    return 0;
}
