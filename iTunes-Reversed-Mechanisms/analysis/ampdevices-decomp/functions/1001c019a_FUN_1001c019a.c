// name: FUN_1001c019a
// address: 1001c019a

int FUN_1001c019a(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  undefined2 uStack_4c;
  int iStack_4a;
  long lStack_38;
  
  lVar1 = DAT_10089fb80;
  if (DAT_10089fb80 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a4367(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    return -0x32;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1001ee056();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a30d4(uVar4);
    }
  }
  else if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a31c0(uVar4);
    }
  }
  else {
    if (param_2 != 0) {
      uVar5 = 0;
      iStack_5c = 0;
      do {
        iVar3 = FUN_1001bec70(lVar1,*(undefined4 *)(param_1 + uVar5 * 8),
                              *(undefined4 *)(param_1 + 4 + uVar5 * 8));
        if (iVar3 == -0x80) {
LAB_1001beb5b:
          iStack_5c = iVar3;
        }
        else if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            uStack_58 = 0x8220202;
            pcStack_54 = "Assertion failure";
            uStack_4c = 0x400;
            iStack_4a = iVar3;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&uStack_58,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar4);
          if (iVar3 != 0) goto LAB_1001beb5b;
        }
        uVar5 = uVar5 + 1;
      } while (param_2 != uVar5);
      goto LAB_1001bec3f;
    }
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a314a(uVar4);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  FUN_1001782e9(0,0);
  iStack_5c = -0x32;
LAB_1001bec3f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != lStack_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iStack_5c;
}

