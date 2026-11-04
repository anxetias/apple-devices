// name: FUN_1001bdf7a
// address: 1001bdf7a

void FUN_1001bdf7a(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2a76(uVar2);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
  }
  FUN_1001eeea0(param_1,lVar3);
  return;
}

