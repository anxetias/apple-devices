// name: FUN_1001beede
// address: 1001beede

int FUN_1001beede(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a33fa(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_1001c04e0(param_1 + 0x10);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
      iVar2 = FUN_1001be202(*(long *)(lVar3 + 8),param_2,param_3,param_4,param_5,param_6);
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a3470(iVar2,uVar4);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        return iVar2;
      }
      return 0;
    }
  }
  return -0x32;
}

