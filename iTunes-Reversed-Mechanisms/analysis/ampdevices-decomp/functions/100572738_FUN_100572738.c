// name: FUN_100572738
// address: 100572738

undefined8
FUN_100572738(undefined8 param_1,long *param_2,int param_3,char param_4,long param_5,long param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ioArray != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    uVar3 = 0x20bc;
    goto LAB_10057290c;
  }
  if (param_5 == 0 && param_6 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(inXinf != __null) || (inXinf2 != __null)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    uVar3 = 0x20bd;
    goto LAB_10057290c;
  }
  if (*param_2 == 0) {
    lVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    *param_2 = lVar2;
    if (lVar2 != 0) goto LAB_1005727a4;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "*ioArray != __null";
      goto LAB_1005729fa;
    }
  }
  else {
LAB_1005727a4:
    lVar2 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar2 != 0) {
      FUN_100168746(lVar2,PTR_cf_id_100852a18,(long)param_3,0);
      if (param_5 != 0) {
        ppuVar4 = &PTR_cf_pinf_100852a08;
        if (param_4 != '\0') {
          ppuVar4 = &PTR_cf_sinf_1008529f8;
        }
        FUN_1001714de(lVar2,*ppuVar4,param_5);
      }
      if (param_6 != 0) {
        FUN_1001714de(lVar2,PTR_cf_sinf2_100852a00,param_6);
      }
      FUN_1001709a5(*param_2,lVar2);
      uVar3 = 0;
      goto LAB_10057290c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "trackDict != __null";
LAB_1005729fa:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
  uVar3 = 0xffffff94;
LAB_10057290c:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

