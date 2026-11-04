// name: FUN_1001cc0ac
// address: 1001cc0ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1001cc0ac(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (DAT_1008a2268 != -1) {
    FUN_1006aec98();
  }
  auVar1._8_4_ = (int)((ulong)param_1 >> 0x20);
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = DAT_10070d3c0._4_4_;
  return (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_1) - _DAT_10070d3d0) +
         (auVar1._8_8_ - _UNK_10070d3d8)) * _DAT_1008a2270;
}

