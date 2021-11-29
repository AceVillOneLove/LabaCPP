#include <iostream>

using namespace std;

int main() {
    int i = 0, k = 0;
    char s[100];
    printf("String:\n");
    cin >> s;
    while (s[i])
    {
         if (s[i] >= '0' && s[i] <= '9') {
             k++;
         }
         i++;
     }
     if (k == i)
         printf("The Number\n");
     else
         printf("Identifier\n");
     system("pause");
     return 0;
}
