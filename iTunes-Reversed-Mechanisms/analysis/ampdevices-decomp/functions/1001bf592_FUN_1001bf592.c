// name: FUN_1001bf592
// address: 1001bf592

int FUN_1001bf592(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_6 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3abc(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_6 = 0;
    puVar3 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a3a46(uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = param_3;
      *(undefined4 *)(puVar3 + 2) = param_1;
      *(undefined4 *)((long)puVar3 + 0x14) = param_2;
      iVar2 = FUN_1001bf708(puVar3,param_4,param_5);
      if (iVar2 == 0) {
        *param_6 = puVar3;
        iVar2 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a39da(iVar2,uVar4);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        FUN_1001bf8ae(puVar3);
        operator_delete(puVar3);
      }
    }
  }
  return iVar2;
}

