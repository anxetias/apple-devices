// name: FUN_1002ce928
// address: 1002ce928

undefined8 FUN_1002ce928(undefined8 param_1)

{
  int iVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008bbf20 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bbf20);
    if (iVar1 != 0) {
      FUN_1001b7a44(&DAT_1008bbf10);
      ___cxa_atexit(FUN_1001b7a50,&DAT_1008bbf10,0x100000000);
      ___cxa_guard_release(&DAT_1008bbf20);
    }
  }
  if (DAT_1008bbf08 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008bbf08,&local_20,FUN_1002cf036);
  }
  FUN_1001b7a5c(param_1,&DAT_1008bbf10);
  return param_1;
}

