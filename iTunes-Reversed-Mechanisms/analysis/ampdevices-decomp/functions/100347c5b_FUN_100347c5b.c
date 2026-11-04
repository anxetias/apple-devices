// name: FUN_100347c5b
// address: 100347c5b

int FUN_100347c5b(undefined8 param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
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
  if (param_3 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "folderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_100337125(param_1,&cf_Media,1,param_3);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (param_2 == (char *)0x0) {
          iVar2 = 0;
        }
        else {
          _memcpy(&local_458,param_3,0x420);
          iVar2 = FUN_1001e115f(param_2,local_658);
          if (iVar2 != -0x80) {
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_100347e51;
            }
            iVar2 = FUN_100243fb1(&local_458,local_658,0,param_3);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) goto LAB_100347e51;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_678 = 0x8220202;
                local_674 = "Assertion failure";
                local_66c = 0x400;
                local_66a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_678,0x12
                                   );
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar3 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar1 != '\0') {
              local_678 = 0x8420202;
              local_66c = 0x400;
              local_674 = param_2;
              local_66a = iVar2;
              __os_log_impl(0x100000000,uVar3,0x10,
                            "airtraffic> failed to create %{public}@ folder (%d)",&local_678,0x12);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
      }
    }
  }
LAB_100347e51:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

