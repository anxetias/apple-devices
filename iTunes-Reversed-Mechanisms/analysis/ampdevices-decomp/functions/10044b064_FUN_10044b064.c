// name: FUN_10044b064
// address: 10044b064

void FUN_10044b064(long *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_10044aec4();
  if (((*(uint *)(param_1 + 0x57c) >> 0x14 & 1) == 0) != (bool)bVar1) {
    return;
  }
  *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x57c) & 0xffefffff | (uint)bVar1 << 0x14;
                    /* WARNING: Could not recover jumptable at 0x00010044b0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0x74647265,param_1,0,0);
  return;
}

