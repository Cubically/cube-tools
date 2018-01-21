# Cube tools

This repository contains tools to turn a Cubically memory-cube-dump into various other visualization formats.

# Image

Outputs the top, left, and front faces as a PNG image. This uses a modification of [ImageCube](http://www.cubezone.be/imagecube.html) (`php/imagecube.php`).

### Usage

    ./image <dump.txt >output.png

### Prerequisites

 - PHP >= 7.2
 - PHP-GD >= 7.2
 - LibPCRE3 >= 2:8.41-1.1
 - C compiler
 - GNU Make

`bash/install-prereq` will install these for you. You need to have sudoer privileges.

# Solver

Outputs the cube formatted for the (readable) input of [this solver](https://github.com/Cubically/solver).

### Usage

    ./solver <dump.txt

Append `--run-script` to use the solver's [Python script](https://github.com/Cubically/solver/blob/master/cube_convert.py).

### Prerequisites

 - C compiler
 - GNU make
 - Python 2

# Cubies

Outputs the cube formatted for the input of [this solver](https://github.com/Cubically/thistlethwaite).

### Usage

    ./solver <dump.txt

### Prerequisites

 - C compiler
 - GNU make
