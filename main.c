#include <stdio.h>
#include <stdlib.h>

void print_header() {
    printf("=========================================\n");
    printf("   LINUX PROCESS INSPECTOR & MONITOR     \n");
    printf("   Developer: Bektemur                   \n");
    printf("=========================================\n\n");
}

void show_system_memory() {
    printf("[+] Operativ xotira (RAM) holati:\n");
    printf("--------------------------------------------------\n");
    system("free -h");
    printf("--------------------------------------------------\n\n");
}

void show_top_processes() {
    printf("[+] Eng aktiv jarayonlar (Top Active Processes):\n");
    printf("--------------------------------------------------\n");
    system("ps aux --sort=-%mem | head -n 10");
    printf("--------------------------------------------------\n\n");
}

int main() {
    system("clear");
    print_header();
    show_system_memory();
    show_top_processes();

    printf("[!] Process Inspector muvaffaqiyatli ishini tugatdi.\n");
    return 0;
}
