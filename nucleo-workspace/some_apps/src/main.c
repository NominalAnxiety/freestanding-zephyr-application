#include <zephyr/random/random.h>

// Settings
static const int32_t sleept_time_ms = 1000;

int main(void)
{
  uint32_t rnd;

  // Do forever
  while (1) {

    // Print random number
    rnd = sys_rand32_get();
    printk("Random value: %u\r\n",rnd);

    // Sleep 
    k_msleep(sleept_time_ms);
  }

  return 0;
}
