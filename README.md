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

`./install-prereq` will install these for you. You need to have sudoer privileges.
