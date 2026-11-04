// name: FUN_10032f11e
// address: 10032f11e

undefined8 * FUN_10032f11e(undefined8 *param_1)

{
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  
  if (DAT_1008c66f0 != -1) {
    local_28 = &local_11;
    local_20 = &local_28;
    std::__call_once((ulong *)&DAT_1008c66f0,&local_20,FUN_10032f233);
  }
  *param_1 = &DAT_1008c66f8;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

