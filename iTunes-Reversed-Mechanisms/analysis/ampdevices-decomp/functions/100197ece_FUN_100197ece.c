// name: FUN_100197ece
// address: 100197ece

void FUN_100197ece(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_10083c480;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xbff0000000000000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  LOCK();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  UNLOCK();
  return;
}

