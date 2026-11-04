// name: FUN_100633912
// address: 100633912

undefined8 FUN_100633912(void)

{
  if (DAT_1008c7d38 != 0) {
    _IONotificationPortDestroy();
    DAT_1008c7d38 = 0;
  }
  FUN_1001c62d9(&DAT_1008c7d40,0x10);
  return 0;
}

