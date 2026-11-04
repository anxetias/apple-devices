// name: FUN_1001e39bb
// address: 1001e39bb

ulong FUN_1001e39bb(uint param_1)

{
  ulong uVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (param_1 < 0x100) {
    if (DAT_1008a2360 != -1) {
      local_28 = &local_11;
      local_20 = &local_28;
      std::__call_once((ulong *)&DAT_1008a2360,&local_20,FUN_1001e6f04);
    }
    return (ulong)(uint)(&DAT_1008a2370)[param_1 & 0xffff];
  }
  uVar1 = FUN_1001e7b1b(param_1 & 0xffff);
  return uVar1;
}

