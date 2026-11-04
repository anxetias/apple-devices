// name: FUN_10012dbb6
// address: 10012dbb6

void FUN_10012dbb6(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 local_38 [8];
  undefined2 local_28 [4];
  
  uVar3 = FUN_10012d63e();
  cVar2 = _os_log_type_enabled(uVar3,1);
  if (cVar2 != '\0') {
    local_38[0] = 0;
    __os_log_impl(0x100000000,uVar3,1,"Destroying request scheduler.",local_38,2);
  }
  std::mutex::lock();
  lVar1 = *(long *)(param_1 + 0x38);
  std::mutex::unlock();
  if (lVar1 != 0) {
    uVar3 = FUN_10012d63e();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "Found request scheduler with pending requests at StoreServices un-initialization time."
                    ,local_28,2);
    }
    FUN_10012dd06(param_1);
    FUN_10012dd66(param_1,2);
    std::mutex::lock();
    lVar1 = *(long *)(param_1 + 0x38);
    std::mutex::unlock();
    if (lVar1 != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_100132236(uVar3);
      }
      FUN_1001782e9(0,1);
    }
  }
  return;
}

