// name: FUN_100410d09
// address: 100410d09

int FUN_100410d09(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_bc;
  undefined **local_b8;
  int *local_b0;
  undefined2 *local_a8;
  undefined4 *local_a0;
  undefined ***local_98;
  undefined **local_88;
  int *local_80;
  undefined2 *local_78;
  undefined4 *local_70;
  undefined ***local_68;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0xa8,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "params.mITMLMediaLibrary != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_10041101e;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0x3f800000;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0xd] = puVar3 + 0xe;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x10] = puVar3 + 0x11;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined8 **)(param_1 + 6) = puVar3;
  local_bc = 0;
  lVar4 = FUN_1004a7d3c(1,0);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "rootMediaGroup != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    iVar2 = 0x47c;
    if (cVar1 != '\0') {
      local_58 = 0;
      __os_log_impl(0x100000000,uVar6,0x10,"sync> couldn\'t create root media group using PhotoKit!"
                    ,&local_58,2);
    }
LAB_10041100c:
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  else if (*param_1 == 2) {
    local_78 = &local_58;
    local_58 = 0x7c70;
    uStack_56 = 0x85;
    uStack_54 = 1;
    local_88 = &PTR_FUN_100857d00;
    local_70 = &local_bc;
    local_80 = param_1;
    local_68 = &local_88;
    iVar2 = FUN_1004111d8(lVar4,0,&local_88);
    if (local_68 == &local_88) {
      lVar5 = 0x20;
LAB_100410f23:
      (**(code **)((long)*local_68 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_68 != (undefined ***)0x0) goto LAB_100410f23;
    }
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        uVar6 = FUN_1001cc310();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        if (iVar2 != 0) goto LAB_100411015;
      }
      goto LAB_100410f6f;
    }
  }
  else {
LAB_100410f6f:
    local_a0 = &local_bc;
    local_bc = 0;
    local_a8 = &local_58;
    local_58 = 0x7cc0;
    uStack_56 = 0x85;
    uStack_54 = 1;
    local_b8 = &PTR_FUN_100857d00;
    local_b0 = param_1;
    local_98 = &local_b8;
    iVar2 = FUN_1004111d8(lVar4,0,&local_b8);
    if (local_98 == &local_b8) {
      lVar5 = 0x20;
LAB_100410fd6:
      (**(code **)((long)*local_98 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_98 != (undefined ***)0x0) goto LAB_100410fd6;
    }
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_10041100c;
    }
  }
LAB_100411015:
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
LAB_10041101e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

