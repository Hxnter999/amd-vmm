#pragma once
#include <vmm.h>
#include <memory/segments.h>

// never finished this
static interrupt_gate_descriptor_t create_interrupt_gate(register_t handler) {
	interrupt_gate_descriptor_t gate{ };

	gate.offset_low = handler.word1;
	gate.offset_middle = handler.word2;
	gate.offset_high = handler.dword2;

	gate.interrupt_stack_table = 0;
	gate.descriptor_privilege_level = 0;
	gate.present = 1;
	//gate.type = interrupt_gate_descriptor_type;
}
