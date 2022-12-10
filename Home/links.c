#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void open_website_part(int i) {
    char *cmd;
    asprintf(&cmd, "START www.weburl.com/%d", i);
    system(cmd);
    free(cmd);
}