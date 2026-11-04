// name: FUN_1002cd8e2
// address: 1002cd8e2

int FUN_1002cd8e2(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int local_170;
  undefined4 local_16c;
  uint local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 local_14c;
  int local_14a;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x61616365) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_138 = 0x8220202;
      uStack_134 = 0x7a0a90;
      uStack_130 = 1;
      uStack_12c = 0x822;
      uStack_12a = 0xbfe4;
      uStack_128 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1002cdc72;
  }
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  if (*(char *)(param_1 + 0x360) == '\x01') {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
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
    uStack_128 = 0;
    uStack_122 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_12a = 0;
    local_160 = 1;
    iVar3 = _AudioCodecAppendInputData(*(undefined8 *)(param_1 + 0x300));
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        local_164 = *(int *)(param_1 + 0x38);
        local_160 = 1;
        iVar4 = _AudioCodecProduceOutputPackets
                          (*(undefined8 *)(param_1 + 0x300),*param_2,&local_164,&local_160,0,
                           &local_170);
        if (iVar4 == 0) {
          if (local_160 != 0) {
            iVar3 = FUN_10022fba2(param_1,local_164,*(undefined4 *)(param_1 + 0x30));
            if (iVar3 == -0x80) goto LAB_1002cdc51;
            if (iVar3 != 0) {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              goto joined_r0x0001002cdace;
            }
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + local_164;
          }
          iVar3 = 0;
          if (local_170 - 2U < 3) goto LAB_1002cdc51;
        }
        iVar3 = *(int *)(param_1 + 0x248);
        if (iVar3 != 0) {
          lVar6 = *(long *)(param_1 + 0x210);
          iVar1 = *(int *)(lVar6 + 0xc);
          lVar8 = (long)iVar1;
          *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0xc) = *(undefined4 *)(param_1 + 0x23c);
          *(int *)(lVar6 + 0x14 + lVar8 * 0xc) = iVar3;
          *(undefined4 *)(lVar6 + 0x18 + lVar8 * 0xc) = 1;
          *(int *)(lVar6 + 0xc) = iVar1 + 1;
        }
        *(undefined1 *)(param_1 + 0x360) = 0;
        local_15c = 8;
        iVar3 = _AudioCodecGetProperty
                          (*(undefined8 *)(param_1 + 0x300),0x7072696d,&local_15c,&local_158);
        if (iVar3 == 0) {
          uVar5 = CONCAT44(uStack_154,local_158);
          *(ulong *)(param_1 + 700) = uVar5;
        }
        else {
          uVar5 = (ulong)*(uint *)(param_1 + 700);
        }
        iVar3 = iVar4;
        if ((int)uVar5 == 0) {
          *(undefined8 *)(param_1 + 700) = 0x840;
          local_15c = 4;
          iVar4 = _AudioCodecGetProperty
                            (*(undefined8 *)(param_1 + 0x300),0x636f6465,&local_15c,&local_16c);
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 700) = local_16c;
          }
          local_15c = 4;
          iVar4 = _AudioCodecGetProperty
                            (*(undefined8 *)(param_1 + 0x300),0x70616430,&local_15c,&local_168);
          if (iVar4 == 0) {
            *(uint *)(param_1 + 0x2c0) = local_168 / *(uint *)(param_1 + 0x14);
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
joined_r0x0001002cdace:
        if (cVar2 != '\0') {
          uStack_150 = 1;
          uStack_154 = 0x7a0a90;
          local_14c = 0x400;
          local_158 = 0x8220202;
          local_14a = iVar3;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_158,0x12);
        }
      }
    }
LAB_1002cdc51:
    lVar6 = (long)*(int *)((long)param_2 + 0x14);
  }
  else {
    iVar3 = -0x27;
    lVar6 = 0;
  }
  *(long *)(param_1 + 0x48) = *param_2 - *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x50) = param_2[1];
  *(long *)(param_1 + 0x58) = lVar6 + *(long *)(param_1 + 0x58);
LAB_1002cdc72:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

