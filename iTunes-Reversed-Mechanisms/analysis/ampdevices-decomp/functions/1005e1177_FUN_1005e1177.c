// name: FUN_1005e1177
// address: 1005e1177

/* WARNING: Type propagation algorithm not settling */

int FUN_1005e1177(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 *param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long local_278;
  ulong local_270;
  long local_268;
  undefined4 local_260;
  uint local_25c [2];
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_268 = 0;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  local_260 = param_6;
  iVar3 = FUN_1005da92d(param_2,param_4,&local_278,local_25c);
  if (iVar3 == -0x80) goto LAB_1005e14ab;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (*(long *)(param_1 + 0x48) == 0)) {
LAB_1005e12e3:
      iVar3 = (**(code **)(*(long *)*param_3 + 0xf0))((long *)*param_3,local_278);
      if (iVar3 == -0x80) goto LAB_1005e14ab;
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_1005e14ab;
        puVar6 = local_25c + 1;
        local_25c[1] = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = (char *)CONCAT44(local_24a._4_4_,iVar3);
        goto LAB_1005e1412;
      }
      uVar4 = 0x200;
      if (local_25c[0] < 0x200) {
        uVar4 = local_25c[0];
      }
      local_270 = (ulong)uVar4;
      iVar3 = (**(code **)(*(long *)*param_3 + 0xa8))((long *)*param_3,&local_270,local_25c + 1);
      uVar4 = local_25c[0];
      if ((iVar3 != 0) && (iVar3 != -0x27)) goto LAB_1005e14ab;
    }
    else {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x48) + 0x10);
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      if (uVar4 == 0x616c6973) {
        if (*(long *)(param_1 + 0x58) != 0) {
          cVar2 = FUN_1005dca08(*(long *)(param_1 + 0x58) + 8);
          iVar3 = -0xd0;
          if (cVar2 != '\0') goto LAB_1005e14ab;
        }
        goto LAB_1005e12e3;
      }
      if (uVar4 != 0x686e646c) goto LAB_1005e12e3;
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_25c[1] = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x822;
          local_24a = "dataInfoAtom != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_25c + 1,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0xd0;
        goto LAB_1005e14ab;
      }
      uVar4 = 0x200;
      if (local_25c[0] < 0x200) {
        uVar4 = local_25c[0];
      }
      local_270 = (ulong)uVar4;
      FUN_1001c631b(*(long *)(param_1 + 0x58) + local_278 + 0x31,local_25c + 1);
      uVar4 = local_25c[0];
    }
    if (local_270 == 0) {
      iVar3 = -0x27;
      goto LAB_1005e14ab;
    }
    if (local_270 != uVar4) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "currSampleSize == currReadSize";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x24;
      goto LAB_1005e14ab;
    }
    iVar3 = FUN_1005e1b1f(param_2,param_4,&local_268);
    if (iVar3 == -0x80) goto LAB_1005e14ab;
    if (iVar3 == 0) {
      uVar1 = *(uint *)(local_268 + 4);
      iVar3 = FUN_1005e1c9d(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18,local_25c + 1,uVar4,param_5,local_260,param_7);
      goto LAB_1005e14ab;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_1005e14ab;
    puVar6 = &local_58;
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 == '\0') goto LAB_1005e14ab;
    puVar6 = local_25c + 1;
    local_25c[1] = 0x8220202;
    local_254 = "Assertion failure";
    local_24c = 0x400;
    local_24a = (char *)CONCAT44(local_24a._4_4_,iVar3);
  }
LAB_1005e1412:
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar6,0x12);
LAB_1005e14ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

