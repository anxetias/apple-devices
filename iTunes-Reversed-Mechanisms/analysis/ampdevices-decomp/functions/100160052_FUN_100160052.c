// name: FUN_100160052
// address: 100160052

undefined4
FUN_100160052(undefined4 *param_1,long param_2,uint param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1001c62d9(param_1,0x48);
  *param_1 = 0x62756666;
  *(char *)((long)param_1 + 5) = (char)param_3;
  *(char *)((long)param_1 + 6) = (char)param_3;
  *(undefined8 *)(param_1 + 2) = param_5;
  uVar6 = (ulong)(param_3 == 0 || param_2 != 0) << 0x11;
  if (param_4 != 0) {
    uVar6 = param_4;
  }
  lVar1 = 0;
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    do {
      uVar5 = uVar6;
      lVar1 = FUN_1001c63e1(uVar5);
      bVar2 = 0xfff < uVar5 && lVar1 == 0;
      uVar6 = uVar5 >> bVar2;
    } while (bVar2);
    uVar3 = 0xffffff94;
    if (uVar5 >= 0x1000) {
      uVar3 = 0;
    }
    if (lVar1 != 0) {
      uVar3 = 0;
    }
    if (lVar1 == 0 && uVar5 < 0x1000) {
      return uVar3;
    }
    param_3 = (uint)*(byte *)((long)param_1 + 5);
  }
  *(long *)(param_1 + 0xc) = lVar1;
  *(ulong *)(param_1 + 6) = uVar6;
  bVar2 = (char)param_3 != '\0';
  lVar4 = lVar1 + -1 + uVar6;
  if (bVar2) {
    lVar4 = lVar1;
  }
  *(ulong *)(param_1 + 8) = (ulong)bVar2 + lVar1;
  *(long *)(param_1 + 0xe) = lVar4;
  return 0;
}

