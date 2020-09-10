// User enters a url like google.com
// And you transform it into http://www.google.com/index.html

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 20
#define EXTRA (LENGTH + 25)

void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char domain[LENGTH] = {0}, index_url[EXTRA] = "http://www.";

    printf("Enter a simple url like google.com: ");
    // opting for scanf as it'll skip white spaces and stop at the next white space.
    scanf("%s", domain); 

    build_index_url(domain, index_url);

    printf("That's the new link: ");
    puts(index_url);
    putchar('\n');

    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}