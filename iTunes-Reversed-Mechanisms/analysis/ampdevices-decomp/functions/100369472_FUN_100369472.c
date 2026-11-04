// name: FUN_100369472
// address: 100369472

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100369472(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 in_XMM1_Qb;
  
  uVar1 = FUN_1001ebdc3();
  auVar2._8_8_ = in_XMM1_Qb;
  auVar2._0_8_ = (double)(param_2 - 1) * ((double)uVar1 / _DAT_100745628) + DAT_100700b00;
  auVar2 = roundsd(ZEXT816(0),auVar2,9);
  return (long)auVar2._0_8_;
}

