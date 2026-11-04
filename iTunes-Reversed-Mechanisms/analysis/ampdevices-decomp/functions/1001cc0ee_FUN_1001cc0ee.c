// name: FUN_1001cc0ee
// address: 1001cc0ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cc0ee(void)

{
  mach_timebase_info in_RAX;
  mach_timebase_info local_18;
  
  local_18 = in_RAX;
  _mach_timebase_info(&local_18);
  _DAT_1008a2270 =
       ((double)((ulong)local_18 & 0xffffffff) * _DAT_100711ee0) / (double)((ulong)local_18 >> 0x20)
  ;
  return;
}

