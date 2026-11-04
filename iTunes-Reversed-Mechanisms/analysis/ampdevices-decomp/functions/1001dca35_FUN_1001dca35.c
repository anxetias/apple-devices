// name: FUN_1001dca35
// address: 1001dca35

void FUN_1001dca35(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_2 + 8) != 0x72656164) && (*(int *)(param_2 + 8) != 0x77726974)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b7dcd(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = FUN_1001eacad(param_2,param_1 + 0x70);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 0x38) = param_3;
      if (*(code **)(param_2 + 0x10) != (code *)0x0) {
        (**(code **)(param_2 + 0x10))(param_2);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b7e43(iVar2,uVar3);
      }
    }
  }
  return;
}

