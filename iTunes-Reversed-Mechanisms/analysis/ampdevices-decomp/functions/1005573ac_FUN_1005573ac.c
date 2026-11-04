// name: FUN_1005573ac
// address: 1005573ac

int FUN_1005573ac(long param_1,int *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_1a4 [4];
  char local_1a0 [8];
  char local_198 [8];
  ulong local_190;
  int *local_188;
  int local_17c;
  long local_178;
  long local_170;
  long local_168;
  uint local_15c;
  char local_158;
  int local_157;
  undefined4 uStack_153;
  char local_14f;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_158 = '\0';
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_4a = "mPlayerOpen == true";
LAB_10055759c:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1005575c1:
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_1005575d0;
  }
  if ((*param_2 != 0x46494c45) && (*param_2 != 0x4d46494c)) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_4a = "(msg->trackKind == kITFileKind) || (msg->trackKind == kITMemoryFileKind)";
      goto LAB_10055759c;
    }
    goto LAB_1005575c1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_4a = "mDataHandler != nullptr";
      goto LAB_10055759c;
    }
    goto LAB_1005575c1;
  }
  puVar1 = *(ulong **)(param_2 + 8);
  if (puVar1 == (ulong *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_4a = "msg->itTrackInfoPriv != nullptr";
      goto LAB_10055759c;
    }
    goto LAB_1005575c1;
  }
  if ((*(int *)(param_1 + 0x850) != 0x6d703461) &&
     (iVar6 = -4, *(char *)(param_1 + 0x891) != '\x02')) goto LAB_1005575d0;
  if ((*(char *)(param_1 + 0x64ab) == '\x01') && ((*(uint *)((long)puVar1 + 0x54) & 2) == 0)) {
    *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(param_1 + 0x14a0);
    *(int *)((long)puVar1 + 0x5c) = *(int *)(param_1 + 0x1498) - *(int *)(param_1 + 0x14a8);
    puVar1[0xc] = *(ulong *)(param_1 + 0x14b0);
    *(uint *)((long)puVar1 + 0x54) = *(uint *)((long)puVar1 + 0x54) | 1;
    *puVar1 = *puVar1 | 0x40000000;
    iVar6 = 0;
    goto LAB_1005575d0;
  }
  uVar11 = *(uint *)(param_1 + 0x14a0);
  FUN_1001e4c6b(param_1 + 0x61e4,&local_158);
  local_168 = param_1;
  if (local_158 != '\0') {
    uVar9 = FUN_1001c15fb();
    pcVar10 = (char *)FUN_1001b83ae(uVar9);
    iVar6 = _strncmp((char *)&local_157,pcVar10,6);
    uVar11 = 0x840;
    if (iVar6 != 0) {
      if (local_157 == 0x6f72654e) {
        uVar11 = 0xa40;
      }
      else {
        FUN_1001dfb1f("unknown",&local_158,0xff);
      }
    }
    goto LAB_100557829;
  }
  if (*(long *)(param_1 + 0x6d0) != 0) {
LAB_100557688:
    uVar9 = FUN_1001c15fb();
    pcVar10 = (char *)FUN_1001b83ae(uVar9);
    goto LAB_10055769f;
  }
  iVar6 = *(int *)(param_1 + 0x708);
  if (0x75a < iVar6) {
    if (iVar6 < 0x866) {
      if (iVar6 == 0x75b) goto switchD_100557714_caseD_3;
      if (iVar6 == 0x767) goto switchD_100557714_caseD_6;
      if (iVar6 == 0x76a) goto switchD_100557714_caseD_5;
    }
    else if (iVar6 < 0xa00) {
      if (iVar6 == 0x866) {
switchD_100557714_caseD_6:
        FUN_1001dfb1f("Fraunhofer",&local_158,0xff);
        uVar11 = 0xa68;
      }
      else if (iVar6 == 0x879) goto LAB_100557688;
    }
    else {
      if (iVar6 == 0xa00) goto switchD_100557714_caseD_6;
      if (iVar6 == 0xb48) goto switchD_100557714_caseD_5;
    }
    goto LAB_100557829;
  }
  switch(iVar6) {
  case 2:
    iVar6 = 0;
    local_15c = uVar11;
    do {
      iVar7 = FUN_1005570b8(local_168,iVar6,local_1a0,local_198);
      if ((iVar7 == -0x80) || (iVar7 == 0)) {
        if ((iVar7 == 0) && (local_1a0[0] == '\0')) {
          pcVar10 = "Coding Technologies";
          if (local_198[0] == '\0') {
            pcVar10 = "Dolby Pro";
          }
          FUN_1001dfb1f(pcVar10,&local_158,0xff);
          param_1 = local_168;
          uVar11 = (uint)(local_198[0] == '\0') * 0x200 + 0x640;
          break;
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      iVar6 = iVar6 + 1;
      param_1 = local_168;
      uVar11 = local_15c;
    } while (iVar6 != 0x14);
    break;
  case 3:
  case 4:
switchD_100557714_caseD_3:
    pcVar10 = "Dolby Pro 1.2";
    goto LAB_10055769f;
  case 5:
switchD_100557714_caseD_5:
    pcVar10 = "Dolby Pro or iTunes";
LAB_10055769f:
    FUN_1001dfb1f(pcVar10,&local_158,0xff);
    uVar11 = 0x840;
    break;
  case 6:
    goto switchD_100557714_caseD_6;
  default:
    if (iVar6 == 0x692) {
      FUN_1001dfb1f("Coding Technologies",&local_158,0xff);
      uVar11 = 0x640;
    }
  }
LAB_100557829:
  uVar14 = *(int *)(param_1 + 0x860) * *(int *)(param_1 + 0x868);
  local_178 = FUN_1001c63e1((ulong)uVar14 * 4);
  if (local_178 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "packetFrameBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar13 = (ulong)(uVar14 * 2);
    local_170 = FUN_1001c63e1(uVar13 * 4);
    if (local_170 != 0) {
      lVar12 = 0;
      if (0x13 < *(int *)(param_1 + 0x1474)) {
        lVar12 = (long)((float)(long)((ulong)*(uint *)(param_1 + 0x868) *
                                     (ulong)(*(int *)(param_1 + 0x1474) - 0x14)) /
                       *(float *)(param_1 + 0x1460));
      }
      iVar6 = FUN_100553780(0,param_1,lVar12,local_1a4,local_1a0,0,0);
      lVar12 = local_170;
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          uVar14 = 0;
          local_190 = uVar13;
          local_188 = param_2;
          local_15c = uVar11;
          do {
            lVar4 = local_168;
            iVar6 = FUN_100554602(local_168,local_178,&local_17c,local_198,0);
            uVar14 = uVar14 + local_17c;
            uVar11 = local_17c * *(int *)(lVar4 + 0x860);
            uVar13 = (ulong)((int)local_190 - uVar11);
            FUN_1001c631b((ulong)uVar11 * 4 + lVar12,lVar12,uVar13 * 4);
            FUN_1001c631b(local_178,uVar13 * 4 + lVar12,(ulong)uVar11 * 4);
          } while (iVar6 == 0);
          if (iVar6 != -0x80) {
            if (iVar6 == -0x27) {
              uVar11 = *(uint *)(local_168 + 0x860);
              iVar6 = 0;
              uVar13 = (local_190 & 0xffffffff) / (ulong)uVar11;
              if (uVar14 < (uint)uVar13) {
                uVar13 = (ulong)uVar14;
              }
              uVar2 = *(ulong *)(local_168 + 0x1498);
              iVar7 = (int)uVar2;
              if (local_15c < uVar2) {
                iVar6 = FUN_100556d74(local_170,uVar13,uVar11,(ulong)local_15c,uVar2,1,&local_58);
              }
              else {
                uStack_54 = (undefined4)(uVar2 >> 0x20);
                local_15c = 0;
                local_58 = iVar7;
              }
              uVar14 = local_15c;
              piVar3 = local_188;
              if (local_14f == 'o' && CONCAT44(uStack_153,local_157) == 0x72502079626c6f44) {
                local_168 = CONCAT44(uStack_54,local_58);
                iVar8 = FUN_100556d74(local_170,uVar13,uVar11,local_15c,uVar2,0,&local_58);
                bVar15 = 99 < iVar7 - (local_58 + uVar14);
                lVar12 = uVar2 - uVar14;
                if (iVar8 != 0 || bVar15) {
                  lVar12 = local_168;
                }
                local_58 = (int)lVar12;
                uStack_54 = (undefined4)((ulong)lVar12 >> 0x20);
                if (iVar8 != 0 || bVar15) goto LAB_100557be3;
              }
              else {
LAB_100557be3:
                if ((iVar6 != 0) && (iVar6 != -0x28)) goto LAB_100557a80;
              }
              puVar1 = *(ulong **)(piVar3 + 8);
              *puVar1 = *puVar1 | 0x40000000;
              *(uint *)(puVar1 + 0xb) = local_15c;
              *(uint *)((long)puVar1 + 0x5c) = iVar7 - (local_15c + local_58);
              puVar1[0xc] = CONCAT44(uStack_54,local_58);
              puVar1[0xd] = 0;
              *(uint *)((long)puVar1 + 0x54) = *(uint *)((long)puVar1 + 0x54) & 0xfffffc | 0x2000003
              ;
              iVar6 = 0;
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_100557a80:
      FUN_1001c64c1(local_178);
      FUN_1001c64c1(local_170);
      goto LAB_1005575d0;
    }
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "trackFrameBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001c64c1(local_178);
  }
  iVar6 = -0x6c;
LAB_1005575d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

