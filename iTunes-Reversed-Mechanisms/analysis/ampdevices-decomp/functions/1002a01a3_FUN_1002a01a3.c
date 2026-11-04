// name: FUN_1002a01a3
// address: 1002a01a3

void * FUN_1002a01a3(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(uint *)(param_1 + 0x84);
  if (uVar2 != 0) {
    piVar7 = (int *)(param_1 + 0xa8);
    uVar8 = 0;
    uVar6 = 0;
    do {
      iVar5 = *piVar7;
      if (iVar5 == 0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "thumbnailCreationRecord->thumbs[formatIndex].thumbBufferSize != 0";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
        iVar5 = *piVar7;
        uVar2 = *(uint *)(param_1 + 0x84);
      }
      uVar6 = uVar6 + (iVar5 + 3U & 0xfffffffc);
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 0x38;
    } while (uVar8 < uVar2);
    if (uVar6 != 0) {
      pvVar4 = operator_new__((ulong)uVar6,(nothrow_t *)PTR_nothrow_10082c970);
      goto LAB_1002a02da;
    }
  }
  uVar3 = FUN_1001cc310();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "thumbnailAppendBufferSize != 0";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  pvVar4 = (void *)0x0;
  FUN_1001782e9(0,0);
LAB_1002a02da:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

