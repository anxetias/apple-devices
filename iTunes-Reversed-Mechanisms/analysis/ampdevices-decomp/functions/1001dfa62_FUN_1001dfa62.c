// name: FUN_1001dfa62
// address: 1001dfa62

undefined1 FUN_1001dfa62(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1001e5fdb(param_2,0x8000100);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba5db(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1001df957(param_1,lVar3,param_3);
    FUN_1001c64c1(lVar3);
  }
  return uVar1;
}

