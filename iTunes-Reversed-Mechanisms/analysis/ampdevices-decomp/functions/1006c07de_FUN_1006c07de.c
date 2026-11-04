// name: FUN_1006c07de
// address: 1006c07de

void FUN_1006c07de(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&DAT_1008a2a48);
  if (iVar1 != 0) {
    DAT_1008a2a38 = 0;
    uRam00000001008a2a40 = 0;
    DAT_1008a2a30 = &DAT_1008a2a38;
    ___cxa_atexit(FUN_1001e8232,&DAT_1008a2a30,0x100000000);
    ___cxa_guard_release(&DAT_1008a2a48);
    return;
  }
  return;
}

