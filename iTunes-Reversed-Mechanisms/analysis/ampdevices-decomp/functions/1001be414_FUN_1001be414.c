// name: FUN_1001be414
// address: 1001be414

void FUN_1001be414(long param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  void *local_68;
  void *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1001ee056();
  puVar2 = PTR__objc_release_10082c7b0;
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006a2cc5(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    pvVar7 = *(void **)(param_1 + 0x10);
    lVar6 = (long)*(int *)(param_1 + 0x18) * 0x10;
    pvVar1 = (void *)((long)pvVar7 + lVar6);
    local_68 = pvVar7;
    local_60 = pvVar1;
    if ((long)*(int *)(param_1 + 0x18) == 0) {
LAB_1001be4c2:
      if (local_68 != pvVar1) {
        do {
          if (*(long **)((long)local_68 + 8) == (long *)0x0) {
            uVar5 = FUN_1001cc310();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "nullptr != handlerInfo";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            (*(code *)puVar2)(uVar5);
            FUN_1001782e9(0,0);
          }
          else {
            (**(code **)(**(long **)((long)local_68 + 8) + 8))();
          }
          FUN_1001c0466(&local_68);
        } while (local_68 != pvVar1);
        pvVar7 = *(void **)(param_1 + 0x10);
      }
    }
    else {
      lVar4 = 0;
      do {
        if (1 < *(long *)((long)pvVar7 + lVar4) + 1U) {
          local_68 = (void *)(lVar4 + (long)pvVar7);
          goto LAB_1001be4c2;
        }
        lVar4 = lVar4 + 0x10;
        local_68 = pvVar1;
      } while (lVar6 != lVar4);
    }
    _free(pvVar7);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

