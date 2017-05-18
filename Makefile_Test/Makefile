OBJS2 = $(OBJS1) programC.o
OBJS1 = programA.o programB.o

OBJS4 := $(OBJS3) programC.o
OBJS3 := programA.o programB.o

SRCS := programA.c programB.c programC.c
OBJS := $(SRCS:%.c=%.o)
SRCS1 = $(SRCS) programD.c

.PHONY: clean  # <-- 这句没有也行, 但是最好加上
clean:
	@-rm -f *.o



all:
	@echo "=号测试：可以使用后面定义的变量"
	@echo $(OBJS2)
	@echo $(OBJS1)
	@echo ":=号测试：只能使用前面定义好的变量"
	@echo $(OBJS3)
	@echo $(OBJS4)
	@echo "变量替换测试："
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(SRCS1)


test:test.o
	$(CC) -o test test.o

target_subst:
	@echo $(subst t,e,makefilt)
	@echo $(word 1, $(subst /home/, /home /, $(shell pwd)))
	@echo $(word 2, $(subst /home/, /home /, $(shell pwd)))







SRCS := programA.c programB.c programC.c

target1: TARGET1-SRCS := programD.c
target1:
	@echo "SRCS: " $(SRCS)
	@echo "SRCS: " $(TARGET1-SRCS)

target2:
	@echo "SRCS: " $(SRCS)
	@echo "SRCS: " $(TARGET1-SRCS)

target3:
	@echo "Add nothing ..."
	echo "没有前缀"
	cat this_file_not_exist
	echo "错误之后的命令"      # <-- 这条命令不会被执行
target4:
	@echo "Add @ ..."
	@echo "没有前缀"
	@cat this_file_not_exist
	@echo "错误之后的命令"  
target5:
	@echo "Add - ..."
	-echo "没有前缀"
	-cat this_file_not_exist
	-echo "错误之后的命令"      # <-- 这条命令会被执行
target6:
	@echo "Main Makefile begin ...."
	@make other-all
	@echo "Main Makefile end ...."
include other/Makefile
