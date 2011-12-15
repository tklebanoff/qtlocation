# QML tests in this directory depend on a Qt platform plugin that supports OpenGL.
# QML tests that do not require an OpenGL context should go in ../declarative_core.

TEMPLATE = app
TARGET = tst_declarative_ui
!no_ui_tests:CONFIG += warn_on qmltestcase
SOURCES += main.cpp

QT += location quick

OTHER_FILES += *.qml

