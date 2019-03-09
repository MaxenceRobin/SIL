TEMPLATE = app
CONFIG += console c++1z
QMAKE_CXXFLAGS += /std:c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ANTLR/antlr4-runtime/SILBaseVisitor.cpp \
    ANTLR/antlr4-runtime/SILLexer.cpp \
    ANTLR/antlr4-runtime/SILParser.cpp \
    ANTLR/antlr4-runtime/SILVisitor.cpp \
    main.cpp \
    programcontext.cpp \
    silinterpreter.cpp \
    rvalue.cpp \
    variable.cpp

HEADERS += \
    ANTLR/antlr4-runtime/SILBaseVisitor.h \
    ANTLR/antlr4-runtime/SILLexer.h \
    ANTLR/antlr4-runtime/SILParser.h \
    ANTLR/antlr4-runtime/SILVisitor.h \
    programcontext.h \
    rvalue.h \
    silinterpreter.h \
    variable.h

# ANTLR runtime

INCLUDEPATH += \
    ..\..\..\..\ANTLR\RUNTIME\antlr4-cpp-runtime-4.7.1-vs2015\antlr4-runtime

DEPENDPATH += \
    ..\..\..\..\ANTLR\RUNTIME\antlr4-cpp-runtime-4.7.1-vs2015\antlr4-runtim


LIBS += -L$$PWD/'../../../../ANTLR/RUNTIME/antlr4-cpp-runtime-4.7.1-vs2015/lib/vs-2015/x64/Release DLL/' -lantlr4-runtime

INCLUDEPATH += $$PWD/'../../../../ANTLR/RUNTIME/antlr4-cpp-runtime-4.7.1-vs2015/lib/vs-2015/x64/Release DLL'
DEPENDPATH += $$PWD/'../../../../ANTLR/RUNTIME/antlr4-cpp-runtime-4.7.1-vs2015/lib/vs-2015/x64/Release DLL'
