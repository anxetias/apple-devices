// name: FUN_1006346e8
// address: 1006346e8

int FUN_1006346e8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_25c;
  byte local_258 [4];
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined2 local_242;
  char *local_240;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_258[0] = 2;
      local_258[1] = 2;
      local_258[2] = 0x22;
      local_258[3] = 8;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "resultPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_258,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_100634c00;
  }
  iVar3 = FUN_10063759c(param_1,&local_158,0xc0);
  if (iVar3 == 0) {
    if (0xfb < local_158._3_1_) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_258[0] = 2;
        local_258[1] = 3;
        local_258[2] = 0x22;
        local_258[3] = 8;
        local_254 = "Assertion failure";
        local_24c = 0x822;
        local_24a = "buffer.dataSize < kMaxCheckPointDataSize";
        local_242 = 0x822;
        local_240 = "more entries than fit in data";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_258,0x20);
      }
      FUN_1001782e9(0,0);
    }
    uVar6 = 0xfc;
    if (local_158._3_1_ < 0xfc) {
      uVar6 = (uint)local_158._3_1_;
    }
    if (local_158._3_1_ < 0x3f) {
      if (local_158._3_1_ == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_258[0] = 2;
          local_258[1] = 2;
          local_258[2] = 0x22;
          local_258[3] = 8;
          local_254 = "Assertion failure";
          local_24c = 0x822;
          local_24a = "numEntries > 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_258,0x16);
        }
        iVar3 = 0;
        FUN_1001782e9(0,0);
        goto LAB_1006347a0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_258[0] = 2;
        local_258[1] = 3;
        local_258[2] = 0x22;
        local_258[3] = 8;
        local_254 = "Assertion failure";
        local_24c = 0x822;
        local_24a = "numEntries <= kMaxPageIndex - kMinPageIndex + 1";
        local_242 = 0x822;
        local_240 = "invalid Checkpoint page count";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_258,0x20);
      }
      FUN_1001782e9(0,0);
    }
    uVar7 = (ulong)uVar6;
    uVar8 = 0;
    do {
      bVar1 = *(byte *)((long)&local_158 + uVar8 + 4);
      local_258[uVar8] = bVar1;
      if (bVar1 < 0xc2) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220302;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "pageList[i] >= kMinPageIndex";
          local_42 = 0x822;
          local_40 = "invalid Checkpoint page index";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x20);
        }
        FUN_1001782e9(0,0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    uVar6 = uVar6 << 8;
    lVar5 = FUN_1001c6429(uVar6);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "result != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      lVar5 = 0;
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
    }
    else {
      uVar8 = 0;
      local_25c = 0;
LAB_10063499f:
      do {
        _bzero(&local_158,0x100);
        iVar3 = FUN_10063759c(param_1,&local_158,local_258[uVar8]);
        if (iVar3 != -0x80) {
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            if (iVar3 != 0) {
              uVar8 = uVar8 + 1;
              if (uVar8 == uVar7) break;
              goto LAB_10063499f;
            }
          }
          bVar1 = local_158._3_1_;
          if (0xfb < local_158._3_1_) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "pageSize < kMaxCheckPointDataSize";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          uVar9 = (ulong)(ushort)local_25c;
          local_25c = (uint)bVar1 + (local_25c & 0xffff);
          if (uVar6 <= local_25c) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "( offset + pageSize ) < bufferSize";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          if (uVar6 < local_25c) {
            *(undefined1 *)(uVar9 + lVar5) = 0;
            iVar3 = 0;
            goto LAB_100634bfc;
          }
          FUN_1001c631b((long)&local_158 + 4,(undefined1 *)(uVar9 + lVar5),bVar1);
          uVar8 = uVar8 + 1;
          if (uVar8 == uVar7) {
            *(undefined1 *)(lVar5 + (ulong)(ushort)local_25c) = 0;
            iVar3 = 0;
            goto LAB_100634bfc;
          }
          goto LAB_10063499f;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
      *(undefined1 *)(lVar5 + (ulong)(ushort)local_25c) = 0;
      FUN_1001c64c1();
      lVar5 = 0;
    }
  }
  else if (iVar3 == 2) {
LAB_1006347a0:
    lVar5 = 0;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_258[0] = 2;
      local_258[1] = 2;
      local_258[2] = 0x22;
      local_258[3] = 8;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "status == noErr || status == kSCSITaskStatus_CHECK_CONDITION";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_258,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
LAB_100634bfc:
  *param_2 = lVar5;
LAB_100634c00:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

