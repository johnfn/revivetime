#include <Carbon/Carbon.h>

int main(int argc, char argv) {
    ProcessSerialNumber psn = { 0L, 0L };
    OSStatus err = GetFrontProcess(&psn);

    CFStringRef processName = NULL;
    err = CopyProcessName(&psn, &processName);
    printf("%s\n", CFStringGetCStringPtr(processName, NULL));
    CFRelease(processName);
}

