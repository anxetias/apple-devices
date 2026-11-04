// name: FUN_1005fc8be
// address: 1005fc8be

ulong FUN_1005fc8be(long param_1)

{
  undefined8 unaff_R14;
  ulong uVar1;
  undefined1 local_28 [16];
  undefined7 uVar2;
  
  FUN_100238ca8(local_28,param_1 + 0x40);
  uVar2 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar1 = CONCAT71(uVar2,1);
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = CONCAT71(uVar2,*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90));
  }
  FUN_10015a142(local_28);
  return uVar1 & 0xffffffff;
}

