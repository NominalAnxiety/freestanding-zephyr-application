cmake_minimum_required(VERSION 4.1)

find_package(Zephyr)
project(my_zephyr_app)

target_sources(app PRIVATE src/main.c)
