// name: FUN_1002a1ed6
// address: 1002a1ed6

void FUN_1002a1ed6(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_2 + 0x84) != 0) {
    uVar5 = 0;
    do {
      iVar1 = *(int *)(param_3 + uVar5 * 0x78);
      for (puVar3 = (undefined8 *)FUN_100495ce0(param_1); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if (*(int *)(puVar3 + 2) == iVar1) {
          iVar1 = *(int *)(param_2 + 0xa8 + uVar5 * 0xe0);
          if (*(int *)((long)puVar3 + 0x14) != iVar1 && *(int *)((long)puVar3 + 0x14) != 0) {
            uVar4 = FUN_1001cc310();
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "formatInfo->imageDataSize == 0 || formatInfo->imageDataSize == imageDataSize";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar4);
            FUN_1001782e9(0,0);
          }
          *(int *)((long)puVar3 + 0x14) = iVar1;
          goto LAB_1002a1fdc;
        }
      }
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "formatInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
LAB_1002a1fdc:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x84));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

