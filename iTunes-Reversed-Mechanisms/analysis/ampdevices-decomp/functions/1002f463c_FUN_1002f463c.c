// name: FUN_1002f463c
// address: 1002f463c

undefined * FUN_1002f463c(void)

{
  int iVar1;
  
  if (DAT_1008c66d8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008c66d8);
    if (iVar1 != 0) {
      FUN_1002f46c0(&DAT_1008c5db0);
      ___cxa_atexit(FUN_1002f46b6,&DAT_1008c5db0,0x100000000);
      ___cxa_guard_release(&DAT_1008c66d8);
    }
  }
  return &DAT_1008c5db0;
}

