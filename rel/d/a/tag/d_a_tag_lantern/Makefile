#
# Generated By: dol2asm
#

M36_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lantern.plf
M36_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lantern.lcf
M36_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lantern.map

M36_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern.cpp \

M36_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern.o \

M36_LIBS := \

M36_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M36_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M36_LDSCRIPT) \
	-unused -map $(M36_MAP) \
	-w off \

$(M36_TARGET): $(M36_O_FILES) $(M36_LIBS)
	@echo [ 36] creating $(M36_TARGET)
	@echo $(M36_LIBS) $(M36_O_FILES) > build/M36_ofiles
	@python3 tools/lcf.py rel 36 --output $(M36_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M36_LDFLAGS) -o $(M36_TARGET) @build/M36_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_lantern/%.o: rel/d/a/tag/d_a_tag_lantern/%.cpp
	@echo [ 36] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M36_CFLAGS) -c -o $@ $(basename $@).cpp


