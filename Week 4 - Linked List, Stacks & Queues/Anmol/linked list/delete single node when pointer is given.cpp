// let's say pointer to m is given we have to delete m node
/* in O(1)

m->val = m->next->val       // copy value of next node to m
m->next = m->next->next;   //  m now points to node after the next node


*/