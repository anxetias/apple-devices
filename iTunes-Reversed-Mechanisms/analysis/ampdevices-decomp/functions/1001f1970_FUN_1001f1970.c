// name: FUN_1001f1970
// address: 1001f1970

long * FUN_1001f1970(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_2c;
  
  local_40 = param_2;
  uStack_38 = param_3;
  if (DAT_1008a2b50 != -1) {
    FUN_1006c5e3c();
  }
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  if (auVar1 == (undefined1  [16])0x0) {
    FUN_1001aa318(param_1);
  }
  else {
    std::mutex::lock();
    lVar3 = FUN_1001f1ae4(DAT_1008a2b60,&local_40);
    if (lVar3 == 0) {
      FUN_1001f1875(param_1,&local_40,&local_2c,0);
      if ((local_2c != -0x80) && (local_2c != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006c5e56(local_2c,uVar4);
        }
      }
      if (*param_1 != 0) {
        FUN_1001f1cf6(DAT_1008a2b60,&local_40,&local_40,param_1);
      }
    }
    else {
      FUN_1001a8c1c(param_1,lVar3 + 0x20);
    }
    std::mutex::unlock();
  }
  return param_1;
}

