// name: FUN_100407cbf
// address: 100407cbf

uint FUN_100407cbf(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_100407d12(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  iVar2 = FUN_100407d12(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
  uVar3 = iVar1 - iVar2;
  if (iVar1 - iVar2 == 0) {
    uVar3 = 0xffffffff;
    if (*(uint *)(param_2 + 0x10) <= *(uint *)(param_1 + 0x10)) {
      uVar3 = (uint)(*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10));
    }
  }
  return uVar3;
}

