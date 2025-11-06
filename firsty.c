#include <stdio.h>
int main()
{
    printf("greetings bobby\n");
    printf("how are you doing today?\n");
    char answer[20];
    scanf("%s", answer);
    if (answer == "good" || answer == "great" || answer == "fantastic" || answer == "awesome" || answer == "wonderful") {
        printf("that's great to hear!\n");
    } else if (answer == "bad" || answer == "terrible" || answer == "horrible" || answer == "awful" || answer == "miserable") {
        printf("that's not good to hear.\n");
    } else {
        printf("that's not a valid answer.\n");
    }
    return 0;
}