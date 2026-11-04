// name: FUN_10029b49d
// address: 10029b49d

undefined8 FUN_10029b49d(long param_1,undefined4 *param_2,uint param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x10) != 5) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sourceFaceThumbImageInstance->formatID == kITImageFormat_SourceFaceThumb";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  uVar2 = 0;
  if ((param_3 != 0) && (*(int *)(param_1 + 0x480) == 1)) {
    uVar4 = 0;
    uVar2 = 0;
    do {
      if (*(char *)((long)param_2 + 0x33) != '\0') {
        lVar3 = FUN_1004993b9(*(undefined8 *)(param_1 + 8),*param_2,*(undefined2 *)(param_1 + 0x47c)
                             );
        if (lVar3 == 0) {
          if (param_4 == 0) {
            uVar2 = 1;
            break;
          }
          FUN_10015fadc(param_4,uVar4 & 0xffffffff);
          uVar2 = 1;
        }
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 0x1e;
    } while (param_3 != uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

