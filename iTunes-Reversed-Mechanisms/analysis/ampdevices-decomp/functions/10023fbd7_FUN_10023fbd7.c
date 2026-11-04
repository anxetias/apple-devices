// name: FUN_10023fbd7
// address: 10023fbd7

int FUN_10023fbd7(long param_1,undefined4 param_2,char param_3,char param_4,char param_5,
                 long param_6,undefined1 *param_7,long param_8,int param_9,undefined4 *param_10)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined6 local_68;
  undefined2 local_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uStack_60 = 0;
  uStack_5e = 0;
  local_68 = 0;
  local_62 = 0;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "dragRef != __null";
LAB_10023fdbb:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_6 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "fileSpec != __null";
      goto LAB_10023fdbb;
    }
  }
  else {
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = 0;
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 0;
      }
      if ((param_5 == '\0') || (param_9 == 0 || param_8 == 0)) {
LAB_10023fc85:
        iVar2 = FUN_10023fedf(param_1,param_2,*(undefined8 *)PTR__kUTTypeFileURL_10082e538,param_6);
        if (iVar2 != 0) {
          if (param_3 == '\0') {
            iVar2 = 0;
          }
          else {
            local_58 = 0xe;
            uStack_54 = 0;
            iVar2 = FUN_10023ebfe(param_1,param_2,0x70686673,&local_68);
            if (iVar2 == 0) {
              iVar2 = 0;
              if (param_4 == '\0') goto LAB_10023fdf8;
              uVar4 = FUN_10023e02c(uStack_5e);
              iVar2 = FUN_10023fedf(param_1,param_2,uVar4,param_6);
              if (iVar2 == 0) {
                *param_10 = uStack_5e;
                iVar2 = 0;
                if (param_7 != (undefined1 *)0x0) {
                  *param_7 = 1;
                  iVar2 = 0;
                }
                goto LAB_10023fdf8;
              }
            }
          }
          if (param_9 == 0 || param_8 == 0) goto LAB_10023fdf8;
          local_58 = param_9;
          uStack_54 = 0;
          iVar3 = FUN_10023e7ee(param_1,param_2,*(undefined8 *)PTR__kUTTypeURL_10082e578);
          if (iVar3 != 0) goto LAB_10023fdf8;
          *(undefined1 *)(param_8 + CONCAT44(uStack_54,local_58)) = 0;
          goto LAB_10023fec8;
        }
        *param_10 = 0x68667320;
      }
      else {
        local_58 = param_9;
        uStack_54 = 0;
        iVar2 = FUN_10023e7ee(param_1,param_2,*(undefined8 *)PTR__kUTTypeURL_10082e578);
        if (iVar2 != 0) goto LAB_10023fc85;
        *(undefined1 *)(param_8 + CONCAT44(uStack_54,local_58)) = 0;
LAB_10023fec8:
        *param_10 = 0x75726c20;
      }
      iVar2 = 0;
      goto LAB_10023fdf8;
    }
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "flavor != __null";
      goto LAB_10023fdbb;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10023fdf8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

