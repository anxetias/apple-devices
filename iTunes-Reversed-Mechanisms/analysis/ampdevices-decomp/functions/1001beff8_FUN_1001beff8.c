// name: FUN_1001beff8
// address: 1001beff8

int FUN_1001beff8(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a35be(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_2 = 0;
  plVar3 = operator_new(0x98,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3548(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  FUN_1001be362(plVar3,param_1);
  *plVar3 = (long)&PTR_FUN_10083d018;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  iVar2 = FUN_1001bf198(plVar3);
  if (iVar2 == -0x80) {
LAB_1001bf0c7:
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  else {
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a34dc(iVar2,uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      if (iVar2 != 0) goto LAB_1001bf0c7;
    }
    *param_2 = plVar3;
    iVar2 = 0;
  }
  return iVar2;
}

