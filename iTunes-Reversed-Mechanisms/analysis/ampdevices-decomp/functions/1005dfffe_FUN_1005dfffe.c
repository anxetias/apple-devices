// name: FUN_1005dfffe
// address: 1005dfffe

int FUN_1005dfffe(long param_1,undefined8 *param_2)

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
    goto LAB_1005e01e0;
  }
  FUN_1001c62d9(param_2,0x68);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  iVar4 = FUN_10015d28d(param_1,0x736d6864,&local_50);
  if (iVar4 == -0x80) goto LAB_1005e01e0;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      goto LAB_1005e0390;
    }
    goto LAB_1005e01d7;
  }
  if (local_50 == 0) {
    iVar4 = FUN_10015d28d(param_1,0x676d6864,&local_50);
    if (iVar4 == -0x80) goto LAB_1005e01e0;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
        goto LAB_1005e0390;
      }
      goto LAB_1005e01d7;
    }
    if (local_50 != 0) goto LAB_1005e006d;
  }
  else {
LAB_1005e006d:
    param_2[2] = *(undefined8 *)(local_50 + 0x20);
  }
  iVar4 = FUN_10015d28d(param_1,0x68646c72,&local_50);
  if (iVar4 == -0x80) goto LAB_1005e01e0;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      goto LAB_1005e0390;
    }
    goto LAB_1005e01d7;
  }
  if (local_50 == 0) {
LAB_1005e00b7:
    iVar4 = FUN_10015d28d(param_1,0x64696e66,&local_50);
    if (iVar4 == -0x80) goto LAB_1005e01e0;
    if (iVar4 == 0) {
      if (local_50 == 0) {
LAB_1005e03f6:
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = "element != nullptr";
          goto LAB_1005e0433;
        }
        goto LAB_1005e0458;
      }
      param_2[3] = *(undefined8 *)(local_50 + 0x20);
      iVar4 = FUN_10015d28d(param_1,0x7374626c,&local_50);
      if (iVar4 == -0x80) goto LAB_1005e01e0;
      if (iVar4 == 0) {
        if (local_50 == 0) goto LAB_1005e03f6;
        iVar4 = FUN_1005e04bc(local_50,param_2 + 4);
        if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1005e01e0;
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          goto LAB_1005e0390;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1005e0390:
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
        goto LAB_1005e0390;
      }
    }
LAB_1005e01d7:
    if (iVar4 != 0) goto LAB_1005e01e0;
  }
  else {
    puVar2 = *(uint **)(local_50 + 0x20);
    param_2[1] = puVar2;
    uVar1 = *puVar2;
    if (0x20 < (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))
    goto LAB_1005e00b7;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "atomSize >= requiredSize";
LAB_1005e0433:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005e0458:
    FUN_1001782e9(0,0);
  }
  iVar4 = -0xd0;
LAB_1005e01e0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

