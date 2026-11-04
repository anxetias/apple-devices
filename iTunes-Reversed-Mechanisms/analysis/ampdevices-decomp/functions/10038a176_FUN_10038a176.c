// name: FUN_10038a176
// address: 10038a176

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10038a176(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint local_154;
  undefined8 local_150;
  uint local_f8;
  undefined8 local_f4;
  ushort local_ec;
  undefined8 local_ea;
  uint local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = FUN_10038815d(param_1,&local_154,0x5c);
  if (iVar2 == -0x80) goto LAB_10038a4d5;
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x15) != '\0') {
      local_154 = local_154 >> 0x18 | (local_154 & 0xff0000) >> 8 | (local_154 & 0xff00) << 8 |
                  local_154 << 0x18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_150;
      auVar9 = pshufb(auVar9,_DAT_10070e4b0);
      local_150 = auVar9._0_8_;
    }
    if (local_154 != 0x666c686d) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        puVar6 = &local_d8;
        local_d8 = 0x8220202;
        iStack_d4 = 0x7a0a90;
        uStack_d0 = 1;
        uStack_cc = 0x822;
        pcVar5 = "header.magic == kITImageDBImageFormatListHeaderMagic";
LAB_10038a524:
        *(char **)((long)puVar6 + 0xe) = pcVar5;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
      }
LAB_10038a473:
      FUN_1001782e9(0,0);
      iVar2 = -0xd0;
      goto LAB_10038a4d5;
    }
    iVar2 = FUN_100388225(param_1,(int)local_150 + -0x5c);
    if (iVar2 == -0x80) goto LAB_10038a4d5;
    if (iVar2 == 0) {
      if (local_150._4_4_ == 0) {
        iVar2 = 0;
      }
      else {
        uVar7 = 0;
        while( true ) {
          iVar2 = FUN_10038815d(param_1,&local_d8,0x7c);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar6 = &local_f8;
                local_f8 = 0x8220202;
                local_f4 = "Assertion failure";
                local_ec = 0x400;
                local_ea = (char *)CONCAT44(local_ea._4_4_,iVar2);
                goto LAB_10038a441;
              }
            }
            goto LAB_10038a4d5;
          }
          if (*(char *)(param_1 + 0x15) != '\0') {
            auVar10._4_4_ = iStack_d4;
            auVar10._0_4_ = local_d8;
            auVar10._12_2_ = uStack_cc;
            auVar10._8_4_ = uStack_d0;
            auVar10._14_2_ = uStack_ca;
            auVar9 = pshufb(auVar10,_DAT_100718a70);
            local_d8 = auVar9._0_4_;
            iStack_d4 = auVar9._4_4_;
            uStack_d0 = auVar9._8_4_;
            uStack_cc = auVar9._12_2_;
            uStack_ca = auVar9._14_2_;
            auVar12._2_2_ = uStack_c6;
            auVar12._0_2_ = uStack_c8;
            auVar12._4_4_ = uStack_c4;
            auVar12._8_8_ = 0;
            auVar9 = pshufb(auVar12,_DAT_100718a70);
            uStack_c8 = auVar9._0_2_;
            uStack_c6 = auVar9._2_2_;
            uStack_c4 = auVar9._4_4_;
          }
          if (local_d8 != 0x6669686d) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_10038a473;
            puVar6 = &local_f8;
            local_f8 = 0x8220202;
            local_f4 = "Assertion failure";
            local_ec = 0x822;
            pcVar5 = "dbFormatInfo.magic == kITImageDBImageFormatInfoMagic";
            goto LAB_10038a524;
          }
          iVar2 = FUN_100388225(param_1,iStack_d4 + -0x7c);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar6 = &local_f8;
                local_f8 = 0x8220202;
                local_f4 = "Assertion failure";
                local_ec = 0x400;
                local_ea = (char *)CONCAT44(local_ea._4_4_,iVar2);
                goto LAB_10038a441;
              }
            }
            goto LAB_10038a4d5;
          }
          iVar2 = CONCAT22(uStack_c6,uStack_c8);
          for (puVar3 = (undefined8 *)FUN_100495ce0(uVar4); puVar3 != (undefined8 *)0x0;
              puVar3 = (undefined8 *)*puVar3) {
            if (*(int *)(puVar3 + 2) == iVar2) goto LAB_10038a2f9;
          }
          puVar3 = (undefined8 *)FUN_100499673(uVar4,CONCAT22(uStack_c6,uStack_c8));
          if (puVar3 == (undefined8 *)0x0) break;
LAB_10038a2f9:
          *(undefined4 *)((long)puVar3 + 0x14) = uStack_c4;
          if (CONCAT22(uStack_ca,uStack_cc) != 0) {
            uVar8 = 0;
            do {
              iVar2 = FUN_10038815d(param_1,&local_f8,0x18);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10038a4d5;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10038a4d5;
                puVar6 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = iVar2;
                goto LAB_10038a441;
              }
              if (*(char *)(param_1 + 0x15) != '\0') {
                local_f8 = local_f8 >> 0x18 | (local_f8 & 0xff0000) >> 8 | (local_f8 & 0xff00) << 8
                           | local_f8 << 0x18;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = local_f4;
                auVar9 = pshufb(auVar11,_DAT_10070e4b0);
                local_f4 = auVar9._0_8_;
                local_ec = local_ec << 8 | local_ec >> 8;
              }
              if (local_f8 != 0x646f686d) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10038a473;
                puVar6 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                pcVar5 = "dbObject.magic == kITImageDBObjectHeaderMagic";
                goto LAB_10038a524;
              }
              iVar2 = FUN_100388225(param_1,(int)local_f4 + -0x18);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10038a4d5;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10038a4d5;
                puVar6 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = iVar2;
                goto LAB_10038a441;
              }
              iVar2 = FUN_100388225(param_1,local_f4._4_4_ - ((uint)local_ea._1_1_ + (int)local_f4))
              ;
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10038a4d5;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10038a4d5;
                puVar6 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = iVar2;
                goto LAB_10038a441;
              }
              iVar2 = FUN_100388225(param_1,local_ea._1_1_);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10038a4d5;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 == '\0') goto LAB_10038a4d5;
                puVar6 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = iVar2;
                goto LAB_10038a441;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < CONCAT22(uStack_ca,uStack_cc));
          }
          uVar7 = uVar7 + 1;
          iVar2 = 0;
          if (local_150._4_4_ <= uVar7) goto LAB_10038a4d5;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_f8 = 0x8220202;
          local_f4 = "Assertion failure";
          local_ec = 0x822;
          local_ea = "formatInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_f8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      goto LAB_10038a4d5;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10038a4d5;
    puVar6 = &local_d8;
    local_d8 = 0x8220202;
    iStack_d4 = 0x7a0a90;
    uStack_d0 = 1;
    uStack_cc = 0x400;
    uStack_ca = (undefined2)iVar2;
    uStack_c8 = (undefined2)((uint)iVar2 >> 0x10);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10038a4d5;
    puVar6 = &local_d8;
    local_d8 = 0x8220202;
    iStack_d4 = 0x7a0a90;
    uStack_d0 = 1;
    uStack_cc = 0x400;
    uStack_ca = (undefined2)iVar2;
    uStack_c8 = (undefined2)((uint)iVar2 >> 0x10);
  }
LAB_10038a441:
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar6,0x12);
LAB_10038a4d5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

