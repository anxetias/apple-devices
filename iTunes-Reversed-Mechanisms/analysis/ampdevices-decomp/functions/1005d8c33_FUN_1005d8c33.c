// name: FUN_1005d8c33
// address: 1005d8c33

int FUN_1005d8c33(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_120 [2];
  int local_110;
  char local_ff;
  undefined1 local_f4 [4];
  int local_f0;
  undefined1 local_ec [4];
  int local_e8;
  undefined1 local_e4 [4];
  int local_e0;
  undefined1 local_dc [4];
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_120,0x28);
  iVar2 = FUN_1005d75ed(param_1,1,local_120,0);
  if (iVar2 == -0x80) goto LAB_1005d9605;
  if (iVar2 == 0) {
    lVar6 = local_ff + local_120[0];
    iVar2 = FUN_1001d7378(param_1,lVar6);
    if (iVar2 == -0x80) goto LAB_1005d9605;
    if (iVar2 == 0) {
      uVar8 = (long)local_110 - (long)local_ff;
      uVar5 = 0;
      local_90 = uVar8;
LAB_1005d8cde:
      iVar2 = FUN_1005d96b5(param_1,local_e4,&local_a4,&local_c0);
      if (iVar2 != 0) {
        if (iVar2 == -0x80) goto LAB_1005d9605;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_1005d9605;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1005d94e4;
      }
      uVar5 = uVar5 + local_c0;
      if (uVar8 < uVar5) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "atomSize64 + currentMoovDataOffset <= moovDataSize";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar2 = 0;
        FUN_1001782e9(0,0);
        goto LAB_1005d9605;
      }
      lVar4 = local_c0;
      if (local_e0 != 0x7472616b) goto LAB_1005d8d85;
      local_88 = local_c0;
      uVar7 = (ulong)local_a4;
      local_80 = uVar5;
      iVar2 = FUN_1001d7569(param_1,&local_b0);
      if (iVar2 != 0) {
        if (iVar2 != -0x80) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          uVar5 = local_80;
          uVar8 = local_90;
          if (cVar1 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1005d9073:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            uVar5 = local_80;
            uVar8 = local_90;
          }
          goto LAB_1005d8d78;
        }
LAB_1005d94fc:
        iVar2 = -0x80;
        goto LAB_1005d9605;
      }
      uVar7 = local_88 - uVar7;
      uVar9 = 0;
      local_98 = lVar6;
      do {
        iVar2 = FUN_1005d96b5(param_1,local_ec,&local_a8,&local_c8);
        lVar6 = local_98;
        lVar4 = local_c8;
        if (iVar2 != 0) {
          if (iVar2 == -0x80) goto LAB_1005d94fc;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          uVar5 = local_80;
          uVar8 = local_90;
          if (cVar1 == '\0') goto LAB_1005d8d78;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          goto LAB_1005d9073;
        }
        uVar9 = uVar9 + local_c8;
        if (uVar7 < uVar9) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "atomSize64 + curOffset <= inMaxLength";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          lVar4 = local_88;
          uVar5 = local_80;
          lVar6 = local_98;
          uVar8 = local_90;
          goto LAB_1005d8d85;
        }
        if (local_e8 == 0x6d646961) {
          uVar7 = (ulong)local_a8;
          iVar2 = FUN_1001d7569(param_1,&local_b8);
          lVar6 = local_98;
          uVar5 = local_80;
          uVar8 = local_90;
          if (iVar2 == -0x80) goto LAB_1005d8d78;
          if (iVar2 == 0) {
            uVar9 = 0;
            goto LAB_1005d8f6f;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          uVar5 = local_80;
          uVar8 = local_90;
          if (cVar1 == '\0') goto LAB_1005d8d78;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          goto LAB_1005d90e9;
        }
        lVar4 = local_88;
        uVar5 = local_80;
        uVar8 = local_90;
        if (uVar7 <= uVar9) goto LAB_1005d8d85;
        local_b0 = local_c8 + local_b0;
        iVar2 = FUN_1001d7378(param_1,local_b0);
        lVar6 = local_98;
      } while (iVar2 == 0);
      if (iVar2 == -0x80) goto LAB_1005d94fc;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      uVar5 = local_80;
      uVar8 = local_90;
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1005d9073;
      }
      goto LAB_1005d8d78;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1005d9605;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1005d9605;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  goto LAB_1005d94e4;
  while( true ) {
    if (lVar4 - uVar7 <= uVar9) {
      iVar2 = 0;
      goto LAB_1005d8d78;
    }
    local_b8 = local_d8 + local_b8;
    iVar2 = FUN_1001d7378(param_1);
    uVar8 = local_90;
    if (iVar2 != 0) break;
LAB_1005d8f6f:
    iVar2 = FUN_1005d96b5(param_1,local_f4,local_dc,&local_d8);
    uVar8 = local_90;
    uVar5 = local_80;
    if (iVar2 != 0) {
      if (iVar2 == -0x80) goto LAB_1005d8d78;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      uVar5 = local_80;
      uVar8 = local_90;
      if (cVar1 == '\0') goto LAB_1005d8d78;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      goto LAB_1005d90e9;
    }
    uVar9 = uVar9 + local_d8;
    if (lVar4 - uVar7 < uVar9) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "atomSize64 + curOffset <= inMaxLength";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar2 = 0;
      FUN_1001782e9(0,0);
      uVar5 = local_80;
      uVar8 = local_90;
      goto LAB_1005d8d78;
    }
    if (local_f0 == 0x68646c72) {
      iVar2 = FUN_1001d7569(param_1,&local_d0);
      uVar8 = local_90;
      uVar5 = local_80;
      if (iVar2 == -0x80) goto LAB_1005d8d78;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        uVar5 = local_80;
        if (iVar2 != 0) goto LAB_1005d8d78;
      }
      uVar5 = local_80;
      local_a0 = 0x1a;
      iVar2 = FUN_1001d6a08(param_1,&local_a0,&local_58,0);
      if (iVar2 == -0x80) goto LAB_1005d8d78;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x400;
          local_6a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        }
        uVar5 = local_80;
        if (iVar2 != 0) goto LAB_1005d8d78;
      }
      iVar2 = 0;
      if (local_54._4_4_ != 0x6c746273) goto LAB_1005d8d78;
      local_54 = (char *)CONCAT44(0x63726e67,(undefined4)local_54);
      iVar2 = FUN_1001d7378(param_1,local_d0);
      if (iVar2 == -0x80) goto LAB_1005d8d78;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x400;
          local_6a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        }
        uVar5 = local_80;
        lVar6 = local_98;
        uVar8 = local_90;
        if (iVar2 != 0) goto LAB_1005d8d78;
      }
      local_a0 = 0x1a;
      iVar2 = 0;
      FUN_1001d717d(param_1,&local_a0,&local_58,0);
      goto LAB_1005d8d78;
    }
  }
  uVar5 = local_80;
  if (iVar2 != -0x80) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar5 = local_80;
    if (cVar1 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1005d90e9:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      uVar5 = local_80;
    }
  }
LAB_1005d8d78:
  lVar4 = local_88;
  if (iVar2 != 0) {
    if (iVar2 == -0x80) goto LAB_1005d9605;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1005d9605;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
    goto LAB_1005d94e4;
  }
LAB_1005d8d85:
  if (uVar8 <= uVar5) {
    iVar2 = 0;
    goto LAB_1005d9605;
  }
  lVar6 = lVar6 + lVar4;
  iVar2 = FUN_1001d7378(param_1,lVar6);
  if (iVar2 != 0) goto LAB_1005d9561;
  goto LAB_1005d8cde;
LAB_1005d9561:
  if (iVar2 == -0x80) goto LAB_1005d9605;
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 == '\0') goto LAB_1005d9605;
  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1005d94e4:
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_1005d9605:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

