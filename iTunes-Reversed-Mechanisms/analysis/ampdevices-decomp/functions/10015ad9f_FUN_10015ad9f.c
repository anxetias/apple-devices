// name: FUN_10015ad9f
// address: 10015ad9f

void FUN_10015ad9f(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066b4b1(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1[1] != 8) {
      uVar3 = FUN_10015a687(param_1);
      FUN_1001c631b(param_3,uVar3,param_1[1]);
      return;
    }
    uVar3 = *param_3;
    puVar1 = (undefined8 *)FUN_10015a687(param_1);
    *puVar1 = uVar3;
  }
  return;
}

