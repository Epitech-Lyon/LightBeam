`/mktoolchain`
===========

This directory is composed only of includable files for `make` work.

| Path                 | Description                                      |
|--------------------- |--------------------------------------------------|
| `def.mk`             | Definition of static build variable              |
| `macro.mk`           | Macro for build processus control                |
| `toolchain.mk`       | Variable defined from used GNU toolchain         |
| `builder/`           | Root directory for our template servant builder  |
| `builder/def.mk`     | Variabale definition for the builder             |
| `builder/builder.mk` | The project template builder                     |

# Build philosophy

The build is assured by a builder present at `builder/builder.mk` callable from everywhere.

## Work with this builder in a makefile

Define Some Variable:

  - `BUILDER_HEADER`    : The header wich will be print before the build
  - `BUILDER_TYPE`      : The type of our build output [ *static library* | *binary* | *no link* ]
  - `BUILDER_TARGET`    : The output name (in case of library or binary output type)
  - `BUILDER_SOURCE_DIR`: The sources directories we want to compile

Then include the builder & call `lauchbuilder` rule.

The builder assume `C` & `Assembly` source file compilation.

All The objects files will be relocated to the `build/` directory at project root with their total path form `src/`.

