// name: FUN_1004b09b3
// address: 1004b09b3

/* WARNING: Type propagation algorithm not settling */

long FUN_1004b09b3(char *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long local_68;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_5c[0] = 0;
  if (((*param_1 == '\0') || (param_1[1] == '\0')) || (*(long *)(param_1 + 0x18) < 1)) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "dictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      lVar4 = 0;
      FUN_1001782e9(0,0);
      iVar6 = -0x6c;
      lVar3 = 0;
      goto LAB_1004b0b01;
    }
    iVar2 = FUN_100179ca9(*(undefined8 *)(param_1 + 0xa8),&local_68,local_5c);
    iVar6 = -0x6c;
    if (iVar2 == -0x80) {
      lVar4 = 0;
      goto LAB_1004b0b01;
    }
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
      lVar4 = 0;
      iVar6 = iVar2;
      goto LAB_1004b0b01;
    }
    if (local_5c[0] != 0 && local_68 != 0) {
      iVar2 = local_5c[0] * 2 + 1;
      lVar4 = FUN_1001c63e1(iVar2);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "stringBuffer != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001e0a72(local_68,local_5c[0],lVar4,iVar2,0);
        FUN_10016843e(lVar3,&cf_partial_md5_info,lVar4,0);
        FUN_100168746(lVar3,&cf_partial_md5_offset,
                      *(long *)(param_1 + 0x18) + *(long *)(param_1 + 8),1);
        iVar6 = 0;
        if (0 < *(long *)(param_1 + 8)) {
          FUN_100168746(lVar3,&cf_partial_md5_start_offset,*(long *)(param_1 + 8),1);
        }
      }
      goto LAB_1004b0b01;
    }
  }
  lVar4 = 0;
  iVar6 = 0;
LAB_1004b0b01:
  FUN_1001c64c1(local_68);
  FUN_1001c64c1(lVar4);
  if (iVar6 != 0) {
    FUN_10017060f(lVar3);
    lVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

