OBJS = test.o fx_s10_5_int.o fx_s10_5_float.o fx_s10_5_longlong.o fx_s10_5_double.o
CCFLAGS = -Wall -g -pg
test: $(OBJS)
	cc $(OBJS) $(CCFLAGS) -o $@ -m32
.c.o:
	cc -c $(CCFLAGS) $< -m32
debug:
	cc -g $(OBJS)
clean:
	rm test $(OBJS)
