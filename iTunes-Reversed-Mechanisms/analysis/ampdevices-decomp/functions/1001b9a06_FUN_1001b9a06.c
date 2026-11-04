// name: FUN_1001b9a06
// address: 1001b9a06

int FUN_1001b9a06(ulong *param_1,void *param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_4 == 0) {
    uVar2 = *param_1;
    bVar8 = uVar2 < param_3;
    uVar6 = param_3;
    if (bVar8) {
      uVar6 = uVar2;
    }
    uVar7 = 0xffffffff;
    if (!bVar8) {
      uVar7 = (uint)(!bVar8 && uVar2 != param_3);
    }
    uVar4 = _memcmp((void *)((long)param_1 + 0xc),param_2,uVar6);
    if (uVar4 != 0) {
      uVar7 = uVar4;
    }
    iVar3 = 1;
    if ((int)uVar7 < 1) {
      iVar3 = -(uint)(uVar7 != 0);
    }
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
    uVar5 = _CFStringCreateWithBytesNoCopy(0,(long)param_1 + 0xc,*param_1,0x8000100,0,uVar1);
    local_40 = uVar5;
    local_38 = _CFStringCreateWithBytesNoCopy(0,param_2,param_3,0x8000100,0,uVar1);
    iVar3 = _CFStringCompare(uVar5,local_38,param_4);
    FUN_10016d588(&local_38);
    FUN_10016d588(&local_40);
  }
  return iVar3;
}

