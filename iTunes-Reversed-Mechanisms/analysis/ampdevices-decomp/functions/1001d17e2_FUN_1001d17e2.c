// name: FUN_1001d17e2
// address: 1001d17e2

undefined8
FUN_1001d17e2(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_38;
  
  if ((param_2 & 0xff1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1900(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    local_38 = param_5;
    FUN_1001c62d9(local_80,0x44);
    local_70 = 1;
    local_58 = 1;
    local_80[0] = param_4;
    local_68 = param_4;
    uVar2 = FUN_1001d1760(param_1,param_2,param_3,local_80,local_38);
  }
  return uVar2;
}

