// name: FUN_10012a8d4
// address: 10012a8d4

undefined8 * FUN_10012a8d4(void)

{
  int iVar1;
  
  if (DAT_10088fc40 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10088fc40);
    if (iVar1 != 0) {
      FUN_10012a946();
      ___cxa_atexit(FUN_10012ab9a,&DAT_10088fc30,0x100000000);
      ___cxa_guard_release(&DAT_10088fc40);
    }
  }
  return &DAT_10088fc30;
}

