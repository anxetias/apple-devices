// name: FUN_100279c64
// address: 100279c64

int FUN_100279c64(undefined *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c0fbe(FUN_10027a04e,0,0,0,0);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_cf_com_apple_AMPDevicesAgent_10085c2b8;
  }
  uVar4 = *(undefined8 *)PTR__kCFPreferencesCurrentUser_10082e108;
  uVar1 = *(undefined8 *)PTR__kCFPreferencesAnyHost_10082e0e8;
  iVar3 = FUN_1001ce44b(param_1,uVar4,uVar1,&DAT_1008b4678);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_1001ce44b(param_1,uVar4,*(undefined8 *)PTR__kCFPreferencesCurrentHost_10082e100,
                            &DAT_1008b4698);
      if (iVar3 == -0x80) goto LAB_10027a02a;
      if (iVar3 == 0) {
        iVar3 = FUN_1001ce44b(&cf_com_apple_Music_eq,uVar4,uVar1,&DAT_1008b46b8);
        if (iVar3 == -0x80) goto LAB_10027a02a;
        if (iVar3 == 0) {
          iVar3 = FUN_1001ce44b(&cf_com_apple_iTunes,uVar4,uVar1,&DAT_1008b46d8);
          if (iVar3 == -0x80) goto LAB_10027a02a;
          if (iVar3 == 0) {
            iVar3 = FUN_1001ce44b(&cf_com_apple_Music,uVar4,uVar1,&DAT_1008b46f8);
            if (iVar3 == -0x80) goto LAB_10027a02a;
            if (iVar3 == 0) {
              iVar3 = FUN_1001ce44b(&cf_com_apple_TV,uVar4,uVar1,&DAT_1008b4718);
              if (iVar3 == -0x80) goto LAB_10027a02a;
              if (iVar3 == 0) {
                iVar3 = FUN_1001ce44b(&cf_com_apple_AMPLibraryAgent,uVar4,uVar1,&DAT_1008b4738);
                if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_10027a02a;
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
    }
    if (cVar2 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      local_3a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_10027a02a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

