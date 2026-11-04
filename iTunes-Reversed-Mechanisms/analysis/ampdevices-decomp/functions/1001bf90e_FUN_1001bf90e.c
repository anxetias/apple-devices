// name: FUN_1001bf90e
// address: 1001bf90e

void FUN_1001bf90e(undefined8 param_1,char param_2)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  
  cVar2 = FUN_1001ee056();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a3d0a(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    pvVar3 = (void *)FUN_1001bfaf6(param_1);
    while (pvVar3 != (void *)0x0) {
      if (param_2 != '\0') {
        lVar1 = *(long *)((long)pvVar3 + 0x20);
        if (lVar1 - 1U < 8) {
          lVar5 = (long)pvVar3 + 0x18;
        }
        else if (lVar1 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)((long)pvVar3 + 0x18);
        }
        FUN_1001beede(param_1,*(undefined4 *)((long)pvVar3 + 0x10),
                      *(undefined4 *)((long)pvVar3 + 0x14),lVar1,lVar5,
                      *(undefined8 *)((long)pvVar3 + 0x28));
      }
      FUN_1001bf8ae(pvVar3);
      operator_delete(pvVar3);
      pvVar3 = (void *)FUN_1001bfaf6(param_1);
    }
  }
  return;
}

