# LightBleam

The purpose of this project is to create some ARM kernel base (processor specific) for micro-systems as [RaspberryPi](https://fr.wikipedia.org/wiki/Raspberry_Pi).

## PROLOGUE

The repository structure will evoluate during the project.

## INSTALL

LightBleam will check all dependencies and install the ARM GNU toolchain (if not already done).

_Using make rule:_ `make toolchain`

_Using mktoolchain directly:_ `./mktoolchain/mktoolchain`

Kernels are built using GNU ARM toolchain from submodules git.

## BUILD

LightBleam build kernel system-specific.

`make TARGET=$SYSTEM`

*SYSTEM targetable list:*
  - raspi2 (RaspberryPi2)
  - raspi3 (RaspberryPi3)

## RUN

I advise to use [QEMU](https://www.qemu.org/docs/master/qemu-doc.html) for ARM systems.

Check dependencies with the toolchain builder.

## ROADMAP

- [X] Toolchain (can evolve)
- [ ] Kernel
  - [X] Minimal raspi boot
  - [ ] Advanced raspi kernel (probably for 3/4)
  - [ ] AARCH64 advanced kernel

## EPILOGUE

[ARM ABI specification.](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ihi0042f/index.html)

[ARM official developper documentation.](https://developer.arm.com/docs)

Feel free to fork, use, improve.