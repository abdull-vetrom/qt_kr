cmake_minimum_required(VERSION 3.16)

project(TicketSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(src)

set(SOURCES
    src/main.cpp
    src/controllers/TicketController.cpp
    src/models/Ticket.cpp
    src/views/MainWindow.cpp
    src/utils/DatabaseManager.cpp
)

set(HEADERS
    src/controllers/TicketController.h
    src/models/Ticket.h
    src/views/MainWindow.h
    src/utils/DatabaseManager.h
)

set(RESOURCES
    src/resources/styles.qrc
)

add_executable(TicketSystem ${SOURCES} ${HEADERS} ${RESOURCES})

target_link_libraries(TicketSystem Qt6::Widgets)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql)

target_link_libraries(TicketSystem Qt6::Widgets Qt6::Sql)