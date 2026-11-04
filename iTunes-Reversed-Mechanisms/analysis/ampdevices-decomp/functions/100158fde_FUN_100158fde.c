// name: FUN_100158fde
// address: 100158fde

undefined4 FUN_100158fde(long *param_1,undefined8 param_2)

{
  char cVar1;
  long local_30;
  undefined4 local_28;
  undefined4 local_24;
  long *local_20;
  
  local_30 = FUN_10015907a();
  if (local_30 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_20,1);
  }
  else {
    local_20 = &local_30;
    cVar1 = FUN_1001652da(local_30,&local_28);
    local_24 = local_28;
    FUN_10017060f(local_30);
    local_20._0_4_ = local_24;
  }
  if (cVar1 == '\0') {
    local_20._0_4_ = 0;
  }
  return local_20._0_4_;
}

