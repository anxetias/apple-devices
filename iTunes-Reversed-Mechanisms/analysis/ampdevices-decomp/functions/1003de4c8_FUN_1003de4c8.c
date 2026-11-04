// name: FUN_1003de4c8
// address: 1003de4c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003de4c8(long param_1,undefined8 param_2,uint param_3,undefined4 *param_4,double *param_5,
                 undefined1 *param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b4;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_94;
  undefined8 local_90;
  int local_84;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  *(undefined4 *)(param_1 + 0x578) = 1;
  *param_4 = 0;
  auVar18._0_8_ = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0x560));
  auVar18._8_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x560) >> 0x20);
  auVar18._12_4_ = DAT_10070d3c0._4_4_;
  *param_5 = (auVar18._0_8_ - _DAT_10070d3d0) + (auVar18._8_8_ - _UNK_10070d3d8);
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  local_b0 = param_4;
  local_90 = param_2;
  if ((puVar10 != (undefined8 *)0x0) && (lVar2 = puVar10[1], lVar2 != param_1)) {
    if (lVar2 != 0) {
      iVar7 = (**(code **)(**(long **)(lVar2 + 0x568) + 0x128))();
      iVar8 = -0x27;
      local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
      if (iVar7 != 0) goto LAB_1003dea7b;
      puVar10 = *(undefined8 **)(param_1 + 0x20);
    }
    iVar7 = (**(code **)(**(long **)(param_1 + 0x568) + 0x120))
                      (*(long **)(param_1 + 0x568),*puVar10);
    iVar8 = -0x27;
    local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
    if (iVar7 != 0) goto LAB_1003dea7b;
    *(long *)(*(long *)(param_1 + 0x20) + 8) = param_1;
  }
  uVar12 = *(ulong *)(param_1 + 0x550);
  uVar3 = *(ulong *)(param_1 + 0x558);
  iVar7 = -0x27;
  iVar8 = iVar7;
  local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
  if (uVar3 <= uVar12) goto LAB_1003dea7b;
  if (*(uint *)(param_1 + 0x538) < param_3) {
    param_3 = *(uint *)(param_1 + 0x538);
  }
  iVar16 = (int)uVar12;
  if ((*(long *)(param_1 + 0x508) == 0) || (*(char *)(param_1 + 0x598) == '\x01')) {
    param_3 = param_3 * *(uint *)(param_1 + 0x4a8);
    if (*(uint *)(param_1 + 0x588) <= param_3) {
      param_3 = *(uint *)(param_1 + 0x588);
    }
    uVar15 = (ulong)param_3;
    if ((uVar3 < uVar12 + uVar15) &&
       (uVar14 = (int)uVar3 - iVar16, uVar15 = (ulong)uVar14,
       uVar14 % *(uint *)(param_1 + 0x4a8) != 0)) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c._0_2_ = 0x822;
        local_6c._2_2_ = 0xadcb;
        uStack_68 = 0x7c;
        uStack_66 = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      uVar12 = *(ulong *)(param_1 + 0x550);
    }
    uVar3 = *(ulong *)(param_1 + 0x548);
    if (uVar12 != uVar3) {
      if ((*(int *)(param_1 + 0x28) == 0x48545450) || (*(int *)(param_1 + 0x28) == 0x53485244)) {
        local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
        if (uVar12 < uVar3) goto LAB_1003dea7b;
        plVar4 = *(long **)(param_1 + 0x570);
        local_c8 = *(undefined8 *)(param_1 + 0x568);
        uStack_c0 = *(undefined8 *)(param_1 + 0x570);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar4[1] = plVar4[1] + 1;
          UNLOCK();
        }
        local_84 = FUN_1003def4c(&local_c8,(int)uVar12 - (int)uVar3,0);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        local_84 = (**(code **)(**(long **)(param_1 + 0x568) + 0xf0))();
      }
      iVar8 = local_84;
      local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
      if (local_84 == -0x80) goto LAB_1003dea7b;
      if (local_84 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar8 = local_84;
        local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
        if (cVar6 == '\0') goto LAB_1003dea7b;
        local_6c._2_2_ = (undefined2)local_84;
        uStack_68 = (undefined2)((uint)local_84 >> 0x10);
LAB_1003ded35:
        local_6c._0_2_ = 0x400;
        local_74 = "Assertion failure";
        local_78 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
        goto LAB_1003dea7b;
      }
      *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x550);
    }
    local_80 = uVar15;
    if ((*(long *)(param_1 + 0x508) == 0) || (*(char *)(param_1 + 0x597) == '\x01')) {
      iVar8 = (**(code **)(**(long **)(param_1 + 0x568) + 0xa8))
                        (*(long **)(param_1 + 0x568),&local_80,local_90);
      if (iVar8 != -0x80) {
        local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
        if (iVar8 == -0x27) {
          iVar8 = iVar7;
          if (local_80 == 0) goto LAB_1003dea7b;
        }
        else if (iVar8 != 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_6c._2_2_ = (undefined2)iVar8;
            uStack_68 = (undefined2)((uint)iVar8 >> 0x10);
            goto LAB_1003dee1f;
          }
          goto LAB_1003dea78;
        }
        uVar12 = local_80 / *(uint *)(param_1 + 0x4a8);
        goto LAB_1003de8e6;
      }
    }
    else {
      iVar8 = (**(code **)(**(long **)(param_1 + 0x568) + 0xa8))
                        (*(long **)(param_1 + 0x568),&local_80,*(undefined8 *)(param_1 + 0x580));
      if (iVar8 != -0x80) {
        if (iVar8 == -0x27) {
          iVar8 = iVar7;
          local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
          if (local_80 == 0) goto LAB_1003dea7b;
        }
        else if (iVar8 != 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_6c._2_2_ = (undefined2)iVar8;
            uStack_68 = (undefined2)((uint)iVar8 >> 0x10);
LAB_1003dee1f:
            local_6c._0_2_ = 0x400;
            local_74 = "Assertion failure";
            local_78 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_78,0x12);
          }
          goto LAB_1003dea78;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_80;
        auVar5 = auVar5 / ZEXT416(*(uint *)(param_1 + 0x4a8));
        uVar12 = auVar5._0_8_;
        iVar16 = *(int *)(param_1 + 0x528) * auVar5._0_4_;
        local_94 = iVar16;
        iVar7 = _AudioConverterConvertBuffer
                          (*(undefined8 *)(param_1 + 0x508),local_80,
                           *(undefined8 *)(param_1 + 0x580),&local_94,local_90);
        iVar8 = -0x24;
        local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
        if ((iVar7 != 0) ||
           (local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c), local_94 != iVar16))
        goto LAB_1003dea7b;
        goto LAB_1003de8e6;
      }
    }
LAB_1003dea78:
    local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
    goto LAB_1003dea7b;
  }
  uVar14 = *(uint *)(param_1 + 0x588);
  iVar7 = *(int *)(param_1 + 0x590);
  uVar9 = uVar14 - iVar7;
  if (uVar14 < uVar14 - iVar7) {
    uVar9 = uVar14;
  }
  if (uVar9 == 0) {
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c._0_2_ = 0x822;
      local_6c._2_2_ = 0xae0a;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = -0xd0;
    local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
    goto LAB_1003dea7b;
  }
  uVar15 = (ulong)(uint)((int)uVar3 - iVar16);
  if (uVar9 + uVar12 <= uVar3) {
    uVar15 = (ulong)uVar9;
  }
  uVar14 = *(uint *)(param_1 + 0x4a0);
  local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
  if ((uint)uVar15 < uVar14) goto LAB_1003dea7b;
  uVar3 = *(ulong *)(param_1 + 0x548);
  if (uVar12 != uVar3) {
    if ((*(int *)(param_1 + 0x28) == 0x48545450) || (*(int *)(param_1 + 0x28) == 0x53485244)) {
      local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
      if (uVar12 < uVar3) goto LAB_1003dea7b;
      local_a8 = *(undefined8 *)(param_1 + 0x568);
      uStack_a0 = *(undefined8 *)(param_1 + 0x570);
      if (*(long *)(param_1 + 0x570) != 0) {
        LOCK();
        plVar4 = (long *)(*(long *)(param_1 + 0x570) + 8);
        *plVar4 = *plVar4 + 1;
        UNLOCK();
      }
      iVar8 = FUN_1003def4c(&local_a8,iVar16 - (int)uVar3,0);
      FUN_10021e316(&local_a8);
    }
    else {
      iVar8 = (**(code **)(**(long **)(param_1 + 0x568) + 0xf0))();
    }
    local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
    if (iVar8 == -0x80) goto LAB_1003dea7b;
    if (iVar8 != 0) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      local_6c = CONCAT22(local_6c._2_2_,(undefined2)local_6c);
      if (cVar6 == '\0') goto LAB_1003dea7b;
      local_6c._2_2_ = (undefined2)iVar8;
      uStack_68 = (undefined2)((uint)iVar8 >> 0x10);
      goto LAB_1003ded35;
    }
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x550);
    iVar7 = *(int *)(param_1 + 0x590);
  }
  uVar14 = (uint)uVar15 - (int)(uVar15 % (ulong)uVar14);
  local_80 = (ulong)uVar14;
  iVar8 = (**(code **)(**(long **)(param_1 + 0x568) + 0xa8))
                    (*(long **)(param_1 + 0x568),&local_80,(long)iVar7 + *(long *)(param_1 + 0x580))
  ;
  if ((iVar8 == 0) && (local_80 == uVar14)) {
    iVar8 = *(int *)(param_1 + 0x590) + uVar14;
    *(int *)(param_1 + 0x590) = iVar8;
    if (*(char *)(param_1 + 0x597) != '\0') {
      *(uint *)(param_1 + 0x58c) = uVar14;
      *(undefined4 *)(param_1 + 0x590) = 0;
      uVar12 = 0;
LAB_1003de8e6:
      lVar2 = *(long *)(param_1 + 0x560);
      lVar13 = *(long *)(param_1 + 0x548) + local_80;
      auVar19._8_4_ = (int)((ulong)lVar2 >> 0x20);
      auVar19._0_8_ = lVar2;
      auVar19._12_4_ = DAT_10070d3c0._4_4_;
      dVar17 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar2) - _DAT_10070d3d0;
      dVar20 = auVar19._8_8_ - _UNK_10070d3d8;
      *(long *)(param_1 + 0x548) = lVar13;
      *(long *)(param_1 + 0x550) = lVar13;
      *param_5 = dVar17 + dVar20;
      *(ulong *)(param_1 + 0x560) = (uVar12 & 0xffffffff) + lVar2;
      *local_b0 = (int)uVar12;
      iVar8 = 0;
      goto LAB_1003dea7b;
    }
    uVar9 = iVar8 - *(int *)(param_1 + 0x58c);
    uVar14 = *(uint *)(param_1 + 0x4a0);
    if (uVar9 % uVar14 != 0) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(inputBytes % mFormatInfo.audioFormat.mBytesPerPacket) == 0";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    local_b4 = ((uVar9 / uVar14) * *(int *)(param_1 + 0x4a4)) / *(uint *)(param_1 + 0x524);
    local_78 = 1;
    local_74 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0x4ac),(undefined4)local_74);
    local_6c = local_b4 * *(int *)(param_1 + 0x520);
    uStack_68 = (undefined2)local_90;
    uStack_66 = (undefined4)((ulong)local_90 >> 0x10);
    uStack_62 = (undefined2)((ulong)local_90 >> 0x30);
    iVar8 = _AudioConverterFillComplexBuffer
                      (*(undefined8 *)(param_1 + 0x508),FUN_1003dac64,param_1,&local_b4,&local_78,0)
    ;
    if (iVar8 != -0x80) {
      if ((iVar8 == 0) || (iVar8 == -0x27)) {
        uVar12 = (ulong)local_6c / (ulong)*(uint *)(param_1 + 0x528);
        iVar8 = *(int *)(param_1 + 0x590) - *(int *)(param_1 + 0x58c);
        if (iVar8 < 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bytesToMove >= 0";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar7 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          iVar7 = 0;
          if (iVar8 != 0) {
            FUN_1001c631b((long)*(int *)(param_1 + 0x58c) + *(long *)(param_1 + 0x580),
                          *(long *)(param_1 + 0x580),iVar8);
            iVar7 = iVar8;
          }
        }
        *(undefined4 *)(param_1 + 0x58c) = 0;
        *(int *)(param_1 + 0x590) = iVar7;
        goto LAB_1003de8e6;
      }
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  else {
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c._0_2_ = 0x822;
      local_6c._2_2_ = 0xae1d;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar8 = -0x24;
LAB_1003dea7b:
  *(undefined4 *)(param_1 + 0x578) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

