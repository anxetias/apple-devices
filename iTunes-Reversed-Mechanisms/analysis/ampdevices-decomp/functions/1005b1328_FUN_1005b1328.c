// name: FUN_1005b1328
// address: 1005b1328

void FUN_1005b1328(undefined8 param_1)

{
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  
  FUN_1001a8c1c(local_20);
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  FUN_100283e44();
  FUN_1005b1182(param_1,local_20,&local_38);
  if (local_38 != (void *)0x0) {
    pvStack_30 = local_38;
    operator_delete(local_38);
  }
  FUN_1001ab006(local_20);
  return;
}

