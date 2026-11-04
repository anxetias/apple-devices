// name: FUN_1001c16ac
// address: 1001c16ac

undefined8 FUN_1001c16ac(undefined8 param_1)

{
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008a21c8 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008a21c8,&local_20,FUN_1001c1af8);
  }
  FUN_1001b7a5c(param_1,&DAT_1008a2110);
  return param_1;
}

