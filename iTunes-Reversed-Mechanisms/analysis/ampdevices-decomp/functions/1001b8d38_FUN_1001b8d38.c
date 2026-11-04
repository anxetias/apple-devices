// name: FUN_1001b8d38
// address: 1001b8d38

long FUN_1001b8d38(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return 0;
    }
    lVar2 = FUN_1001737db(param_2,0);
    if (lVar2 != 0) {
      FUN_1001741cf(lVar2,param_1[1] + 0xc,0x8000100);
      return lVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a19bc(uVar3);
    }
  }
  else {
    lVar2 = FUN_1001737db(param_2,0);
    if (lVar2 != 0) {
      FUN_100174240(lVar2,*param_1 + 0xc,*(undefined8 *)*param_1);
      return lVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a1946(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

