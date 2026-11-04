// name: FUN_1001ebd46
// address: 1001ebd46

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1001ebd46(void)

{
  uint64_t uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _mach_absolute_time();
  auVar2._8_4_ = (int)(uVar1 >> 0x20);
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = DAT_10070d3c0._4_4_;
  return (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar1) - _DAT_10070d3d0) +
         (auVar2._8_8_ - _UNK_10070d3d8)) * _DAT_1008a2b30;
}

