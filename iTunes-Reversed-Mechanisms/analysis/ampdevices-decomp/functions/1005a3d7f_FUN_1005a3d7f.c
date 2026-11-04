// name: FUN_1005a3d7f
// address: 1005a3d7f

void FUN_1005a3d7f(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001705e9();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    cVar1 = FUN_100170633(param_1,&cf_zh_HK);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001737e5(DAT_1008c4d90,0,param_1);
      auVar5 = FUN_100173d62(uVar4,&cf__,0);
      FUN_100173dea(uVar4,auVar5._0_8_,auVar5._8_8_,&cf__);
      cVar1 = FUN_10053864f(uVar4,*param_2);
      if (cVar1 != '\0') {
        FUN_1001709a5(*(undefined8 *)(param_2 + 2),uVar4);
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_10017060f(uVar4);
        return;
      }
      goto LAB_1005a3f12;
    }
    cVar1 = FUN_10053864f(&cf_yue_CN,*param_2);
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_1001709a5(*(undefined8 *)(param_2 + 2),&cf_yue_CN);
        return;
      }
      goto LAB_1005a3f12;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRCFGetTypeID(value) == CFStringGetTypeID()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1005a3f12:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

