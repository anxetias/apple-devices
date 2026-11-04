// name: FUN_10035c3c0
// address: 10035c3c0

undefined8 FUN_10035c3c0(long param_1,long param_2,long *param_3,uint param_4,byte *param_5)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 local_e99;
  char local_e98 [512];
  undefined1 local_c98 [512];
  undefined1 local_a98 [512];
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  char *local_88a;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = *(long **)(param_1 + 0x20);
  param_3[3] = 0;
  param_3[4] = 0;
  if (param_5 != (byte *)0x0) {
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
  }
  param_3[5] = 0;
  *param_3 = (long)(plVar1 + 0x16);
  param_3[1] = (long)plVar1;
  param_3[2] = param_2;
  *(uint *)(param_3 + 3) = param_4;
  if (param_2 == 0) {
    if ((param_4 & 8) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x822;
        local_88a = "(inFlags & 0x00000008) != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_898,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    if (iVar3 == -0x80) {
LAB_10035c639:
      uVar4 = 0xe;
      goto LAB_10035c6b9;
    }
    if (iVar3 == 0) goto LAB_10035c428;
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_10035c6ad;
    puVar5 = &local_898;
    local_898 = 0x8220202;
    local_894 = "Assertion failure";
    local_88c = 0x400;
    local_88a = (char *)CONCAT44(local_88a._4_4_,iVar3);
LAB_10035c7ad:
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
  }
  else {
LAB_10035c428:
    if ((param_4 & 0x1600) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 2;
    }
    if ((param_4 & 8) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 1;
    }
    iVar3 = FUN_10035c814(plVar1,param_3[2],local_478,&local_e99);
    if (iVar3 == -0x2b) {
      FUN_10018a3cf(param_3[2],0x2f,local_c98,0x200,local_e98,0x200);
      if (local_e98[0] == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "fileName[0] != \'\\0\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar3 = FUN_10035c814(plVar1,local_c98,&local_898,0);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          FUN_1001e4a2e(local_e98,local_a98);
          iVar3 = FUN_1001891ea(&local_898,local_a98,local_478);
          goto LAB_10035c51a;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          puVar5 = &local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          goto LAB_10035c7ad;
        }
      }
    }
    else {
LAB_10035c51a:
      if (iVar3 == -0x80) goto LAB_10035c639;
      if (iVar3 == 0) {
        iVar3 = FUN_10017cc65(local_478,0x64617461,((param_4 & 1) == 0) * '\x02' + '\x01',
                              param_3 + 5);
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_898 = 0x8220202;
            local_894 = "Assertion failure";
            local_88c = 0x400;
            local_88a = (char *)CONCAT44(local_88a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_898,0x12);
          }
        }
        if (param_5 != (byte *)0x0 && (param_4 & 1) != 0) {
          *param_5 = *param_5 | 1;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          puVar5 = &local_898;
          local_898 = 0x8220202;
          local_894 = "Assertion failure";
          local_88c = 0x400;
          local_88a = (char *)CONCAT44(local_88a._4_4_,iVar3);
          goto LAB_10035c7ad;
        }
      }
    }
  }
LAB_10035c6ad:
  uVar4 = 0xe;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
LAB_10035c6b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

