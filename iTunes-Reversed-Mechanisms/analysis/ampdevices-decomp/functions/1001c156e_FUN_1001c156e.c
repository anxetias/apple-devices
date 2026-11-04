// name: FUN_1001c156e
// address: 1001c156e

undefined * FUN_1001c156e(void)

{
  undefined1 *local_20;
  undefined1 **local_18;
  undefined1 local_9;
  
  if (DAT_1008a2198 == '\0') {
    FUN_1006a5359();
  }
  if (DAT_1008a21a0 != -1) {
    local_20 = &local_9;
    local_18 = &local_20;
    std::__call_once((ulong *)&DAT_1008a21a0,&local_18,FUN_1001c1a00);
  }
  return &DAT_1008a2170;
}

