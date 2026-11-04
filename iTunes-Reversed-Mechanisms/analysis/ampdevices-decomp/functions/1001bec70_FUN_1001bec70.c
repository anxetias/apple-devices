// name: FUN_1001bec70
// address: 1001bec70

undefined8 FUN_1001bec70(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006a3236(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    lVar1 = param_1 + 0x10;
    lVar4 = FUN_1001c04e0(lVar1);
    if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 8), plVar2 == (long *)0x0)) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_1006a32ac(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
      uVar5 = 0xfffff8c0;
    }
    else {
      lVar4 = FUN_1001c0b40(lVar1);
      if ((long)*(int *)(param_1 + 0x18) * 0x10 + *(long *)(param_1 + 0x10) != lVar4) {
        FUN_1001c0c48(lVar1,lVar4);
      }
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar5 = 0;
    }
  }
  return uVar5;
}

