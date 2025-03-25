#include<stdio.h>

// Static Variable for To Keep Variable Value until Exec Complete
int runner() {
    static int count = 0;
    count++;
    return count;
}

static void fun(int number) {
    // Different Variable in Function scope = Different Malloc
    number++;
    printf("I am a static function. %d\n", number);
}

static void fun_alloc(int *number) {
    // Different Variable in Function scope = Different Malloc
    (*number)++;
    printf("Added. %d\n", *number);
}

int sum(int number) {
    static int count = 0;
    count += number;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    
    // Example
    int number = 0;
    // Ini tidak akan menambah Nomornya, anda harus pakai pointer both static and non static
    fun(number);
    fun(number);

    // Pointer Example
    fun_alloc(&number);
    fun_alloc(&number);

    // Lesson
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}