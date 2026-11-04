// name: FUN_100106696
// address: 100106696

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100106696(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar4 = _DAT_100700430;
  bVar2 = *(byte *)(param_4 + 0x19f7);
  if ((ulong)bVar2 != 0) {
    uVar5 = 0;
    do {
      *(uint *)(param_2 + uVar5 * 4) = *(uint *)(param_2 + uVar5 * 4) ^ uVar4;
      *(uint *)(param_3 + uVar5 * 4) = *(uint *)(param_3 + uVar5 * 4) ^ uVar4;
      uVar5 = uVar5 + 1;
    } while (bVar2 != uVar5);
  }
  bVar2 = *(byte *)(param_4 + 0x19f4) >> 1;
  FUN_100106cf4(param_2,*(undefined8 *)(param_4 + 0x1918),*(undefined8 *)(param_4 + 0x1920),bVar2);
  FUN_100106dbe(param_2,bVar2);
  FUN_100106e18(param_2,*(undefined8 *)(param_4 + 0x1928),bVar2);
  bVar2 = *(byte *)(param_4 + 0x19f4);
  bVar3 = bVar2 >> 1;
  FUN_100106cf4(param_3,*(undefined8 *)(param_4 + 0x1920),*(undefined8 *)(param_4 + 0x1918),bVar3);
  FUN_100106dbe(param_3,bVar3);
  FUN_100106e18(param_3,*(undefined8 *)(param_4 + 0x1928),bVar3);
  uVar4 = _DAT_100700430;
  uVar6 = (bVar2 & 0xfffffffe) - 2;
  if (uVar6 != 0) {
    uVar5 = 1;
    do {
      uVar1 = *(undefined4 *)(param_3 + uVar5 * 4);
      *(uint *)(param_3 + uVar5 * 4) = *(uint *)(param_3 + 4 + uVar5 * 4) ^ uVar4;
      *(undefined4 *)(param_3 + 4 + uVar5 * 4) = uVar1;
      uVar5 = uVar5 + 2;
    } while (uVar5 < uVar6);
  }
  return;
}

