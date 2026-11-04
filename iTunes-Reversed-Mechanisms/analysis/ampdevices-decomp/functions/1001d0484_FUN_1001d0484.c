// name: FUN_1001d0484
// address: 1001d0484

undefined8
FUN_1001d0484(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_34;
  
  if ((param_3 >> 10 & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b094e(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    local_34 = param_4;
    FUN_1001c62d9(local_78,0x44);
    local_68 = 1;
    local_50 = 1;
    local_78[0] = param_5;
    local_60 = param_5;
    uVar2 = FUN_1001d0405(param_1,param_2,param_3,local_34,local_78);
  }
  return uVar2;
}

