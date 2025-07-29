#include "Vapb_design.h"

Vapb_design* create_Vapb_design() {
    return new Vapb_design();
}

void eval (Vapb_design* obj) {
    obj->eval();
}

void finalize (Vapb_design* obj) {
    obj->final();
}
