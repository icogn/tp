#
# Generated By: dol2asm
#

M346_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer2.plf
M346_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer2.lcf
M346_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer2.map

M346_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/npc/d_a_npc_passer2/d_a_npc_passer2.cpp \

M346_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer2/d_a_npc_passer2.o \

M346_LIBS := \

M346_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M346_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M346_LDSCRIPT) \
	-unused -map $(M346_MAP) \
	-w off \

$(M346_TARGET): $(M346_O_FILES) $(M346_LIBS)
	@echo [346] creating $(M346_TARGET)
	@echo $(M346_LIBS) $(M346_O_FILES) > build/M346_ofiles
	@python3 tools/lcf.py rel 346 --output $(M346_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M346_LDFLAGS) -o $(M346_TARGET) @build/M346_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_passer2/%.o: rel/d/a/npc/d_a_npc_passer2/%.cpp
	@echo [346] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M346_CFLAGS) -c -o $@ $(basename $@).cpp


