#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *slow = head;
    node *fast = head;
    while(fast != NULL) {
        if (fast->next == NULL || fast->next->next == NULL) {
            return 0;
        }
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) {
            return 1;
        }
    }
    return 0;
}