// name: FUN_1001e3f7b
// address: 1001e3f7b

void FUN_1001e3f7b(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  if (param_1 == (undefined8 *)0x0 || param_2 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bd610(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    puVar6 = (undefined2 *)*param_1;
    iVar5 = *param_2;
    while ((iVar4 = 0, iVar5 != 0 &&
           (bVar1 = FUN_1001e39bb(*puVar6), iVar4 = iVar5, (bVar1 & 0x3c) != 0))) {
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    }
    *param_1 = puVar6;
    *param_2 = iVar4;
  }
  return;
}

