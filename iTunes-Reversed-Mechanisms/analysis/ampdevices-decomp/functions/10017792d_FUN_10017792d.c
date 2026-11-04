// name: FUN_10017792d
// address: 10017792d

int FUN_10017792d(byte *param_1,byte *param_2,int param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  
  bVar8 = *param_1;
  bVar1 = param_1[1];
  bVar7 = *param_2;
  bVar2 = param_2[1];
  if (param_3 == 0) {
    if (param_4 == '\0') goto LAB_100177988;
    bVar4 = 0xff;
    if (bVar1 == 0x80 && bVar8 == 0) {
      bVar8 = 0xff;
    }
    bVar9 = bVar2 == 0x80 && bVar7 == 0;
  }
  else {
    bVar4 = 0;
    if (bVar1 == 0x80) {
      bVar8 = 0;
    }
    bVar9 = bVar2 == 0x80;
  }
  if (bVar9) {
    bVar7 = bVar4;
  }
LAB_100177988:
  uVar5 = (uint)bVar8 | (uint)bVar1 << 8 | (uint)*(ushort *)(param_1 + 2) << 0x10;
  uVar6 = (uint)bVar7 | (uint)bVar2 << 8 | (uint)*(ushort *)(param_2 + 2) << 0x10;
  iVar3 = 1;
  if (uVar5 <= uVar6) {
    iVar3 = -(uint)(uVar5 < uVar6);
  }
  return iVar3;
}

