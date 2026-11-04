// name: FUN_1005e24cd
// address: 1005e24cd

uint FUN_1005e24cd(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar5 = 0;
  uVar4 = param_2 - uVar2;
  if (param_2 < uVar2 || uVar4 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
    if (uVar2 == 0) {
      uVar6 = 0;
    }
    uVar6 = uVar6 & *(uint *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1 + 4;
    uVar2 = *(uint *)(lVar1 + 4);
    *(uint *)(param_1 + 0x20) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = 0x20;
    param_2 = uVar4;
  }
  iVar3 = uVar2 - param_2;
  if (iVar3 != 0x20) {
    uVar5 = -1 << (-(char)param_2 & 0x1fU);
    if (param_2 == 0) {
      uVar5 = 0;
    }
    uVar5 = uVar5 >> (-(char)uVar2 & 0x1fU);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    uVar5 = (uVar5 & *(uint *)(param_1 + 0x20)) >> ((byte)iVar3 & 0x1f);
  }
  uVar2 = 0;
  if (uVar4 != 0x20) {
    uVar2 = uVar6 << ((byte)uVar4 & 0x1f);
  }
  *(int *)(param_1 + 0x24) = iVar3;
  return uVar2 | uVar5;
}

