// name: FUN_10045afd2
// address: 10045afd2

undefined8 FUN_10045afd2(void)

{
  int iVar1;
  
  if (DAT_1008bf470 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bf470);
    if (iVar1 != 0) {
      FUN_100465e3c();
      ___cxa_atexit(FUN_100465d58,&DAT_1008befd8,0x100000000);
      ___cxa_guard_release(&DAT_1008bf470);
    }
  }
  return DAT_1008befd0;
}

