cmake_minimum_required(VERSION 3.25)
project(PROJET_C C)

set(CMAKE_C_STANDARD 11)

add_executable(PROJET_C main.c
        person.c
        person.h
        person.c
        population.c
        population.h
        filemanager.c
        filemanager.h
        advanced.c
        advanced.h
        htmlexport.h
        htmlexport.c
)
