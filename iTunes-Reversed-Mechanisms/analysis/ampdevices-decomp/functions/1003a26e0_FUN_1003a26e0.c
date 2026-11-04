// name: FUN_1003a26e0
// address: 1003a26e0

void FUN_1003a26e0(long param_1)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x48);
  FUN_1003a27a2();
  if ((*(ushort *)(param_1 + 0xf8) & 1) != 0) {
    *(ushort *)(param_1 + 0xf8) = *(ushort *)(param_1 + 0xf8) & 0xfffe;
    if (plVar2 == (long *)0x0) {
      if (*(int *)(param_1 + 0xf4) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xf4) = 0;
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,0x414c6363,param_1,0,0);
  }
  uVar1 = *(uint *)(param_1 + 0xf4);
  if ((uVar1 != 0) && (*(undefined4 *)(param_1 + 0xf4) = 0, plVar2 != (long *)0x0)) {
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0x414c6163,param_1,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001003a2781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,0x414c6d66,param_1,uVar1,0);
    return;
  }
  return;
}

