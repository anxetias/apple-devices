// name: FUN_10013ddb0
// address: 10013ddb0

void FUN_10013ddb0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_10013de3c(param_1,param_2);
  if (*(long *)*param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10013e5f1(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

