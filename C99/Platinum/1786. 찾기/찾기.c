#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ans_queue[1000001];
int cnt = 0;
int str_size = 0, pat_size = 0;
char str[1000001];
char pat[1000001];
int failure[1000001];
int main(void) {
   // fgets(str, 1000001, stdin); //fp1 파일 읽기 str에 저장
    //fgets(pat, 1000001, stdin); //fp2 파일 읽기 pat에 저장
    gets(str); gets(pat);
    pat_size = strlen(pat); str_size = strlen(str);
    failure[0] = 0;
    for (int i = 1; i < pat_size; i++) {
        int k = failure[i - 1];
        while ((pat[i] != pat[k]) && k >= 1) {
            k = failure[k - 1];
        }
        if (pat[i] == pat[k]) {
            failure[i] = k + 1;
        }
        else {
            failure[i] = 0;
        }
    }
    int pattern = 0, string = 0;
    while (string < str_size) {
        if (str[string] == pat[pattern]) {
            string++;
            pattern++;
        }
        else if (pattern == 0)
        {
            string++;
        }
        else
        {
            pattern = failure[pattern - 1];
        }
        if (pattern >= pat_size) {
            ans_queue[cnt] = string - pat_size + 1;
            cnt++;
        }
    }

    //"result_kmp.txt"파일에 출력
    printf("%d", cnt);
    printf("\n");
    for (int i = 0; i < cnt; i++) {
        printf("%d ", ans_queue[i]);
    }
    printf("\n");
}