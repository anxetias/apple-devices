// name: FUN_1001d089f
// address: 1001d089f

undefined8 FUN_1001d089f(undefined8 param_1,uint param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulong local_78 [2];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_50;
  
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0d64(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(local_78,0x44);
    local_68 = 1;
    local_50 = 1;
    local_78[0] = (ulong)(param_4 != '\0');
    local_60 = (ulong)(param_4 != '\0');
    uVar2 = FUN_1001d0640(param_1,param_2,param_3,local_78);
  }
  return uVar2;
}

