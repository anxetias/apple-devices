// name: FUN_1001e46a4
// address: 1001e46a4

undefined1 FUN_1001e46a4(long param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((param_3 & 2) != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdb94(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdc0a(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdc92(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = FUN_1001dfe99(param_1);
  uVar4 = FUN_1001dfe99(param_2);
  uVar2 = FUN_1001e339d(param_1,uVar3,param_2,uVar4,param_3);
  return uVar2;
}

