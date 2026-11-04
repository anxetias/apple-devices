// name: FUN_10039010f
// address: 10039010f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10039010f(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_d8 [16];
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined1 local_ac;
  ushort local_a8;
  long local_80;
  uint local_78;
  undefined8 local_74;
  ushort local_6c;
  undefined8 local_6a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10038815d(param_1,local_d8,0x4c);
  if (iVar3 == -0x80) goto LAB_10039073c;
  if (iVar3 != 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') goto LAB_10039073c;
    puVar9 = &local_78;
    local_78 = 0x8220202;
    local_74 = "Assertion failure";
    local_6c = 0x400;
    local_6a = (char *)CONCAT44(local_6a._4_4_,iVar3);
LAB_1003902ab:
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar9,0x12);
    goto LAB_10039073c;
  }
  if (*(char *)(param_1 + 0x15) != '\0') {
    local_d8 = pshufb(local_d8,_DAT_100718a70);
    auVar12._4_4_ = uStack_c4;
    auVar12._0_4_ = uStack_c8;
    auVar12._8_8_ = 0;
    auVar12 = pshufb(auVar12,_DAT_100718a70);
    uStack_c8 = auVar12._0_4_;
    uStack_c4 = auVar12._4_4_;
    uStack_c0 = uStack_c0 >> 0x18 | (uStack_c0 & 0xff0000) >> 8 | (uStack_c0 & 0xff00) << 8 |
                uStack_c0 << 0x18;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_bc;
    auVar12 = pshufb(auVar13,_DAT_10070c150);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uStack_b4;
    auVar13 = pshufb(auVar14,_DAT_100718a70);
    local_bc = auVar12._0_8_;
    uStack_b4 = auVar13._0_8_;
    local_a8 = local_a8 << 8 | local_a8 >> 8;
  }
  if (local_d8._0_4_ != 0x696e686d) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      puVar9 = &local_78;
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      pcVar6 = "dbInstance.magic == kITImageDBImageInstanceMagic";
LAB_1003903ec:
      *(char **)((long)puVar9 + 0xe) = pcVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",puVar9,0x16);
    }
LAB_1003902e0:
    FUN_1001782e9(0,0);
    iVar3 = -0xd0;
    goto LAB_10039073c;
  }
  iVar3 = FUN_100388225(param_1,local_d8._4_4_ + -0x4c);
  if (iVar3 == -0x80) goto LAB_10039073c;
  if (iVar3 != 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 == '\0') goto LAB_10039073c;
    puVar9 = &local_78;
    local_78 = 0x8220202;
    local_74 = "Assertion failure";
    local_6c = 0x400;
    local_6a = (char *)CONCAT44(local_6a._4_4_,iVar3);
    goto LAB_1003902ab;
  }
  if ((((uStack_c8 == 6) || (uStack_c8 == 5)) || (899 < uStack_c8)) &&
     (*(char *)(param_1 + 0x1a) != '\0')) {
    bVar1 = true;
    local_80 = 0;
    lVar4 = 0;
  }
  else {
    uVar10 = (uint)local_a8;
    if (99 < uStack_c8 - 900) {
      uVar10 = (uint)uStack_b4;
    }
    if (uStack_c8 == 5) {
      uVar10 = (uint)local_a8;
    }
    lVar4 = FUN_100499159(param_2,uStack_c8,uVar10);
    if (lVar4 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = "imageInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
      goto LAB_10039073c;
    }
    if (uStack_c8 == 4) {
      lVar5 = 0xb2;
LAB_10039041b:
      *(undefined1 *)(param_2 + lVar5) = 1;
    }
    else if (uStack_c8 == 7) {
      lVar5 = 0xd6;
      goto LAB_10039041b;
    }
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_c0,uStack_c4);
    *(int *)(lVar4 + 0x40) = uStack_b4._4_4_;
    *(undefined1 *)(lVar4 + 0x52) = local_ac;
    *(double *)(lVar4 + 0x18) = (double)(int)local_bc._2_2_;
    *(double *)(lVar4 + 0x20) = (double)(int)(short)local_bc;
    *(double *)(lVar4 + 0x28) = (double)((int)local_bc._6_2_ - (int)local_bc._2_2_);
    *(double *)(lVar4 + 0x30) = (double)((int)local_bc._4_2_ - (int)(short)local_bc);
    if (uStack_b4._4_4_ == 0) {
      *(uint *)(lVar4 + 0x40) = uStack_c0;
    }
    local_80 = FUN_100499456(lVar4);
    if (local_80 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x822;
        local_6a = "stringCache != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x32;
      goto LAB_10039073c;
    }
    bVar1 = false;
  }
  if (local_d8._12_4_ == 0) {
    iVar3 = 0;
  }
  else {
    uVar10 = 0;
    do {
      iVar3 = FUN_10038815d(param_1,&local_78,0x18);
      if (iVar3 != 0) {
        if (iVar3 != -0x80) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            puVar9 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            goto LAB_1003902ab;
          }
        }
        break;
      }
      if (*(char *)(param_1 + 0x15) != '\0') {
        local_78 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                   local_78 << 0x18;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_74;
        auVar12 = pshufb(auVar11,_DAT_10070e4b0);
        local_74 = auVar12._0_8_;
        local_6c = local_6c << 8 | local_6c >> 8;
      }
      if (local_78 != 0x646f686d) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') goto LAB_1003902e0;
        puVar9 = &local_58;
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        pcVar6 = "dbObject.magic == kITImageDBObjectHeaderMagic";
        goto LAB_1003903ec;
      }
      iVar3 = FUN_100388225(param_1,(int)local_74 + -0x18);
      if (iVar3 != 0) {
        if (iVar3 != -0x80) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            puVar9 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            goto LAB_1003902ab;
          }
        }
        break;
      }
      if (bVar1) {
LAB_100390567:
        iVar3 = FUN_100388225(param_1,local_74._4_4_ - ((uint)local_6a._1_1_ + (int)local_74));
      }
      else {
        if (local_6c == 4) {
          uVar8 = 1;
          uVar7 = 4;
          lVar5 = lVar4 + 0x478;
        }
        else {
          if (local_6c != 3) goto LAB_100390567;
          uVar8 = 2;
          uVar7 = 3;
          lVar5 = lVar4 + 0x44;
        }
        iVar3 = FUN_10038faf2(param_1,uVar8,uVar7,local_80,lVar5);
      }
      if (iVar3 != 0) {
        if (iVar3 != -0x80) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            puVar9 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            goto LAB_1003902ab;
          }
        }
        break;
      }
      iVar3 = FUN_100388225(param_1,local_6a._1_1_);
      if (iVar3 != 0) {
        if (iVar3 != -0x80) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            puVar9 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar3;
            goto LAB_1003902ab;
          }
        }
        break;
      }
      uVar10 = uVar10 + 1;
      iVar3 = 0;
    } while (uVar10 < (uint)local_d8._12_4_);
  }
LAB_10039073c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

