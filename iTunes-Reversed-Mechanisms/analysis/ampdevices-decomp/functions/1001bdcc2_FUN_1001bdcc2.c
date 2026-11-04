// name: FUN_1001bdcc2
// address: 1001bdcc2

long * FUN_1001bdcc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                    undefined8 param_5)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  
  pvVar3 = operator_new(0x60,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar3 != (void *)0x0) {
    FUN_1001bde3a(pvVar3,param_5);
  }
  FUN_1001bdfde(param_4,pvVar3);
  lVar5 = *param_4;
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a298a(uVar4);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return param_4;
    }
    lVar5 = *param_4;
  }
  *(undefined8 *)(lVar5 + 0x50) = param_3;
  iVar2 = FUN_1001ee941(param_1,param_2,0,FUN_1001bde82,lVar5,(long *)(lVar5 + 0x10));
  if ((iVar2 != 0) || (*(long *)(lVar5 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2a00(uVar4);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      FUN_1002188e4(param_4);
    }
  }
  return param_4;
}

