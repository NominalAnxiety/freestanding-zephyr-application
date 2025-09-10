# Zephyr Temperature Sensor

Make sure you have zephyr installed! If you don't, got through the [getting started guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) and come back after you have completed that.

# Installation

1. Make sure that you have your virtual environment activated from your own zephyrproject workspace 
2. Run the following command

```
# initialize my-workspace for the tempctrl-zephyr-application (main branch)
west init -m https://github.com/NominalAnxiety/tempctrl-zephyr-application --mr main my-workspace
# update Zephyr modules
cd my-workspace
west update
```

  * Feel free to rename my-workspace to what you want just make sure you rename it for all of the commands
  * After running the commands you can rename the tempctrl-zephyr-application as well (it is kind of long)

3. build and run by `cd tempctrl-zephyr-application/tempctrl` and then `west build -p -b $BOARD`



