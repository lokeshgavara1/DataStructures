// DIFFERENTE TYPES OF STRING FUNCTIONS;

// 1.Strlen()=It gives length of the string;
#include <stdio.h>
main(){
    char str[50],*p;
    puts("enter your string");
    gets(str);
    int len=0;
    p=str;
    while(*p){
        len++;
        p++;
    }
    printf("length=%d",len);
}

// 2.String length Without using  Strlen() function;
#include <stdio.h>
#include <string.h>

int custom_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') { // Check for null-terminated character
        len++;
    }
    return len;
}

int main() {
    char inputstring[100];
    puts("Enter a string:");
    fgets(inputstring, sizeof(inputstring), stdin); // Use fgets instead of gets
    inputstring[strcspn(inputstring, "\n")] = '\0'; // Remove the newline character
    int len = custom_strlen(inputstring);
    printf("Length of the string is: %d\n", len);
    return 0;
}

// 3.strcpy()=Copying one string to another variable
#include <stdio.h>
#include <string.h>

void custom_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char sourcestring[100];
    char destnationstring[100];
    
    printf("Enter a string: ");
    fgets(sourcestring, sizeof(sourcestring), stdin);
    sourcestring[strcspn(sourcestring, "\n")] = '\0'; // Remove newline
    
    custom_strcpy(destnationstring, sourcestring);
    
    printf("Source string: %s\n", sourcestring);
    printf("Copied string: %s\n", destnationstring);
    
    return 0;
}


// 4.Strlwr()=lowercase;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the tolower function

void stringToLower(char *str) {
    int i = 0;
    while (str[i] != '\0') { // Use != instead of = in the condition
        str[i] = tolower(str[i]); // Use tolower function from ctype.h
        i++;
    }
}
int main() {
    char inputstring[100];
    printf("Enter a string: ");
    fgets(inputstring, sizeof(inputstring), stdin);
    inputstring[strcspn(inputstring, "\n")] = '\0'; // Remove newline
    stringToLower(inputstring); // Convert the input string to lowercase
    printf("Lowercase string: %s\n", inputstring);
    return 0;
}

// 5.Strncnp()=To comparefirst n characters of two strings;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the tolower function

int comparestring(const char *str1, const char *str2, int n) {
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i]) { // Use != instead of +=
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[] = "hello";
    char str2[] = "helps";
    int n = 3;
    if (comparestring(str1, str2, n)) {
        printf("The first %d characters of the strings are equal\n", n);
    } else {
        printf("The first %d characters of the strings are not equal\n", n);
    }
    return 0;
}

// 6.Strcmp()=To compare two strings;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the tolower function

int main() {
    char str1[100], str2[100];
    int result, i;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    for (i = 0; str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]; i++);

    if (str1[i] < str2[i]) {
        printf("str1 is less than str2\n");
    } else if (str1[i] > str2[i]) {
        printf("str2 is less than str1\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}

// 7.Strcat()=concatination;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the tolower function

void appendstring(char *dest, const char *source) {
    while (*dest) {
        dest++;
    }
    while (*source) {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

int main() {
    char str1[50] = "hello";
    char str2[50] = "world";
    
    appendstring(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}

// 8.Strupr()=Uppercase;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the toupper function

void stringupper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char inputstring[100];
    printf("Enter a string: ");
    fgets(inputstring, sizeof(inputstring), stdin);
    inputstring[strcspn(inputstring, "\n")] = '\0'; // Remove newline

    stringupper(inputstring); // Convert the input string to uppercase

    printf("Uppercase string: %s\n", inputstring);
    return 0;
}

// 9.Strrev()=Reversing a string;
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the toupper function

void reversestring(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[] = "hello,world";
    printf("Original string: %s\n", str);
    reversestring(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

