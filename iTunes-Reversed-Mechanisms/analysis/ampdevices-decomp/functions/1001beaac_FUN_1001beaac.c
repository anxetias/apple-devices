// name: FUN_1001beaac
// address: 1001beaac

int FUN_1001beaac(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a30d4(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a31c0(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      uVar4 = 0;
      local_5c = 0;
      do {
        iVar2 = FUN_1001bec70(param_1,*(undefined4 *)(param_2 + uVar4 * 8),
                              *(undefined4 *)(param_2 + 4 + uVar4 * 8));
        if (iVar2 == -0x80) {
LAB_1001beb5b:
          local_5c = iVar2;
        }
        else if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
          if (iVar2 != 0) goto LAB_1001beb5b;
        }
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
      goto LAB_1001bec3f;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a314a(uVar3);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  local_5c = -0x32;
LAB_1001bec3f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

