#include <stdio.h>
int main() {
    int n, minutes;
    int Congestion = 0;
    int Streak = 0;
    int longestStreak = 0;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &minutes);
        if (minutes > 20) {
            Congestion++;
            Streak++;
            if (Streak > longestStreak) {
                longestStreak = Streak;
            }
        } else {
            Streak = 0;
        }
        n--;
    }
    printf("Congestion Minutes:%d\n", Congestion);
    printf("Longest Congestion Streak:%d\n", longestStreak);
    return 0;
}