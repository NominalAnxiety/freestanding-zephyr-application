This is a freestanding application for zephyr (read https://docs.zephyrproject.org/latest/develop/application/index.html for more details)

I used the example application to learn about how to stucture my applications and what I need to include. (it is a great resource for learning)
After that I made my applicaitons from scratch

```
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
```
