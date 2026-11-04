// name: FUN_1001d0801
// address: 1001d0801

undefined8
FUN_1001d0801(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_34;
  
  if ((param_2 >> 0xb & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0cee(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    local_34 = param_3;
    FUN_1001c62d9(local_78,0x44);
    local_68 = 1;
    local_50 = 1;
    local_78[0] = param_4;
    local_60 = param_5;
    uVar2 = FUN_1001d0640(param_1,param_2,local_34,local_78);
  }
  return uVar2;
}

