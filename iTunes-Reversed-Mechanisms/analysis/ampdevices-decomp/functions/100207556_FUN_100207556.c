// name: FUN_100207556
// address: 100207556

undefined8 FUN_100207556(byte *param_1,byte *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined7 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
    uVar4 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar6 = *(byte **)(param_1 + 0x10);
  }
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    pbVar5 = *(byte **)(param_2 + 0x10);
  }
  uVar3 = uVar7;
  if (uVar4 < uVar7) {
    uVar3 = uVar4;
  }
  iVar1 = _memcmp(pbVar6,pbVar5,uVar3);
  uVar2 = (undefined7)(CONCAT44(extraout_var,iVar1) >> 8);
  if (iVar1 == 0) {
    if (uVar4 == uVar7) {
      return 0;
    }
    if (uVar7 <= uVar4) {
      return CONCAT71(uVar2,1);
    }
  }
  else if (-1 < iVar1) {
    return CONCAT71(uVar2,1);
  }
  return CONCAT71(uVar2,0xff);
}

