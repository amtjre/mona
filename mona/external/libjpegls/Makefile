ifndef $(MONADIR)
export MONADIR=$(shell cd $(PWD)/../../; pwd)
endif

TARGET  = $(LIBDIR)/libjpegls.a
SOURCES = jpegls.cpp

include $(MONADIR)/share/configs/Makefile.inc
include $(MONADIR)/share/configs/dirnames.inc
include $(MONADIR)/share/configs/monapi.inc

INCLUDE = -I$(INCDIR)

all: $(TARGET)

libdir:
	mkdir -p $(LIBDIR)

$(TARGET): libdir $(OBJECTS)
	rm -f $@
	$(AR) $@ $(OBJECTS)
	$(RANLIB) $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.SUFFIXES: .cpp .o
.cpp.o:
	$(CXX) -c -o $(<:.cpp=.o) $(CXXFLAGS) $(INCLUDE) $<

depend:
	$(CXX) -MM $(INCLUDE) $(CXXFLAGS) $(SOURCES) > dependencies

install: $(TARGET)
	mkdir -p $(LIBDIR)
	$(INSTALL) -p jpegls.h $(INCDIR)

uninstall:
	rm -f $(INCDIR)/jpegls.h

-include dependencies
