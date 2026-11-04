// name: FUN_10020416d
// address: 10020416d

void FUN_10020416d(char *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1001705e9();
  lVar5 = _CFStringGetTypeID();
  if (lVar4 == lVar5) {
    lVar4 = FUN_1001705e9(param_2);
    lVar5 = _CFDataGetTypeID();
    if (lVar4 == lVar5) {
      FUN_100169c4c(param_1,local_238);
      cVar1 = FUN_1002057b6(param_3,local_238);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') {
        if (cVar2 == '\0') goto LAB_1002043b1;
        puVar9 = &local_658;
        local_658 = 0x8420102;
        pcVar7 = "restore> skipping \"%{public}@\"";
        uVar8 = 1;
        uVar10 = 0xc;
        local_654 = param_1;
      }
      else {
        if (cVar2 != '\0') {
          local_64a = (char *)FUN_100170ef7(param_2);
          local_658 = 0x8420202;
          local_64c = 0x800;
          local_654 = param_1;
          __os_log_impl(0x100000000,uVar6,1,"restore> restoring \"%{public}@\", size = %ld",
                        &local_658,0x16);
        }
        iVar3 = FUN_1002441f8(*(undefined4 *)(param_3 + 8),param_3 + 0x10,0x6974756e,1,&local_658);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar3 = FUN_1001660b3(param_2,&local_658,local_238,0,1);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) goto LAB_1002043b1;
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar3;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar1 == '\0') goto LAB_1002043b1;
            puVar9 = &local_678;
            local_678 = 0x8420202;
            local_66c = 0x400;
            pcVar7 = "JRCFDataSaveToFile failed for \"%{public}@\" (%d)";
            uVar8 = 0x10;
            uVar10 = 0x12;
            local_674 = param_1;
            local_66a = iVar3;
            goto LAB_100204480;
          }
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_678 = 0x8220202;
            local_674 = "Assertion failure";
            local_66c = 0x400;
            local_66a = iVar3;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_678,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_1002043b1;
        puVar9 = &local_678;
        local_678 = 0x4000100;
        local_674 = (char *)CONCAT44(local_674._4_4_,iVar3);
        pcVar7 = "FindIPodFolder(kIPodITunesFolderSelector) failed (%d)";
        uVar8 = 0x10;
        uVar10 = 8;
      }
LAB_100204480:
      __os_log_impl(0x100000000,uVar6,uVar8,pcVar7,puVar9,uVar10);
      goto LAB_1002043b1;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_64a = "JRCFGetTypeID((CFTypeRef) value) == CFDataGetTypeID()";
      goto LAB_1002044b1;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_64a = "JRCFGetTypeID((CFTypeRef) key) == CFStringGetTypeID()";
LAB_1002044b1:
      local_64c = 0x822;
      local_654 = "Assertion failure";
      local_658 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1002043b1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

