// name: FUN_10049c6a8
// address: 10049c6a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049c6a8(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = 0xffffffffffffffff;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10) + _DAT_100711be0;
  *(ulong *)(param_1 + 0x10) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + _UNK_100711be4,iVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if (0x40 < (int)uVar1 && iVar2 * 6 < (int)uVar1) {
    FUN_10049c1b8(param_1,uVar1 >> 1);
    return;
  }
  return;
}

