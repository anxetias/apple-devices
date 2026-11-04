// name: FUN_1001b176b
// address: 1001b176b

void FUN_1001b176b(void)

{
  byte bVar1;
  
  bVar1 = DAT_10089fb0a;
  LOCK();
  DAT_10089fb0a = 1;
  UNLOCK();
  if ((bVar1 & 1) != 0) {
    return;
  }
  FUN_100172d47(DAT_1008c5348);
  FUN_100172863(DAT_1008c5340);
  return;
}

