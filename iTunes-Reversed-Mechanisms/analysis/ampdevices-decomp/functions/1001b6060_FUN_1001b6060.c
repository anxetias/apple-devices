// name: FUN_1001b6060
// address: 1001b6060

long * FUN_1001b6060(long *param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar2 != (void *)0x0) {
    FUN_1001b6110(pvVar2,param_2);
  }
  FUN_1001b7198(param_1,pvVar2);
  if (*param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a134d(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return param_1;
}

