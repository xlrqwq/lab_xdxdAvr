#include "laba.h"

int labaone(void)
    {
    int v1,v2,t,s;
    v1 = 56;
    v2 = 120;
    t = 3;
    s = (v1 + v2) * t;
    printf("dis = %d\n", s);
    return 0;
}


int labatwo(void) 
{ 
    int n,i; 
    double s, a, del; 
    s = 0; 
    scanf("%d",&n); 
    del = 1; 
    for(int i=1; i <= n; i++){ 
        del *= 2; 
        a = (1 + i) / (del); 
        s += a; 
        printf("i = %d\n", i);
        printf("s = %f\n", s);
    } 
    return 0; 
}

int labathree(void){
    int s = 1;
    int k = 1;
    int g = 0;
    int i = 0;
    int n = 0;
    char stroka[80];
    scanf("%[^\n]",stroka);

    while (stroka[g] != '\0')
    {
        if (stroka[g-1] == ' ')
            while (stroka[i] != '\0'){
                if (stroka[g] == stroka[i])
                    if (stroka[g+1] == stroka[i+1])
                        n++;
                
                i++;
            }
        i = 0;
        if (n > 1)
            k++ ;
        n = 0;
            
        s = 0;
        g++;
    }
    printf(" end %i", k);
}

int labafour(void){
    char str[1000];
    char word[100];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);
    

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            while ((str[i] != ' ') && (str[i] != '\0')) {
                word[j] = str[i];
                i++;
                j++;
            }
            word[j] = '\0';

            if (word[0] != 'a' && word[0] != 'e' && word[0] != 'i' && word[0] != 'o' && word[0] != 'u' && word[0] != 'y' &&
                word[0] != 'A' && word[0] != 'E' && word[0] != 'I' && word[0] != 'O' && word[0] != 'U' && word[0] != 'Y') {
                printf("%s ", word);
            }
            j = 0;
        }
        else {
            i++;
        }
    }

    return 0;
}

int labafive() {
    int arr[10];
    int minIndex = 0, maxIndex = 0;

    printf("Ввод:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    printf("итог:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

int labasix() {
    int N, K;
    
    printf("Размер: ");
    scanf("%d %d", &N, &K);

    int arr[N][K];

    printf("Ввод массива:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int minElement = arr[0][0];
    int minRow = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
                minRow = i;
            }
        }
    }

    for (int i = minRow + 1; i < N; i++) {
        for (int j = 0; j < K; j++) {
            arr[i][j] = 0;
        }
    }

    printf("Ответ:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}



int labaseven() {
    long long N;
    printf("число: ");
    scanf("%lld", &N);

    long long temp = N;
    int num = 0;
    while (temp > 0) {
        temp /= 10;
        num++;
    }
    if (num % 2 != 0) {
        printf("Выберете число с четным кол-вом разрядов пж).\n");
        return 1;
    }

    long long result = 0;
    long long where = 1;


    for (int i = 0; i < num; i += 2) {
        int mininum = (N / where) % 10;
        int mininum2 = (N / (where * 10)) % 10;

        result += mininum * where * 10;
        result += mininum2 * where;

        where *= 100; 
    }

    printf("Итог: %lld\n", result);
    return 0;
}
