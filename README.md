# Zephyr Temperature Sensor

Make sure you have zephyr installed! If you don't, got through the [getting started guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) and come back after you have completed that.

# Installation


1. Run the following command

```
# initialize my-workspace for the tempctrl-zephyr-application (main branch)
west init -m https://github.com/NominalAnxiety/tempctrl-zephyr-application --mr main my-workspace
# update Zephyr modules
cd my-workspace
west update
```

2. make sure that you have your virtual environment activated from your own zephyrproject workspace 
3. build and run by `cd tempctrl-zephyr-application/tempctrl` and then `west build -p -b $BOARD`



