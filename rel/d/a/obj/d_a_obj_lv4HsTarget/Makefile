#
# Generated By: dol2asm
#

M527_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv4HsTarget.plf
M527_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv4HsTarget.lcf
M527_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv4HsTarget.map

M527_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget.cpp \

M527_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget.o \

M527_LIBS := \

M527_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M527_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M527_LDSCRIPT) \
	-unused -map $(M527_MAP) \
	-w off \

$(M527_TARGET): $(M527_O_FILES) $(M527_LIBS)
	@echo [527] creating $(M527_TARGET)
	@echo $(M527_LIBS) $(M527_O_FILES) > build/M527_ofiles
	@python3 tools/lcf.py rel 527 --output $(M527_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M527_LDFLAGS) -o $(M527_TARGET) @build/M527_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv4HsTarget/%.o: rel/d/a/obj/d_a_obj_lv4HsTarget/%.cpp
	@echo [527] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M527_CFLAGS) -c -o $@ $(basename $@).cpp


