// name: FUN_100400583
// address: 100400583

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100400583(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined8 local_268;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_238 = 0x10;
  uStack_234 = 0;
  iVar4 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_238,&local_268);
  if (iVar4 == -0x80) goto LAB_1004009cc;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x100127) == '\0') {
      uVar5 = local_268._4_4_;
    }
    else {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_268;
      auVar12 = pshufb(auVar12,_DAT_100718a70);
      local_268 = auVar12._0_8_;
      uVar5 = auVar12._4_4_;
    }
    iVar4 = FUN_1003f0368(param_1,param_1,uVar5);
    if (iVar4 == -0x80) goto LAB_1004009cc;
    if (iVar4 != 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_1004009cc;
      puVar11 = &local_238;
      local_238 = 0x8220202;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
      goto LAB_1004007af;
    }
    if ((int)local_268 == 1) {
      if ((*(char *)(param_1 + 0x100127) != '\0') && (1 < local_268._4_4_)) {
        uVar8 = 0;
        do {
          puVar1 = (ushort *)(param_1 + uVar8 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          uVar8 = uVar8 + 1;
        } while (local_268._4_4_ >> 1 != uVar8);
        goto LAB_1004006c3;
      }
    }
    else {
LAB_1004006c3:
      if (param_2 == 1 && (int)local_268 == 2) {
        FUN_1001e5811(param_1,local_268._4_4_,&local_238);
        iVar4 = FUN_1001dda84(param_3,&local_238,param_4);
        if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1004009cc;
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 == '\0') goto LAB_1004009cc;
        puVar11 = &local_258;
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = iVar4;
        goto LAB_1004007af;
      }
    }
    if (param_2 == 2 && (int)local_268 == 1) {
      uVar10 = local_268._4_4_ >> 1;
      uVar2 = uVar10 * 3;
      lVar7 = *(long *)(param_1 + 0x100130);
      uVar9 = *(uint *)(param_1 + 0x100128);
      if (*(uint *)(param_1 + 0x100128) < uVar2) {
        if (lVar7 != 0) {
          FUN_1001c64c1(lVar7);
          *(undefined8 *)(param_1 + 0x100130) = 0;
          *(undefined4 *)(param_1 + 0x100128) = 0;
        }
        lVar7 = FUN_1001c63e1(uVar2);
        *(long *)(param_1 + 0x100130) = lVar7;
        if (lVar7 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_238 = 0x8220202;
            uStack_234 = 0x7a0a90;
            uStack_230 = 1;
            local_22c = 0x822;
            local_22a = "context->conversionBuffer != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          iVar4 = -0x6c;
          if (cVar3 == '\0') goto LAB_1004009cc;
          puVar11 = &local_238;
          local_238 = 0x8220202;
          uStack_234 = 0x7a0a90;
          uStack_230 = 1;
          local_22c = 0x400;
          local_22a = (char *)CONCAT44(local_22a._4_4_,0xffffff94);
          goto LAB_1004007af;
        }
        *(uint *)(param_1 + 0x100128) = uVar2;
        uVar10 = local_268._4_4_ >> 1;
        uVar9 = uVar2;
      }
      FUN_1001e73f2(param_1,uVar10,lVar7,uVar9,&local_258);
      iVar4 = FUN_1001dda73(param_3,*(undefined8 *)(param_1 + 0x100130),local_258,param_4);
      if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1004009cc;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_1004009cc;
      puVar11 = &local_238;
      local_238 = 0x8220202;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
    }
    else {
      if ((int)local_268 != param_2) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_238 = 0x8220202;
          uStack_234 = 0x7a0a90;
          uStack_230 = 1;
          local_22c = 0x822;
          local_22a = "dbString.textEncoding == desiredEncoding";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar4 = FUN_1001dda73(param_3,param_1,local_268._4_4_,param_4);
      if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1004009cc;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_1004009cc;
      puVar11 = &local_238;
      local_238 = 0x8220202;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 == '\0') goto LAB_1004009cc;
    puVar11 = &local_238;
    local_238 = 0x8220202;
    uStack_234 = 0x7a0a90;
    uStack_230 = 1;
    local_22c = 0x400;
    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
  }
LAB_1004007af:
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar11,0x12);
LAB_1004009cc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

