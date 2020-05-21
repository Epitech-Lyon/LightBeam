`/src/target/x86/x86_64`
=========================

A multicore x86_64 kernel implementation using `grub` so far.

Reference of [x86 common](../README.md).

As explained, a part of the kernel is contained in other project directories.

The build actually assume that your host compiler is x64.

## ROADMAP

- [X] Higher half loaded
- [X] Boot
  - [X] GDT
  - [X] Early Paging
  - [X] Long mode
  - [X] IDT
  - [ ] TSS
  - [ ] SMP init
- [ ] Memory
  - [ ] VMM