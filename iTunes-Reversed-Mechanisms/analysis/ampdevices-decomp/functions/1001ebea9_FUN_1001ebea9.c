// name: FUN_1001ebea9
// address: 1001ebea9

undefined8 FUN_1001ebea9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008a2b38 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008a2b38,&local_20,FUN_1001ebf0e);
  }
  if (DAT_1008a2b40 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100166c1b(DAT_1008a2b40,param_1);
    uVar1 = FUN_1001705fc(uVar1);
  }
  return uVar1;
}

