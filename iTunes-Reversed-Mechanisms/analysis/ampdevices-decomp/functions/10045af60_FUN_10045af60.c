// name: FUN_10045af60
// address: 10045af60

undefined8 FUN_10045af60(void)

{
  int iVar1;
  
  if (DAT_1008befc8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008befc8);
    if (iVar1 != 0) {
      FUN_100465b32();
      ___cxa_atexit(FUN_100465a4e,&DAT_1008beb30,0x100000000);
      ___cxa_guard_release(&DAT_1008befc8);
    }
  }
  return DAT_1008beb28;
}

