#
# Generated By: dol2asm
#

M261_TARGET := $(BUILD_DIR)/rel/d/a/d_a_guard_mng.plf
M261_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_guard_mng.lcf
M261_MAP := $(BUILD_DIR)/rel/d/a/d_a_guard_mng.map

M261_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_guard_mng/d_a_guard_mng.cpp \

M261_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_guard_mng/d_a_guard_mng.o \

M261_LIBS := \

M261_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M261_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M261_LDSCRIPT) \
	-unused -map $(M261_MAP) \
	-w off \

$(M261_TARGET): $(M261_O_FILES) $(M261_LIBS)
	@echo [261] creating $(M261_TARGET)
	@echo $(M261_LIBS) $(M261_O_FILES) > build/M261_ofiles
	@python3 tools/lcf.py rel 261 --output $(M261_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M261_LDFLAGS) -o $(M261_TARGET) @build/M261_ofiles

$(BUILD_DIR)/rel/d/a/d_a_guard_mng/%.o: rel/d/a/d_a_guard_mng/%.cpp
	@echo [261] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M261_CFLAGS) -c -o $@ $(basename $@).cpp


