 #
# Makefile Compiling object for RASPI3 target
 #

sinclude $(MKHELPER_DIR)/macro.mk

export TGTARCH	:=	aarch64

export GNUBASE	:=	$(AARCH64_ARMGNUBASE)

# Particular CC flags
CCFLAGS		+=	-march=armv8-a 		\
				-mcpu=cortex-a53 	\
				-mtune=cortex-a53 	\
				#-mstrict-align

# Particular MACRO flags
CCFLAGS		+=	-D__ARM64_ARCH__ 	\
				-D__CORTEX_A53__ 	\
				-D__ARM64_NEON__	\

# The library we use
LDFLAGS		+=	$(TGTSHARED_LIBARC)					\
				$(TGTSHARED_LIBPLT)					\
				$(TGTSHARED_OVRKRN)					\

BUILDER_HEADER	:=	raspi3 target

BUILDER_TYPE	:=	$(BUILDER_TYPE_RAWKRN)

BUILDER_TARGET	:= $(BUILDIR)/$(KERNEL)

BUILDER_SOURCE_DIR	+=	.						\
						boot					\
						cpus					\
						cpus/init				\
						interrupts				\
						drivers/uart			\
						drivers/fb				\
						drivers/system-timer	\
						drivers/arm-timer		\
						tools					\
						memory					\
						system					\

BUILDER_SOURCE_DIR += $(addprefix ../shareable/, 	\
									QA7				\
						)

.PHONY: all

all:	toolchainCheckup	arcbuild	lauchbuilder

sinclude $(MKHELPER_DIR)/builder/builder.mk

arcbuild:
	@make -s -C $(ARCH_BASE_SRC_DIR)/$(TGTARCH) --no-print-directory
	@make -s -C $(OVRKRN_SHARED_SRC_DIR) --no-print-directory
	@make -s -C $(TARGET2SHARED_DIR) --no-print-directory

toolchainCheckup:
	@echo ""
	$(call EvalToolChainExistence,ARM AARCH64,$(AARCH64_ARMGNUDIR))
	$(call EvalBinaryExistence,$(GNUBASE)$(AS))
	$(call EvalBinaryExistence,$(GNUBASE)$(CC))
	$(call EvalBinaryExistence,$(GNUBASE)$(LD))

run:
	@qemu-system-aarch64 -machine raspi3					\
						-serial stdio					\
						-kernel $(BUILDIR)/$(IMGKERN)