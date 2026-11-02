EE_BIN = nzp_ps2_bootstrap.elf
EE_OBJS = main.o
EE_LIBS = -ldebug
EE_CFLAGS = -O2 -G0 -Wall -Wextra

all: $(EE_BIN)

clean:
	rm -f $(EE_OBJS) $(EE_BIN)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
