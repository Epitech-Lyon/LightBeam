 #
# Makefile Compiling object for riscv64 target
 #

sinclude $(MKHELPER_DIR)/builder/def.mk

export TGTARCH	:=	riscv64

export GNUBASE	:=	riscv64-linux-gnu-

CCFLAGS		+=	-mcmodel=medany 		\
				-ffunction-sections		\
				-fdata-sections			\
				-Os						\

ASFLAGS		+=	

LDFLAGS		+=	-nostartfiles 			\
				-nostdlib 				\
				-nodefaultlibs			\
				--gc-sections 			\
				-static

# The library we are using
# LDFLAGS		+=	$(TGTSHARED_OVRKRN)	\

BUILDER_HEADER	:=	$(TGTARCH) target

BUILDER_TYPE	:=	$(BUILDER_TYPE_RAWKRN)

BUILDER_TARGET	:=	$(BUILDIR)/$(KERNEL)

BUILDER_SOURCE_DIR	=	boot			\
						interrupts		\
						drivers

.PHONY: all

all:	toolchainCheckup	arcbuild	lauchbuilder

sinclude $(MKHELPER_DIR)/builder/builder.mk

arcbuild:
	# @make -s -C $(OVRKRN_SHARED_SRC_DIR) --no-print-directory
	# @make -s -C $(TARGET2SHARED_DIR) --no-print-directory

toolchainCheckup:
	$(call EvalBinaryExistence,$(GNUBASE)as)
	$(call EvalBinaryExistence,$(GNUBASE)gcc)
	$(call EvalBinaryExistence,$(GNUBASE)ld)

ifeq ($(DEBUG),1)
    QEMUOPT = -monitor stdio --no-reboot
else
    QEMUOPT = -serial mon:stdio 
endif
run:
	@qemu-system-riscv64 -machine virt 					\
						-cpu rv64 						\
						-bios none 						\
						-kernel $(BUILDIR)/$(KERNEL) 	\
						-smp 4 							\
						-m 4G  							\
						$(QEMUOPT)
