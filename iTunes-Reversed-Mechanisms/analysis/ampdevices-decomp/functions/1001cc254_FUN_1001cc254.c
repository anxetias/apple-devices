// name: FUN_1001cc254
// address: 1001cc254

undefined4 FUN_1001cc254(void)

{
  undefined4 in_EAX;
  undefined3 uVar2;
  int iVar1;
  undefined3 extraout_var;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  if (DAT_1008a2298 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008a2298);
    uVar2 = 0;
    if (iVar1 != 0) {
      DAT_1008a2290 = FUN_1001cc2b1();
      ___cxa_guard_release(&DAT_1008a2298);
      uVar2 = extraout_var;
    }
  }
  return CONCAT31(uVar2,DAT_1008a2290);
}

