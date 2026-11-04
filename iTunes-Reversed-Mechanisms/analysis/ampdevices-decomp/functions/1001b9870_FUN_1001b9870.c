// name: FUN_1001b9870
// address: 1001b9870

int FUN_1001b9870(ulong *param_1,long param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  ushort uVar9;
  long lVar10;
  bool bVar11;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_4 == 0) {
    uVar2 = *param_1;
    uVar8 = param_3;
    if (uVar2 < param_3) {
      uVar8 = uVar2;
    }
    if (uVar8 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      lVar10 = 0;
      do {
        uVar6 = *(ushort *)((long)param_1 + lVar10 + 0xc);
        uVar7 = *(ushort *)(param_2 + lVar10);
        if (uVar6 != uVar7) break;
        bVar11 = uVar8 * 2 + -2 != lVar10;
        lVar10 = lVar10 + 2;
      } while (bVar11);
      if (((uVar6 != uVar7) && (0xd7ff < uVar6)) && (0xd7ff < uVar7)) {
        uVar9 = uVar6 + 0x2000;
        bVar11 = uVar6 < 0xe000;
        uVar6 = uVar6 - 0x800;
        if (bVar11) {
          uVar6 = uVar9;
        }
        if (uVar7 < 0xe000) {
          uVar7 = uVar7 + 0x2000;
        }
        else {
          uVar7 = uVar7 - 0x800;
        }
      }
    }
    uVar4 = 0xffffffff;
    if (param_3 <= uVar2) {
      uVar4 = (uint)(param_3 < uVar2);
    }
    if (uVar6 != uVar7) {
      uVar4 = (uint)uVar6 - (uint)uVar7;
    }
    iVar3 = 1;
    if ((int)uVar4 < 1) {
      iVar3 = -(uint)(uVar4 != 0);
    }
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
    uVar5 = _CFStringCreateWithCharactersNoCopy(0,(long)param_1 + 0xc,*param_1,uVar1);
    local_40 = uVar5;
    local_38 = _CFStringCreateWithCharactersNoCopy(0,param_2,param_3,uVar1);
    iVar3 = _CFStringCompare(uVar5,local_38,param_4);
    FUN_10016d588(&local_38);
    FUN_10016d588(&local_40);
  }
  return iVar3;
}

