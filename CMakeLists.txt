cmake_minimum_required(VERSION 3.5)
project(TestConstructor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Core Gui)

qt_standard_project_setup()

qt_add_executable(TestConstructor
    main.cpp
    mainwindow.ui
    mainwindow.cpp
    mainwindow.h
    core/user.cpp
    core/user.h
    core/test.cpp
    core/test.h
    core/question.cpp
    core/question.h
    core/answer.cpp
    core/answer.h
    core/permissions.h
    core/usermanager.cpp
    core/usermanager.h
    core/testmanager.cpp
    core/testmanager.h
    core/utils.cpp
    core/utils.h
    core/jsonserializable.h
    gui/loginwindow.ui
    gui/loginwindow.cpp
    gui/loginwindow.h
    gui/testeditor.ui
    gui/testeditor.cpp
    gui/testeditor.h
    gui/testviewer.ui
    gui/testviewer.cpp
    gui/testviewer.h
    gui/testpasser.ui
    gui/testpasser.cpp
    gui/testpasser.h
    gui/settingsdialog.ui
    gui/settingsdialog.cpp
    gui/settingsdialog.h
    resources/themes.qrc
)

target_link_libraries(TestConstructor PRIVATE
    Qt6::Widgets
    Qt6::Core
    Qt6::Gui
)

include(InstallRequiredSystemLibraries)
set(CPACK_GENERATOR "ZIP")
include(CPack)



#cmake_minimum_required(VERSION 3.5)

#project(qt-db-ui VERSION 0.1 LANGUAGES CXX)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
#find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

#set(PROJECT_SOURCES
#        main.cpp
#        mainwindow.cpp
#        mainwindow.h
#        mainwindow.ui
#)

#if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
#    qt_add_executable(qt-db-ui
#        MANUAL_FINALIZATION
#        ${PROJECT_SOURCES}
#    )
## Define target properties for Android with Qt 6 as:
##    set_property(TARGET qt-db-ui APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
##                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
## For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
#else()
#    if(ANDROID)
#        add_library(qt-db-ui SHARED
#            ${PROJECT_SOURCES}
#        )
## Define properties for Android with Qt 5 after find_package() calls as:
##    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    else()
#        add_executable(qt-db-ui
#            ${PROJECT_SOURCES}
#        )
#    endif()
#endif()

#target_link_libraries(qt-db-ui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#set_target_properties(qt-db-ui PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#    MACOSX_BUNDLE TRUE
#    WIN32_EXECUTABLE TRUE
#)

#install(TARGETS qt-db-ui
#    BUNDLE DESTINATION .
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

#if(QT_VERSION_MAJOR EQUAL 6)
#    qt_finalize_executable(qt-db-ui)
#endif()
