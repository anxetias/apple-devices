// name: FUN_10018e939
// address: 10018e939

void FUN_10018e939(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      uVar2 = 0x3f3f3f3f;
      *param_2 = 0x3f3f3f3f;
    }
    *param_3 = uVar2;
    return;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006932f2(uVar3);
  }
  FUN_1001782e9(0,0);
  return;
}

