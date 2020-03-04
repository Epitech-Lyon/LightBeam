 #
# Inc make which define static variable
 #

export BUILDIR	:=	$(realpath .)/build
export KBUILD	:=	$(BUILDIR)/kbuild

export MKHELPER_DIR	:=	$(shell realpath .)/mk

export PROJECT_PATH	:=	$(shell realpath .)

export ROOT_SRC_DIR	:=	src
export ROOT_INC_DIR	:=	inc

export TARGET_DIR	:=	target
export ARCH_DIR		:=	arch

export INCLUDE_DIR =	$(addprefix -I$(realpath $(ROOT_INC_DIR))/,		.)

INCLUDE_DIR	+= $(addprefix -I$(realpath $(ROOT_INC_DIR)/$(ROOT_ARC_DIR))/,						\
						/																		\
				)

# GNU ARM toolchain
export ARMGNUDIR	:=	$(PROJECT_PATH)/mktoolchain/toolchain/arm-none-eabi-gcc
export ARMGNUBASE	:=	$(ARMGNUDIR)/bin/arm-none-eabi-
export CC			:=	$(ARMGNUBASE)gcc
export AS			:=	$(ARMGNUBASE)as
export LD			:=	$(ARMGNUBASE)ld
export OBJCPY		:=	$(ARMGNUBASE)objcopy
export OBJDMP		:=	$(ARMGNUBASE)objdump
export RDELF		:=	$(ARMGNUBASE)readelf

# Norm the linker
export TGTLINKER		:=	target.ld
export TGTLINKER_BUILD	:=	$(KBUILD)

export PROJECT			:=	LightBleam
export VERSION			:=	0.1.0
export BIN_EXTENSION	:=	bin
export KERNEL			:=	$(PROJECT)-$(VERSION)-$(TARGET).$(BIN_EXTENSION)

export EXTENSION_SRC	:=	.c
export EXTENSION_OBJ	:=	.o
export EXTENSION_ASM	:=	.S

export LDFLAGS	=	--trace								\
					-lgcc								\
					-ffreestanding 						\
					-O2 								\
					-nostdlib							\
					-o	$(PROJECT_PATH)/$(KERNEL)		\
					-T	$(TGTLINKER_BUILD)/$(TGTLINKER)	\

export RM	:=	rm -rf

export BUILDEP	:=	dep.d

# Cleaner as possible
export CCFLAGS	=	$(INCLUDE_DIR)						\
					-MMD								\
					-MF		$(BUILDEP)					\
					-Wall								\
					-Wextra				 				\
					-Wnested-externs					\
					-Winline							\
					-Wpragmas							\
					-fpic								\
					-ffreestanding 						\
					-std=gnu99							\
					-Wuninitialized						\
					-Wno-missing-braces					\
					-Wcast-align						\
					-Wwrite-strings						\
					-static					 			\
					-Wparentheses						\
					-Wunreachable-code					\
					-Wunused							\
					-Wmissing-field-initializers		\
					-Wswitch-enum						\
					-Wshadow				 			\
					-Wuninitialized				 		\
					-Wmissing-declarations				\
					-Wmissing-prototypes				\
					-Wstrict-prototypes					\
					-Wpointer-arith						\
					# -Werror

export ASFLAGS	=	

export QEMU			:=	qemu-system-arm

export QEMUFLAGS	:=	-no-reboot 		\
						-serial stdio


# Compile-time Macro
CFLAGS		+=	'-D PROJECT_NAME="$(PROJECT)"'			\
				'-D TARGETED_ARCH="$(TARGET)"'

# Debug mode
export 	CFLAGSDEBUG	= 	-D DEBUG \
						-g3

debug ?= 0
ifeq ($(debug), 1)
    CFLAGS += $(CFLAGSDEBUG)
endif

# Output cleaner
export Red			:= \e[0;31m
export BoldRed		:= \e[1;31m
export Green		:= \e[0;32m
export BoldGreen	:= \e[1;32m
export Yellow		:= \e[0;33m
export BoldYellow	:= \e[01;33m
export Blue			:= \e[0;34m
export BoldBlue		:= \e[1;34m
export Magenta		:= \e[0;35m
export BoldMagenta 	:= \e[1;35m
export Cyan			:= \e[0;36m
export BoldCyan		:= \e[1;36m
export Blank		:= \e[0m