// name: FUN_10045aeee
// address: 10045aeee

undefined8 FUN_10045aeee(void)

{
  int iVar1;
  
  if (DAT_1008beb20 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008beb20);
    if (iVar1 != 0) {
      FUN_1004657f8();
      ___cxa_atexit(FUN_100465714,&DAT_1008be688,0x100000000);
      ___cxa_guard_release(&DAT_1008beb20);
    }
  }
  return DAT_1008be680;
}

