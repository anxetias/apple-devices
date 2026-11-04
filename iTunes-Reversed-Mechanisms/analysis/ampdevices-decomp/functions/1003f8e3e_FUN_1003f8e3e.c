// name: FUN_1003f8e3e
// address: 1003f8e3e

int FUN_1003f8e3e(int *param_1,long param_2,int param_3,long *param_4)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined2 local_24c;
  int local_24a;
  ushort local_238;
  undefined2 uStack_236;
  undefined4 uStack_234;
  uint local_230;
  undefined2 local_22c;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)((ulong)(*(long *)(*param_4 + 0x18) - *(long *)(*param_4 + 0x10)) >> 3) * 0xc + 0x10U <
      0x100001) {
    FUN_1001c62d9();
    puVar7 = (ushort *)(param_1 + 4);
    iVar3 = (int)((ulong)(*(long *)(*param_4 + 0x18) - *(long *)(*param_4 + 0x10)) >> 3);
    if (iVar3 == 0) {
      uVar11 = 0;
    }
    else {
      iVar10 = 0;
      uVar11 = 0;
      puVar8 = puVar7;
      do {
        lVar4 = FUN_10037b3b0(*param_4,iVar10);
        local_238 = 0;
        uVar1 = 0;
        switch(param_3) {
        case 5:
          if ((*(byte *)((long)param_1 + 0x10001a) & 0x20) == 0) {
            FUN_100476e65();
          }
          else {
            FUN_100476928(*(undefined8 *)(lVar4 + 8),&local_238);
          }
          break;
        case 6:
          if ((*(byte *)((long)param_1 + 0x10001a) & 0x20) == 0) {
            FUN_1004777d6();
          }
          else {
            FUN_1004772c4(*(undefined8 *)(lVar4 + 8),&local_238);
          }
          break;
        case 7:
          FUN_100477dec(*(undefined8 *)(lVar4 + 8),&local_238);
          break;
        case 8:
          goto switchD_1003f8f1f_caseD_8;
        case 9:
          FUN_10047a7b5(*(undefined8 *)(lVar4 + 8),&local_238);
          break;
        default:
          if (param_3 == 0x18) {
            if ((*(byte *)((long)param_1 + 0x10001a) & 0x20) == 0) {
              FUN_10047a452();
            }
            else {
              FUN_10047a0d2(*(undefined8 *)(lVar4 + 8),&local_238);
            }
          }
          else {
            if (param_3 != 0x2c) goto switchD_1003f8f1f_caseD_8;
            if ((*(byte *)((long)param_1 + 0x10001a) & 0x20) == 0) {
              FUN_10047e0c8();
            }
            else {
              FUN_10047dc87(*(undefined8 *)(lVar4 + 8),&local_238);
            }
          }
        }
        if (local_238 == 0) {
          uVar1 = 0;
        }
        else {
          iVar9 = local_238 + 1;
          puVar12 = &uStack_236;
          do {
            uVar5 = FUN_1001e39bb(*puVar12);
            if ((uVar5 & 0x3c) == 0) {
              uVar1 = *puVar12;
              goto switchD_1003f8f1f_caseD_8;
            }
            puVar12 = puVar12 + 1;
            iVar9 = iVar9 + -1;
          } while (1 < iVar9);
          uVar1 = 0;
        }
switchD_1003f8f1f_caseD_8:
        local_258._0_2_ = uVar1;
        local_258._0_2_ = FUN_1002dd6f2((ushort)local_258,0);
        if ((uVar11 == 0) || (cVar2 = FUN_1002dd5e5(&local_258,1,puVar8), cVar2 == '\0')) {
          uVar11 = uVar11 + 1;
          if (iVar10 != 0) {
            puVar8 = puVar8 + 6;
          }
          *puVar8 = (ushort)local_258;
          *(int *)(puVar8 + 2) = iVar10;
          puVar8[4] = 1;
          puVar8[5] = 0;
        }
        else {
          *(int *)(puVar8 + 4) = *(int *)(puVar8 + 4) + 1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar3);
    }
    iVar10 = uVar11 * 0xc;
    iVar3 = FUN_1003f7e40(param_3);
    *param_1 = iVar3;
    param_1[1] = uVar11;
    if (*(char *)((long)param_1 + 0x100127) != '\0') {
      *param_1 = iVar3 << 0x18;
      param_1[1] = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
      if (uVar11 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = DAT_10070e4b0;
        do {
          *puVar7 = *puVar7 << 8 | *puVar7 >> 8;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = *(ulong *)(puVar7 + 2);
          auVar14 = pshufb(auVar14,auVar13);
          *(long *)(puVar7 + 2) = auVar14._0_8_;
          puVar7 = puVar7 + 6;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    FUN_1001c62d9(&local_238,0x18);
    local_238 = 0x686d;
    uStack_236 = 0x646f;
    uStack_234 = 0x18;
    local_230 = iVar10 + 0x28;
    local_22c = 0x35;
    uStack_22a = 0;
    if (*(char *)((long)param_1 + 0x100127) != '\0') {
      local_238 = 0x6f64;
      uStack_236 = 0x6d68;
      uStack_234 = 0x18000000;
      local_230 = local_230 >> 0x18 | (local_230 & 0xff0000) >> 8 | (local_230 & 0xff00) << 8 |
                  local_230 * 0x1000000;
      local_22c = 0;
      uStack_22a = 0x3500;
    }
    local_258._0_2_ = 0x18;
    local_258._2_2_ = 0;
    uStack_254 = 0;
    iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x40000),&local_258,&local_238);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        uStack_254 = 0;
        local_258 = iVar10 + 0x10;
        iVar3 = FUN_100160894(*(undefined8 *)(param_1 + 0x40000),&local_258,param_1);
        if (iVar3 == -0x80) goto LAB_1003f9275;
        if (iVar3 == 0) {
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
          iVar3 = 0;
          goto LAB_1003f9275;
        }
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
      }
      if (cVar2 != '\0') {
        local_24c = 0x400;
        uStack_250 = 1;
        uStack_254 = 0x7a0a90;
        local_258._2_2_ = 0x822;
        local_258._0_2_ = 0x202;
        local_24a = iVar3;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_258,0x12);
      }
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x202;
      uStack_236 = 0x822;
      uStack_234 = 0x7a0a90;
      local_230 = 1;
      local_22c = 0x822;
      uStack_22a = 0xb61d;
      uStack_228 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
  }
LAB_1003f9275:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

