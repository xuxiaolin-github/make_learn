# $(waring Demo2)
# 
# VAR = "I'm variable"
# 
# all:hello foo
# hello :hello.c
#		$(CXX)  $^ -o $@

# foo:
#		@echo $(VAR)
# 
# clean:
#		rm -f hello


$(waring Demo2)

obj= hello.o hello_copy.o

all:$(obj)
$(obj):%.o:%.c
		$(CC) $< -o $@
.PHONY :clean
clean:
		rm -f $(obj)