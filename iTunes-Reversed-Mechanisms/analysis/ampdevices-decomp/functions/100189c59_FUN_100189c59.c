// name: FUN_100189c59
// address: 100189c59

void FUN_100189c59(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f47f(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_2 + 0x420) == '\x01') {
      iVar2 = FUN_100182d59(param_2,*(undefined4 *)(param_2 + 0x424));
    }
    else {
      iVar2 = FUN_1001892ae(param_2,0);
    }
    if (iVar2 != -0x2f) {
      if (*(code **)(param_2 + 0x438) != (code *)0x0) {
        (**(code **)(param_2 + 0x438))
                  (*(undefined8 *)(param_2 + 0x428),iVar2,*(undefined8 *)(param_2 + 0x440));
      }
      if (*(int *)(param_2 + 0x430) != 0) {
        FUN_1001c1300();
      }
      FUN_1001eed65(param_2 + 0x428);
      FUN_1001c64c1(param_2);
      return;
    }
  }
  return;
}

