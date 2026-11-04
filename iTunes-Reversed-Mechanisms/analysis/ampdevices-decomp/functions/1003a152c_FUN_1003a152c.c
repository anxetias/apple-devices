// name: FUN_1003a152c
// address: 1003a152c

void FUN_1003a152c(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  ushort uVar7;
  undefined8 ****ppppuVar8;
  undefined8 *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  ulong uStack_38;
  
  if ((*(ushort *)(param_1 + 0xf8) & 8) != 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0xf8) & 2) == 0) {
    FUN_10055ea6a(param_1);
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) {
    return;
  }
  uVar4 = (ushort)*(undefined4 *)(param_1 + 0xf8);
  *(ushort *)(param_1 + 0xf8) = uVar4 | 8;
  uVar2 = *(uint *)(lVar5 + 0xc2);
  uVar7 = uVar4 & 0xffef | 8 | (ushort)(uVar2 >> 6) & 0x10;
  *(ushort *)(param_1 + 0xf8) = uVar7;
  if ((uVar2 >> 10 & 1) == 0) {
    *(ushort *)(param_1 + 0xf8) = uVar4 & 0xffcf | 8;
    return;
  }
  *(ushort *)(param_1 + 0xf8) = uVar7 | 0x20;
  local_48 = &local_40;
  local_40 = (undefined8 ****)0x0;
  uStack_38 = 0;
  local_60 = &local_58;
  local_58 = 0;
  lStack_50 = 0;
  if (*(int *)(lVar5 + 0xdc) != 0) {
    piVar1 = (int *)(lVar5 + 0xdc);
    FUN_1003a5708(&local_48,piVar1,piVar1);
    if (*piVar1 != 0) {
      FUN_1003a5708(&local_60,lVar5 + 0xe0);
    }
  }
  while (lVar5 = FUN_1003a095a(), lVar5 != 0) {
    if (*(int *)(lVar5 + 0xdc) != 0) {
      piVar1 = (int *)(lVar5 + 0xdc);
      FUN_1003a5708(&local_48,piVar1,piVar1);
      if (*piVar1 != 0) {
        FUN_1003a5708(&local_60,lVar5 + 0xe0);
      }
    }
  }
  if ((lStack_50 == 1) && (1 < uStack_38)) {
    if ((undefined8 ****)local_40 != (undefined8 ****)0x0) {
      iVar3 = *(int *)((long)local_60 + 0x1c);
      ppppuVar6 = (undefined8 ****)local_40;
      ppppuVar8 = &local_40;
      do {
        if (iVar3 <= *(int *)((long)ppppuVar6 + 0x1c)) {
          ppppuVar8 = ppppuVar6;
        }
        ppppuVar6 = (undefined8 ****)ppppuVar6[*(int *)((long)ppppuVar6 + 0x1c) < iVar3];
      } while (ppppuVar6 != (undefined8 ****)0x0);
      if ((ppppuVar8 != &local_40) && (*(int *)((long)ppppuVar8 + 0x1c) <= iVar3))
      goto LAB_1003a16a9;
    }
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xdf;
  }
LAB_1003a16a9:
  FUN_1002a41f4(&local_60,local_58);
  FUN_1002a41f4(&local_48,local_40);
  return;
}

