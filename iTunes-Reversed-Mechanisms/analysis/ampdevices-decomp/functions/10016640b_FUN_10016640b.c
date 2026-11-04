// name: FUN_10016640b
// address: 10016640b

ulong FUN_10016640b(long param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 unaff_R14;
  ulong uVar6;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar6 = CONCAT71(uVar7,param_1 == 0 && param_2 == 0);
  if (param_2 != 0 && param_1 != 0) {
    sVar2 = FUN_100170ef7();
    sVar3 = FUN_100170ef7(param_2);
    uVar6 = CONCAT71(uVar7,sVar2 == sVar3);
    if (sVar2 == sVar3) {
      pvVar4 = (void *)FUN_100170f3b(param_1);
      pvVar5 = (void *)FUN_100170f3b(param_2);
      iVar1 = _memcmp(pvVar4,pvVar5,sVar2);
      if (iVar1 != 0) {
        uVar6 = 0;
      }
    }
  }
  return uVar6 & 0xffffffff;
}

