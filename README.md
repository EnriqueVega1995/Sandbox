# Sandbox
Generating synthetic data, using PASCAL VOC and YOLO annotation formats

<p align="center"> 
    <img src="docs/dc.gif" width="480">
</p>
<p align="center"> 
    <img src="docs/df.gif" width="480">
</p>

## Setup Instructions

### Install Simbotic Engine

```
git clone -b Simbotic/4.24 git@github.com:Simbotic/SimboticEngine.git
cd SimboticEngine
./Setup.sh
./GenerateProjectFiles.sh
make
```

For more info vist [Building on Linux](https://wiki.unrealengine.com/Building_On_Linux).

## Setup Sandbox (this repo)

Clone repository:

```
git clone git@github.com:Simbotic/Sandbox.git
```

Environment variables:

Execute `setup /path/to/SimboticEngine` script to include the following inside your `.bashrc` file:
```
export SIMBOTIC_ENGINE=/path/to/SimboticEngine
export SIMBOTIC_SANDBOX=/path/to/Sandbox
```

Generate project files and build

```
cd $SIMBOTIC_SANDBOX
git lfs pull
./generate.sh
./build.sh
```

Run:

```
./editor.sh
```
