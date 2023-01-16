.POSIX:    # Parse it an run in POSIX conforming mode
.SUFFIXES: # Delete the default suffixes (inference rules)

CC=gcc
CFLAGS=-g -Wall -I$(IDIR)
LDLIBS=-lcurses -lircclient
OUTPUT=tic
ROOTDIR=.
IDIR=$(ROOTDIR)/include
SDIR=$(ROOTDIR)/src
ODIR=$(ROOTDIR)/obj

_DEPS=tui.h irc.h
DEPS=$(addprefix $(IDIR)/,$(_DEPS))

_OBJS=main.o tui.o irc.o
OBJS=$(addprefix $(ODIR)/,$(_OBJS))

$(OUTPUT): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $@ $^

$(OBJS): | $(ODIR)

$(ODIR):
	mkdir $(ODIR)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $<

.PHONY: clean  # Phony targets do not have 
clean:
	rm -rf $(ODIR) $(OUTPUT)

