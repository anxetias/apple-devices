// name: FUN_1001ebcfb
// address: 1001ebcfb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1001ebcfb(void)

{
  uint64_t uVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = _mach_absolute_time();
  auVar4._8_4_ = (int)(uVar1 >> 0x20);
  auVar4._0_8_ = uVar1;
  auVar4._12_4_ = DAT_10070d3c0._4_4_;
  dVar3 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar1) - _DAT_10070d3d0) +
          (auVar4._8_8_ - _UNK_10070d3d8)) * _DAT_1008a2b28;
  uVar2 = (ulong)dVar3;
  return (long)(dVar3 - DAT_10070e4c0) & (long)uVar2 >> 0x3f | uVar2;
}

