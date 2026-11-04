// name: FUN_1001c4831
// address: 1001c4831

undefined8 FUN_1001c4831(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_2c;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7880(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_2 = 0xffffffff;
    lVar2 = FUN_1001c4798(param_1,"IOUSBDevice",&cf_DeviceSpeed);
    if (lVar2 == 0) {
      uVar5 = 0xe00002f0;
    }
    else {
      lVar3 = FUN_1001705e9(lVar2);
      lVar4 = FUN_100171f56();
      uVar5 = 0xe00002f0;
      if (lVar3 == lVar4) {
        cVar1 = FUN_100172017(lVar2,3,&local_2c);
        if (cVar1 == '\x01') {
          *param_2 = local_2c;
          uVar5 = 0;
        }
      }
      FUN_10017060f(lVar2);
    }
  }
  return uVar5;
}

