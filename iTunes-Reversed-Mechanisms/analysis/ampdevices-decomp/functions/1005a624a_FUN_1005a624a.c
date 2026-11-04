// name: FUN_1005a624a
// address: 1005a624a

int FUN_1005a624a(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "dictSpeech != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005a6471;
  }
  *param_2 = 0;
  param_1 = param_1 + 0xd0;
  iVar2 = FUN_100187cb2(param_1,&local_88);
  if (iVar2 == -0x80) goto LAB_1005a6471;
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005a6471;
  }
  cVar1 = FUN_1001e4e7c("gz",&local_88,1);
  if (cVar1 == '\0') {
    lVar3 = FUN_10016aa24(DAT_1008c4d90,param_1,0,0);
    *param_2 = lVar3;
LAB_1005a63c9:
    iVar2 = 0;
    if (lVar3 != 0) goto LAB_1005a6471;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "*dictSpeech != nullptr";
LAB_1005a6555:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_100165eef(DAT_1008c4d90,param_1,0,0);
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "compressedData != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x2b;
      goto LAB_1005a6471;
    }
    lVar4 = FUN_100197bcc(DAT_1008c4d90,lVar3);
    FUN_10017060f(lVar3);
    if (lVar4 != 0) {
      lVar3 = FUN_10016a9bd(DAT_1008c4d90,lVar4,0,0);
      *param_2 = lVar3;
      FUN_10017060f(lVar4);
      lVar3 = *param_2;
      goto LAB_1005a63c9;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "uncompressedData != nullptr";
      goto LAB_1005a6555;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0xd0;
LAB_1005a6471:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

