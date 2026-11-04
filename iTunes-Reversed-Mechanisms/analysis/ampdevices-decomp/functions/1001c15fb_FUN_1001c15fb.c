// name: FUN_1001c15fb
// address: 1001c15fb

undefined * FUN_1001c15fb(void)

{
  int iVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008a21c0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008a21c0);
    if (iVar1 != 0) {
      FUN_1001b7a44(&DAT_1008a21b0);
      ___cxa_atexit(FUN_1001b7a50,&DAT_1008a21b0,0x100000000);
      ___cxa_guard_release(&DAT_1008a21c0);
    }
  }
  if (DAT_1008a21a8 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008a21a8,&local_20,FUN_1001c1a3b);
  }
  return &DAT_1008a21b0;
}

