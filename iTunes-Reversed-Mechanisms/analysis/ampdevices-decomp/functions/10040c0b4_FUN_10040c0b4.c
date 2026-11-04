// name: FUN_10040c0b4
// address: 10040c0b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10040c0b4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 local_518;
  undefined4 local_510;
  undefined1 local_508 [1056];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_6 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "displayName != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10040c727(param_1,param_6,0x7472616b,0x20000);
  FUN_1001c62d9(&local_518,0x4c0);
  iVar4 = FUN_1001e9c3e(local_b8);
  if (iVar4 == -0x80) goto LAB_10040c579;
  if (iVar4 == 0) {
    iVar4 = FUN_1001e96d3(&local_70,1,0);
    if (iVar4 == -0x80) goto LAB_10040c579;
    if (iVar4 == 0) {
      FUN_100529664(*(undefined8 *)(param_1 + 0x2c60),FUN_10040c799,&local_518);
      local_518 = FUN_1001705fc(param_2);
      local_510 = param_3;
      local_e0 = param_4;
      local_d8 = FUN_1001705fc(param_5);
      local_60 = 1;
      FUN_1002f7abe(param_1,1,local_508);
      local_e8 = *(undefined8 *)(param_1 + 0x2c18);
      iVar4 = FUN_1001ee6ff(FUN_10040c904,&local_518,0xfffffffe,0,0,"");
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          auVar9._0_8_ = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_7);
          auVar9._8_4_ = (int)((ulong)param_7 >> 0x20);
          auVar9._12_4_ = DAT_10070d3c0._4_4_;
          dVar8 = auVar9._0_8_ - _DAT_10070d3d0;
          dVar11 = auVar9._8_8_ - _UNK_10070d3d8;
          do {
            iVar4 = FUN_1001e9afc(&local_70);
            if (iVar4 != 0) {
              if (iVar4 == -0x80) goto LAB_10040c543;
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_10040c543;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_10040c70a;
            }
            iVar4 = FUN_1001e9b10(&local_70);
            if (iVar4 != 0) {
              if (iVar4 == -0x80) goto LAB_10040c543;
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_10040c543;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_10040c70a;
            }
            if ((local_c0 < DAT_100701af0) || (DAT_100700458 < local_c0)) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "context.ratioComplete >= 0. && context.ratioComplete <= 1.";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            dVar12 = local_c0 * (dVar8 + dVar11);
            uVar7 = (ulong)dVar12;
            uVar7 = (long)(dVar12 - DAT_10070e4c0) & (long)uVar7 >> 0x3f | uVar7;
            *(ulong *)(param_1 + 0x2c00) = uVar7;
            *(double *)(param_1 + 0x2c68) = local_c0;
            lVar2 = *(long *)(param_1 + 0x2bf0);
            dVar12 = local_c0;
            if (lVar2 != 0) {
              lVar6 = uVar7 + *(long *)(param_1 + 0x2bf8);
              auVar10._8_4_ = (int)((ulong)lVar6 >> 0x20);
              auVar10._0_8_ = lVar6;
              auVar10._12_4_ = DAT_10070d3c0._4_4_;
              auVar13._8_4_ = (int)((ulong)lVar2 >> 0x20);
              auVar13._0_8_ = lVar2;
              auVar13._12_4_ = DAT_10070d3c0._4_4_;
              dVar12 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar6) - _DAT_10070d3d0) +
                       (auVar10._8_8_ - _UNK_10070d3d8)) /
                       (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar2) - _DAT_10070d3d0) +
                       (auVar13._8_8_ - _UNK_10070d3d8));
            }
            *(double *)(param_1 + 0x2c70) = dVar12;
            uVar1 = *(uint *)(param_1 + 0x2be0);
            *(uint *)(param_1 + 0x2be0) = uVar1 | 0x40000;
            if ((((uVar1 & 0x40) != 0) && (*(long *)(param_1 + 0x2c60) != 0)) &&
               (cVar3 = FUN_100529831(), cVar3 == '\0')) {
              FUN_10052972e(*(undefined8 *)(param_1 + 0x2c60));
            }
            iVar4 = local_60;
          } while (local_60 == 1);
          if ((local_60 != 0) &&
             ((cVar3 = FUN_100529831(*(undefined8 *)(param_1 + 0x2c60)), cVar3 != '\0' ||
              ((*(byte *)(param_1 + 0x2be0) & 0x80) != 0)))) {
            iVar4 = -0x80;
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_10040c70a:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_10040c543:
      FUN_100529664(*(undefined8 *)(param_1 + 0x2c60),0,0);
      FUN_1001e9bb5(&local_70);
      FUN_1001e9d75(local_b8);
      FUN_10017060f(param_2);
      FUN_10017060f(param_5);
      goto LAB_10040c579;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10040c579;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10040c579;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_10040c579:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

