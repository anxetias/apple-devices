// name: FUN_10049ca60
// address: 10049ca60

undefined4 FUN_10049ca60(void)

{
  undefined4 in_EAX;
  undefined3 uVar2;
  int iVar1;
  undefined3 extraout_var;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  if (DAT_1008c7770 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008c7770);
    uVar2 = 0;
    if (iVar1 != 0) {
      DAT_1008c7768 = FUN_1001c4aa2();
      ___cxa_guard_release(&DAT_1008c7770);
      uVar2 = extraout_var;
    }
  }
  return CONCAT31(uVar2,DAT_1008c7768);
}

