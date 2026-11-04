// name: FUN_1001c1703
// address: 1001c1703

undefined8 FUN_1001c1703(undefined8 param_1)

{
  int iVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008a21e8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008a21e8);
    if (iVar1 != 0) {
      FUN_1001b7a44(&DAT_1008a21d8);
      ___cxa_atexit(FUN_1001b7a50,&DAT_1008a21d8,0x100000000);
      ___cxa_guard_release(&DAT_1008a21e8);
    }
  }
  if (DAT_1008a21d0 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008a21d0,&local_20,FUN_1001c1ba2);
  }
  FUN_1001b7a5c(param_1,&DAT_1008a21d8);
  return param_1;
}

