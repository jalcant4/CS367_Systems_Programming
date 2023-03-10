/* DO NOT EDIT THIS FILE
 * - vm_support.h (Trilby VM)
 * - Copyright: Prof. Kevin Andrea, George Mason University.  All Rights Reserved
 * - Date: Aug 2022
 */

#ifndef VM_SUPPORT_H
#define VM_SUPPORT_H

#include "avan_sched.h"
#include "vm_printing.h"

#define MARK(str, ...) do {                   \
  printf("  %s[MARK]%s ", MAGENTA, RST);             \
  printf(str, ##__VA_ARGS__);    \
  printf("    %s{%s:%d in %s}%s\n", MAGENTA, __FILE__, __LINE__, __func__, RST); \
} while(0) 

void register_signal(int sig, void (*handler)(int));
void print_prompt();
void print_status(char *msg);
void print_debug(char *msg);
void print_warning(char *msg);
void abort_error(char *msg, char *src);
void print_trilby_banner();
void print_avan_debug(avan_header_t *schedule);
void print_avan_queue_debug(queue_header_t *queue);
void print_process_node_debug(process_node_t *node);

#endif
