// name: FUN_10017c3dc
// address: 10017c3dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10017c3dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_60 [80];
  
  FUN_10017c7be(local_60,param_1,param_3,0x95);
  if (0xfffffffffffff86e < param_2 - 0x7d1U) {
    lVar1 = (long)((double)param_2 * _DAT_10070e550);
    if (((long)((double)param_2 * _DAT_10070e550 - DAT_10070e4c0) & lVar1 >> 0x3f) != 0 ||
        lVar1 != 0) {
      uVar2 = FUN_10017c88a(local_60,param_2);
      goto LAB_10017c449;
    }
  }
  uVar2 = 0;
LAB_10017c449:
  FUN_10017cba6(local_60);
  return uVar2;
}

