// name: FUN_1005e2564
// address: 1005e2564

undefined8 FUN_1005e2564(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1005e24cd(param_1,0x20);
  uVar3 = 0xfffff826;
  if (iVar2 == 0x1b2) {
    while( true ) {
      uVar1 = *(ulong *)(param_1 + 0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      iVar2 = FUN_1005e24cd(param_1,0x18);
      *(ulong *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      if (iVar2 == 1) break;
      if (*(ulong *)(param_1 + 0x18) <= uVar1) {
        return 0xfffff826;
      }
      FUN_1005e24cd(param_1,8);
    }
    uVar3 = 0;
  }
  return uVar3;
}

