This is a freestanding application for zephyr (read https://docs.zephyrproject.org/latest/develop/application/index.html for more details)

I used the example template and then developed my applications from there. 

<home>/
├─── zephyrproject/
│     ├─── .west/
│     │    └─── config
│     ├── zephyr/
│     ├── bootloader/
│     ├── modules/
│     └── ...
│
└─── app_directory/
     ├── app/
     │     ├── CMakeLists.txt
     │     ├── prj.conf
     │     └── src/
     │         └── main.c

