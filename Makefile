CC		= gcc
CXX 		= g++
CFLAGS		= -Wall -O2
CXXFLAGS	= ${CFLAGS}
LDFLAGS		=

CORE_DIR	= src
CORE		=

TOOLS_DIR	= src/tools
TOOL_CHANCES	= ${TOOLS_DIR}/chances.o ${TOOLS_DIR}/chancesMain.o


all: buildcore buildtools buildata

buildcore: $(CORE)
		${CXX} ${LDFLAGS} ${CFLAGS} ${CORE} -o core

buildtools: $(TOOL_CHANCES)
	${CXX} ${LDFLAGS} ${CFLAGS} ${TOOL_CHANCES} -o ${TOOLS_DIR}/mapChances/chances

builddata:
	test -d data/ || mkdir data/
	cp -rf src/tools/mapChances data/
	cp -rf src/tools/NPCs data/
	cp -rf src/tools/spriteFiles data/

cleandata:
	rm -rf data/mapChances
	rm -rf data/NPCs
	rm -rf data/spriteFiles

clean:
	find src|egrep "\.l?o"|xargs rm -f
	find src/tools|egrep "\.l?o"|xargs rm -f
	rm src/tools/mapChances/chances
