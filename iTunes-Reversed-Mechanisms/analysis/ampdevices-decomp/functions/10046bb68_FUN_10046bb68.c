// name: FUN_10046bb68
// address: 10046bb68

void FUN_10046bb68(long param_1)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = PTR___NSConcreteStackBlock_10082caf0;
  local_30 = 0x42000000;
  local_28 = FUN_10046bbc3;
  local_20 = &DAT_10085c150;
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  uStack_c = *(undefined4 *)(param_1 + 0x2c);
  if (DAT_1008bf918 != -1) {
    _dispatch_once(&DAT_1008bf918,&local_38);
  }
  return;
}

