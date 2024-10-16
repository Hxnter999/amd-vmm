cmake_minimum_required(VERSION 3.21)
project(amd-vmm)

enable_language(ASM_MASM)

add_subdirectory(source)
add_subdirectory(usermode)

set(ASM_OPTIONS
    /W3 /Zp8 /Zi
)