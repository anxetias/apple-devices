// name: FUN_1002a882f
// address: 1002a882f

void FUN_1002a882f(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_688 [16];
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    lVar3 = _CFStringGetTypeID();
    lVar4 = _CFGetTypeID(param_1);
    if (lVar3 == lVar4) {
      if (param_3 == 0) {
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "context != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        FUN_1001782e9(0,0);
        goto LAB_1002a8b04;
      }
      FUN_1001b7eb0(local_688,param_1);
      iVar2 = -0x80;
      if ((DAT_1008c5d68 == '\0') &&
         (iVar2 = FUN_10017df7e(0,local_688,&local_458,0,0), iVar2 != -0x80)) {
        if (iVar2 == 0) {
          FUN_1001e04f5("Apple TV Photo Database",local_658);
          iVar2 = FUN_1002a8c34(&local_458,local_658,*(undefined1 *)(param_3 + 0x18));
          if (((iVar2 != -0x80) && (iVar2 != -0x2b)) && (iVar2 != 0)) {
            uVar5 = FUN_1001cc310();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_678 = 0x8220202;
              local_674 = "Assertion failure";
              local_66c = 0x400;
              local_66a = iVar2;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_678,0x12);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          }
          if (*(int *)(param_3 + 0x1c) == 0) {
            *(int *)(param_3 + 0x1c) = iVar2;
          }
          iVar2 = -0x80;
          if (DAT_1008c5d68 == '\0') {
            FUN_1001e04f5("Photo Database",local_658);
            iVar2 = FUN_1002a8c34(&local_458,local_658,*(undefined1 *)(param_3 + 0x18));
            if (((iVar2 != -0x80) && (iVar2 != -0x2b)) && (iVar2 != 0)) {
              uVar5 = FUN_1001cc310();
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              goto joined_r0x0001002a8adc;
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar1 = _os_log_type_enabled(uVar5,0x10);
joined_r0x0001002a8adc:
          if (cVar1 != '\0') {
            local_66c = 0x400;
            local_674 = "Assertion failure";
            local_678 = 0x8220202;
            local_66a = iVar2;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_678,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        }
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        *(int *)(param_3 + 0x1c) = iVar2;
      }
      FUN_1001b7a50(local_688);
      goto LAB_1002a8b04;
    }
  }
  uVar5 = FUN_1001cc310();
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    local_458 = 0x8220202;
    local_454 = "Assertion failure";
    local_44c = 0x822;
    local_44a = "pathString != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  FUN_1001782e9(0,0);
LAB_1002a8b04:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

