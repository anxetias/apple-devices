// name: FUN_1001c0137
// address: 1001c0137

undefined8 FUN_1001c0137(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = DAT_10089fb80;
  if (DAT_10089fb80 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006a42f1(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  cVar4 = FUN_1001ee056();
  if (cVar4 == '\0') {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006a3236(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    lVar1 = lVar3 + 0x10;
    lVar5 = FUN_1001c04e0(lVar1);
    if ((lVar5 == 0) || (plVar2 = *(long **)(lVar5 + 8), plVar2 == (long *)0x0)) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006a32ac(uVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      uVar6 = 0xfffff8c0;
    }
    else {
      lVar5 = FUN_1001c0b40(lVar1);
      if ((long)*(int *)(lVar3 + 0x18) * 0x10 + *(long *)(lVar3 + 0x10) != lVar5) {
        FUN_1001c0c48(lVar1,lVar5);
      }
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar6 = 0;
    }
  }
  return uVar6;
}

