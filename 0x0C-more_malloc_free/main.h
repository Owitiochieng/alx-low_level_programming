#ifndef main_h
#define main_h

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void printString(char *string, int len);
char *multiplyChar(char mult, char *num, int numI, char *des, int desI);
int checkForDigits(char **argVector);
void initializeString(char *string, int len);
int main(int argCount, char *argVector[]);
#endif
