// name: FUN_10053c43a
// address: 10053c43a

undefined * FUN_10053c43a(void)

{
  int iVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008c7860 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008c7860);
    if (iVar1 != 0) {
      FUN_1001aa318(&DAT_1008c7858);
      ___cxa_atexit(FUN_1001ab006,&DAT_1008c7858,0x100000000);
      ___cxa_guard_release(&DAT_1008c7860);
    }
  }
  if (DAT_1008c7868 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008c7868,&local_20,FUN_10053c4eb);
  }
  return &DAT_1008c7858;
}

