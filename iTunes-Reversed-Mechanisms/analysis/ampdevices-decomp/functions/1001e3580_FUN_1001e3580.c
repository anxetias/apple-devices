// name: FUN_1001e3580
// address: 1001e3580

undefined1 FUN_1001e3580(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc88a(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc900(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = FUN_1001df897(param_1);
  uVar5 = FUN_1001df897(param_2);
  if (uVar4 < uVar5) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001df8db(param_1,uVar5,param_2,uVar5,param_3);
  }
  return uVar2;
}

