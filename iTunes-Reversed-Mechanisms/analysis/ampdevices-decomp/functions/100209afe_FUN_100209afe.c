// name: FUN_100209afe
// address: 100209afe

undefined1 FUN_100209afe(undefined8 param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char local_8b0 [87];
  undefined1 local_859;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined1 local_438 [512];
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_859 = 0;
  if (param_2 == (char *)0x0 || param_3 == (undefined1 *)0x0) {
    if (param_2 == (char *)0x0) {
      param_2 = local_8b0;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = local_238;
    }
    iVar2 = FUN_10017d477(param_1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_100209b76;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_858 = 0x8220202;
        local_854 = "Assertion failure";
        local_84c = 0x400;
        local_84a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_858,0x12);
      }
    }
  }
  else {
LAB_100209b76:
    if ((*param_2 != '\0') && (param_2[1] == '\0')) {
      FUN_1001e222d(param_3,local_438);
      cVar1 = FUN_1001e4e7c("app",local_438,1);
      if (cVar1 != '\0') {
        FUN_1001e04f5("Info.plist",local_438);
        iVar2 = FUN_10017ecc9(param_1,local_438,&local_858,0);
        uVar6 = 0;
        if (iVar2 == 0) {
          lVar3 = FUN_10016aa24(DAT_1008c4d90,&local_858,0,0);
          uVar6 = 0;
          if (lVar3 != 0) {
            lVar4 = FUN_100171475(lVar3,&cf_LSRequiresIPhoneOS);
            if (lVar4 == 0) {
              cVar1 = FUN_100166ce2(lVar3,&cf_CFBundleExecutable,local_438);
              if (cVar1 != '\0') {
                iVar2 = FUN_10017ecc9(param_1,local_438,&local_858,0);
                if (iVar2 == 0) {
                  local_859 = FUN_100209d2c(&local_858);
                }
              }
            }
            else {
              FUN_100165191(lVar4,&local_859);
            }
            FUN_10017060f(lVar3);
            uVar6 = local_859;
          }
        }
        goto LAB_100209c63;
      }
    }
  }
  uVar6 = 0;
LAB_100209c63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

