#ifndef __DEBUG_INCLUDED__
#define __DEBUG_INCLUDED__

extern int debug_flag;

#ifdef ENABLE_DEBUG
#define LOG(x) if (debug_flag) { printf x; }
#else
	#ifdef DINGUX
	#define LOG(x) if (0) { printf x; }
	#else
	#define LOG(x)
	#endif
#endif

void mark_opcode(int opcode);
void print_hex(unsigned char *ptr, int length);

#endif
