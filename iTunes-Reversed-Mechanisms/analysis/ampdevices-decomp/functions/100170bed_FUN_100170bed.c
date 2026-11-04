// name: FUN_100170bed
// address: 100170bed

void FUN_100170bed(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10067a12e(uVar3);
    }
  }
  else if (param_2 < 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10067a042(uVar3);
    }
  }
  else {
    lVar1 = _CFArrayGetCount();
    if (param_2 < lVar1) {
      _CFArrayRemoveValueAtIndex(param_1,param_2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10067a0b8(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

