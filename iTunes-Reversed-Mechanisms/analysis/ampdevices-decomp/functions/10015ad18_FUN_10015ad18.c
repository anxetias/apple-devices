// name: FUN_10015ad18
// address: 10015ad18

void FUN_10015ad18(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066b43b(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_10015a687(param_1);
    if (iVar1 != 8) {
      FUN_1001c631b(puVar3,param_3,param_1[1]);
      return;
    }
    *param_3 = *puVar3;
  }
  return;
}

