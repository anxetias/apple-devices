// name: FUN_10014441a
// address: 10014441a

void FUN_10014441a(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  cVar1 = FUN_10013b9f2(param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10014a6d8(uVar2);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  pvVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar3 != (void *)0x0) {
    FUN_10013bac4(pvVar3,param_2);
  }
  FUN_1001444c2(param_1 + 0x100,pvVar3);
  return;
}

