// name: FUN_1005d9db6
// address: 1005d9db6

int FUN_1005d9db6(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "cache != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1005d9fe1;
  }
  FUN_1001c62d9(param_2,0x80);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  iVar4 = FUN_10015d28d(param_1,0x6d646864,&local_50);
  if (iVar4 == -0x80) goto LAB_1005d9fe1;
  if (iVar4 == 0) {
    if (local_50 == 0) {
LAB_1005d9f74:
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = "element != nullptr";
LAB_1005da14c:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
    }
    else {
      puVar2 = *(uint **)(local_50 + 0x20);
      param_2[1] = puVar2;
      uVar1 = *puVar2;
      if (0x1f < (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))
      {
        iVar4 = FUN_10015d28d(param_1,0x68646c72,&local_50);
        if (iVar4 == -0x80) goto LAB_1005d9fe1;
        if (iVar4 == 0) {
          if (local_50 == 0) goto LAB_1005d9f74;
          puVar2 = *(uint **)(local_50 + 0x20);
          param_2[2] = puVar2;
          uVar1 = *puVar2;
          if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) <
              0x21) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = "atomSize >= requiredSize";
              goto LAB_1005da14c;
            }
            goto LAB_1005d9fd3;
          }
          iVar4 = FUN_10015d28d(param_1,0x6d696e66,&local_50);
          if (iVar4 == -0x80) goto LAB_1005d9fe1;
          if (iVar4 == 0) {
            if (local_50 == 0) goto LAB_1005d9f74;
            iVar4 = FUN_1005dfffe(local_50,param_2 + 3);
            if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1005d9fe1;
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
              goto LAB_1005da0cd;
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1005da0cd:
              local_3c = 0x400;
              local_44 = "Assertion failure";
              local_48 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
            goto LAB_1005da0cd;
          }
        }
        goto LAB_1005d9f6e;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = "atomSize >= sizeof(MediaHeaderAtom)";
        goto LAB_1005da14c;
      }
    }
LAB_1005d9fd3:
    FUN_1001782e9(0,0);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      goto LAB_1005da0cd;
    }
LAB_1005d9f6e:
    if (iVar4 != 0) goto LAB_1005d9fe1;
  }
  iVar4 = -0xd0;
LAB_1005d9fe1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

