TEMPLATE = lib

CONFIG += exceptions \
dll \
plugin \
  rtti

HEADERS += date.h

SOURCES += date.cpp

TARGET = DateProperty

DESTDIR = .

INCLUDEPATH += $$PWD/../..

macx{
	QMAKE_LFLAGS +=  -F$$PWD/../../lib
 	LIBS += -framework PropertyEditor
}else{
	LIBS += -L$$PWD/../../lib -lPropertyEditor 
}


target.path = $$PWD/../../lib

INSTALLS += target

