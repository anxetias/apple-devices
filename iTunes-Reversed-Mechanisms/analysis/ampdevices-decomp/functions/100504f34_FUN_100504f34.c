// name: FUN_100504f34
// address: 100504f34

undefined4 FUN_100504f34(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = FUN_1004de449();
  if (lVar7 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar8 = FUN_100166b7f(*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x70),
                          *(undefined8 *)(lVar7 + 0x152c8));
    if (lVar8 != 0) {
      uVar9 = FUN_100166b7f(lVar8,&cf_Backup);
      uVar9 = FUN_1001705fc(uVar9);
      uVar10 = FUN_100166c1b(lVar8,&cf_Password);
      uVar10 = FUN_1001705fc(uVar10);
      local_59 = FUN_100167dd2(lVar8,&cf_SetPasswordInKeychain,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        pcVar3 = *(char **)(lVar7 + 0x152c8);
        local_4a = (char *)FUN_100166c1b(uVar9,&cf_DisplayName);
        local_58 = 0x8420202;
        local_4c = 0x842;
        local_54 = pcVar3;
        __os_log_impl(0x100000000,uVar4,1,
                      "setup> restoring erased device %{public}@ from backup \"%{public}@\"",
                      &local_58,0x16);
      }
      FUN_100171552(*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x70),*(undefined8 *)(lVar7 + 0x152c8)
                   );
      cVar5 = *(char *)(lVar7 + 0x3a2);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      if (*(long *)(param_2 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      uVar6 = FUN_100202e6f(lVar7,uVar9,uVar10,
                            (uint)(cVar5 != '\0') * 0x1000 + (uint)(local_59 != '\0') * 0x800 +
                            0x400,&local_78);
      plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar7 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_10017060f(uVar9);
      FUN_10017060f(uVar10);
      goto LAB_100505141;
    }
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "restoreFromBackupDict != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar6 = 0x45f;
LAB_100505141:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

