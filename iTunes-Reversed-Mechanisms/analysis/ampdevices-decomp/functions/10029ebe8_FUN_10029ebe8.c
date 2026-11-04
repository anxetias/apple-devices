// name: FUN_10029ebe8
// address: 10029ebe8

/* WARNING: Type propagation algorithm not settling */

void FUN_10029ebe8(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  int local_6c;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  local_68 = FUN_1001cd685(&cf_iPodPhotoCacheHistory,0,0);
  if (local_68 == 0) goto LAB_10029ee1a;
  local_80 = 0;
  uStack_78 = 0;
  local_6c = 0;
  local_88 = local_68;
  local_70 = param_2;
  iVar3 = FUN_1004ffed7(&local_60);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_1001e96d3(&local_80,0,0);
      if (iVar3 == -0x80) goto LAB_10029ee03;
      if (iVar3 != 0) {
        uVar6 = FUN_1001cc310();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        iVar1 = local_4a;
        goto joined_r0x00010029ecde;
      }
      local_58._0_4_ = 0x845800;
      local_58._4_4_ = 1;
      local_38 = &local_58;
      iVar3 = FUN_10060227b(local_60,&local_58);
      if (local_38 == &local_58) {
        lVar5 = 0x20;
LAB_10029ed73:
        (**(code **)(*local_38 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_38 != (long *)0x0) goto LAB_10029ed73;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_1001ee6ff(FUN_1002a86a3,&local_88,0xfffffffe,0,0,"");
        if (iVar3 == 0) {
          iVar3 = FUN_1001e9afc(&local_80);
          if ((iVar3 != -0x80) && (iVar3 != 0)) {
            uVar6 = FUN_1001cc310();
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58._0_4_ = 0x8220202;
              local_58._4_4_ = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = iVar3;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          }
          if (local_6c != -0x80) {
            uVar4 = FUN_100177d5c(0);
            FUN_1001cd54c("iPodPhotoCacheLastCleanupTimeSecondsUTC",uVar4,0);
          }
        }
        iVar3 = FUN_1006024ff(local_60);
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58._0_4_ = 0x8220202;
            local_58._4_4_ = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x400;
            local_4a = iVar3;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        }
      }
      iVar3 = FUN_1001e9bb5(&local_80);
      if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_10029ee03;
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      iVar1 = local_4a;
    }
    else {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      iVar1 = local_4a;
    }
joined_r0x00010029ecde:
    local_4a = iVar3;
    if (cVar2 != '\0') {
      local_4c = 0x400;
      uStack_50 = 1;
      local_58._4_4_ = 0x7a0a90;
      local_58._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      iVar1 = local_4a;
    }
    local_4a = iVar1;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
LAB_10029ee03:
  if (local_60 != 0) {
    FUN_1004e3ed9();
    FUN_1004e1e68(local_60);
  }
LAB_10029ee1a:
  DAT_1008c5d64 = 0;
  DAT_1008c5d68 = 0;
  FUN_10026340c(&local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

