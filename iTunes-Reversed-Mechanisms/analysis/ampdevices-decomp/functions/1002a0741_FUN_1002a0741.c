// name: FUN_1002a0741
// address: 1002a0741

int FUN_1002a0741(long *param_1,long *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  LOCK();
  puVar1 = (uint *)((long)param_2 + 0xc);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (*(uint *)(param_2 + 1) <= uVar3) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "freeIndex < imageConvertContextListAndFreeIndex->contextListLength";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1002a0887;
  }
  lVar8 = *param_2;
  lVar9 = (long)(int)uVar3 * 0x70;
  puVar2 = (undefined8 *)(lVar8 + lVar9);
  puVar7 = puVar2 + 2;
  iVar5 = FUN_100239ad2(*puVar2,*(undefined4 *)(puVar2 + 1),0,puVar7);
  if (iVar5 == -0x80) {
LAB_1002a0878:
    FUN_10023955c(*puVar7);
    *puVar7 = 0;
  }
  else {
    if (iVar5 == 0) {
      lVar8 = lVar8 + lVar9;
      lVar9 = FUN_1002a01a3(*(undefined8 *)(lVar8 + 0x10));
      *(long *)(lVar8 + 0x18) = lVar9;
      if (lVar9 == 0) {
        uVar6 = FUN_1001cc310();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "imageConvertContext->thumbnailAppendBuffer != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        FUN_1001782e9(0,0);
        iVar5 = -0x6c;
        goto LAB_1002a0878;
      }
      *param_1 = lVar8;
    }
    else {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      if (iVar5 != 0) goto LAB_1002a0878;
    }
    iVar5 = 0;
  }
LAB_1002a0887:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

