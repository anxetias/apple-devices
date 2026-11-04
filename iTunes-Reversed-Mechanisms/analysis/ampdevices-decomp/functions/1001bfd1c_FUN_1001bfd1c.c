// name: FUN_1001bfd1c
// address: 1001bfd1c

int FUN_1001bfd1c(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3f4e(uVar3);
    }
  }
  else if (DAT_10089fb88 == (undefined8 *)0x0) {
    if (DAT_10089fb80 == 0) {
      DAT_10089fb88 = (undefined8 *)0x0;
      puVar4 = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a411c(uVar3);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a4192(uVar3);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        return -0x6c;
      }
      *puVar4 = &PTR_FUN_10083cfe8;
      DAT_10089fb88 = puVar4;
      iVar2 = FUN_1001beff8(puVar4,&DAT_10089fb80);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        FUN_1001c0fbe(FUN_1001bff0c,0,0,0,0);
        return 0;
      }
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a40b0(iVar2,uVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a403a(uVar3);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3fc4(uVar3);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  return -0x32;
}

