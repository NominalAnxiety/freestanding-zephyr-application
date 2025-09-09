# How to add a i2c driver

This file provides a guide on the directory structure you can expect and an explanation of what the files are for

## Structure of the Module 

This is the structure of the module for the tsp55287 board which is not supported by zephyr. 

```
Modules (out of tree)
|--Drivers/
|   |--CMakeLists.txt
|   |--Kconfig
|   |--tsp55287/
|      |--tsp55287.c 
|      |--tsp55287.h
|
|--dts/bindings/sensor/
|  |--tsp55287.yaml (defines specific devicetree properties)
|
|--zephyr/
|  |--module.yaml (tells zephyr where the module is)
|
|--Kconfig
|--CMakeLists.txt
```

HELPFUL: look at the [zephyr_example_application](https://github.com/zephyrproject-rtos/example-application/tree/main) for general overview


### Drivers/tsp55287/Kconfig

Make sure Kconfig is updated with the following code (or something similar) in order to enable the driver in the application

```
# make a new option for prj.conf in your app 
config tsp55287
  bool "tsp55287 Temperature Sensor"
  default n # set default to disabled
  depends on I2C
  help
    Enable driver for tsp55287 temperature sensor
```

### Drivers/tsp55287/CMakeLists.txt

CMakeLists must contain the location of the source file and (since this is out-of-tree) declare the current directory a zephyr_library

```
# declares the current directory a zephyr library
zephyr_library()

# list source code files 
zephyr_library_sources(tsp55287/tsp55287.c)
```

## Structure of the App

This is the structure of the i2c app assuming you have a custom module

```
workspace/i2c_app/
|--boards/
|  |--tsp55287.overlay
|
|--src/
|  |--main.c (main application code)
|
|--CMakeLists.txt
|--prj.conf
```

CMakeLists.txt is required for all applications. However in this application specifically there will need to be 
an extra line of code that needs to be added.

`set(ZEPHYR_EXTRA_MODULES "path/to/module/tsp55287"`

This allows the main app to use the module. IMPORTANTLY, it needs to be placed before the find_package line.

### Conclusion

Once you have these two you can flash the stm32 board and it should work (assuming code was correct)

WARNING: none of the code has been tested

Helpful links
- [official zephyr example](https://github.com/zephyrproject-rtos/zephyr/tree/main/samples/drivers/i2c)
- [unofficial example](https://github.com/ShawnHymel/introduction-to-zephyr/tree/main/workspace/apps/06_solution_i2c_driver) (look at _solution_i2c_driver and modules)


