// name: FUN_1001db722
// address: 1001db722

void FUN_1001db722(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001eacad(param_2,param_1 + 0xe8);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 0x38) = param_3;
      if (*(code **)(param_2 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001db766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2 + 0x10))(param_2);
        return;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b7cf5(iVar2,uVar3);
      }
    }
  }
  return;
}

