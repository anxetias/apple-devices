// name: FUN_1001e60c1
// address: 1001e60c1

long FUN_1001e60c1(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf7de(uVar4);
    }
  }
  else {
    lVar2 = FUN_1001737f8();
    lVar3 = FUN_1001c63e1(lVar2 * 2 + 2);
    if (lVar3 != 0) {
      FUN_10017384f(param_1,0,lVar2,lVar3);
      *(undefined2 *)(lVar3 + lVar2 * 2) = 0;
      return lVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf768(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

