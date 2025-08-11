cmake_minimum_required(VERSION 3.30)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_C_STANDARD 17)
add_compile_options(-Wall -Wextra -Wpedantic -pedantic)

project(programas LANGUAGES C)
add_executable(main main.c)
add_executable(tipos_de_dados tipos_de_dados.c)
add_executable(media media.c)
add_executable(expressoes_aritmeticas expressoes_aritmeticas.c)
