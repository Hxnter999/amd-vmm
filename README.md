# AMD Hypervisor - Educational Project

Welcome to this re-upload of an AMD Hypervisor project. This build is **designed for educational purposes**, to help with learning about virtualization, hardware-level programming, and hypervisor development on AMD platforms. It’s a simple project that’s not fully completed, but it’s a great starting point for anyone interested in this area.

## Project Background

This project was unfortunately taken down due to a DMCA claim by an anonymous person alleging the code was stolen. Because of that, the **original repository with all commit history was wiped along with the rest of the data**, and what you see here is a re-upload. If you're curious, you can check out the [DMCA claim on GitHub](https://github.com/github/dmca/blob/master/2024/08/2024-08-30-source-code.md).

**Note:** This project is **not expected to work straight out of the box!** It requires setup, customization, and may need debugging or further changes to function properly. This is especially true when running it across **multiple processors and different versions of Windows**, as compatibility may vary.

## Build Guide

### Prerequisites

- CMake 3.21+
- Windows Driver Kit (WDK)

### Building

1. Clone the repository:
   ```
   git clone https://github.com/Hxnter999/amd-vmm.git
   cd amd-vmm
   ```

2. Create and enter build directory:
   ```
   mkdir build && cd build
   ```

3. Configure and build:
   ```
   cmake ..
   cmake --build .
   ```

### Building Specific Targets

- VMM: `cmake --build . --target vmm`
- Usermode: `cmake --build . --target usermode`

## Contributors

- [TDC0471](https://github.com/TDC0471) - Helped in the early stages of development.
- [Moleium](https://github.com/moleium) - Refactored the project to use CMake for better cross-platform builds.
