# LightBeam

![LightBeam](https://www.google.com/imgres?imgurl=https%3A%2F%2Fak8.picdn.net%2Fshutterstock%2Fvideos%2F10278488%2Fthumb%2F8.jpg&imgrefurl=https%3A%2F%2Fwww.shutterstock.com%2Ffr%2Fvideo%2Fclip-10278488-4k-abstract-gold-rays-stage-lighting-hope&tbnid=ZPPzCsoQgz_f1M&vet=10CAMQxiAoAGoXChMI-LDgmvXH6AIVAAAAAB0AAAAAEA4..i&docid=LWg9mC6M-pfF6M&w=852&h=480&itg=1&q=light%20beam&ved=0CAMQxiAoAGoXChMI-LDgmvXH6AIVAAAAAB0AAAAAEA4)

The purpose of this project is to create some [ARM](https://en.wikipedia.org/wiki/ARM_architecture) kernel base for micro-systems as [RaspberryPi](https://fr.wikipedia.org/wiki/Raspberry_Pi).

LightBeam is a little project without ambition that explore the ARM kernel developpment world.

[Project Root Documentation](doc/tree.md)


## INSTALL

LightBeam will check all dependencies and install the ARM GNU toolchain (if not already done).

_Using make rule:_ `make toolchain`

_Using mktoolchain directly:_ `./mktoolchain/mktoolchain`

Kernels are built using GNU ARM toolchain from submodules git.


## BUILD

LightBeam build kernel plateform-specific.

`make TARGET=$PLATEFORM`

[Targetable PLATEFORM list](src/target/README.md)

You can run at root `make help` to see targetable plateform.


## RUN

For virtual run I advise to use [QEMU](https://www.qemu.org/docs/master/qemu-doc.html) for ARM systems.

Install QEMU from official [github repository](https://github.com/qemu/qemu).

For physical run check this [page](https://wiki.osdev.org/Raspberry_Pi_Bare_Bones#Testing_your_operating_system_.28Real_Hardware.29).

Check dependencies using the `make toolchain`.


## EPILOGUE

[ARM ABI specification](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ihi0042f/index.html).

[ARM official developper documentation](https://developer.arm.com/docs).

And, from the darkness, shine the light.

Feel free to fork, use, improve.
