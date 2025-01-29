TARGET = psx-game-psyq
TYPE = ps-exe
# sources
SRCS = \
    third_party/nugget/common/crt0/crt0.s \
    src/main.c \
	src/ns.c \
	src/pad.c \
	src/math.c \
	src/audio.c \
	src/midi.c \
	src/cam.c \
	src/solid.c \
	src/slst.c \
	src/level.c \
	src/misc.c \
	src/gfx.c \
	src/gool.c \
	src/pbak.c \
	src/title.c \
	src/util/list.c \
	src/util/tree.c \
	src/ext/lib/gui.c \
	src/ext/lib/refl.c \
	src/ext/gui.c \
	src/ext/refl.c \
	src/ext/disgool.c \
	src/psx/card.c \
	src/psx/cdr.c \
	src/psx/gpu.c \
	src/psx/init.c \
	src/psx/r3000a.c \
	src/psx/r3000a.s

# C compiler flags (-g -O3 -Wall)
CPPFLAGS += -Ithird_party/psyq-iwyu/include
CPPFLAGS += -Isrc/common/
CPPFLAGS += -DPSX


LDFLAGS += -Lthird_party/psyq/lib
LDFLAGS += -Wl,--start-group
LDFLAGS += -lapi
LDFLAGS += -lc
LDFLAGS += -lc2
LDFLAGS += -lcard
LDFLAGS += -lcd
LDFLAGS += -lcomb
LDFLAGS += -lds
LDFLAGS += -letc
LDFLAGS += -lgpu
LDFLAGS += -lgs
LDFLAGS += -lgte
LDFLAGS += -lgun
LDFLAGS += -lhmd
LDFLAGS += -lmath
LDFLAGS += -lmcrd
LDFLAGS += -lmcx
LDFLAGS += -lpad
LDFLAGS += -lpress
LDFLAGS += -lsio
LDFLAGS += -lsnd
LDFLAGS += -lspu
LDFLAGS += -ltap
LDFLAGS += -Wl,--end-group

include third_party/nugget/common.mk
