// name: FUN_1001d06cb
// address: 1001d06cb

undefined8 FUN_1001d06cb(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  
  if ((param_2 & 0xff1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0c02(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(local_78,0x44);
    local_68 = 1;
    local_50 = 1;
    local_78[0] = param_4;
    local_60 = param_4;
    uVar2 = FUN_1001d0640(param_1,param_2,param_3,local_78);
  }
  return uVar2;
}

