// name: FUN_1001ebc98
// address: 1001ebc98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001ebc98(void)

{
  mach_timebase_info in_RAX;
  mach_timebase_info local_18;
  
  local_18 = in_RAX;
  _mach_timebase_info(&local_18);
  _DAT_1008a2b28 =
       (_DAT_100712280 * (double)((ulong)local_18 & 0xffffffff)) / (double)((ulong)local_18 >> 0x20)
  ;
  _DAT_1008a2b30 =
       ((double)((ulong)local_18 & 0xffffffff) * _DAT_100711ee0) / (double)((ulong)local_18 >> 0x20)
  ;
  return 1;
}

