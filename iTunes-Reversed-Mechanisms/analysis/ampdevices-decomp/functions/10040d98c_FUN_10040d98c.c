// name: FUN_10040d98c
// address: 10040d98c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10040d98c(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 local_f8;
  char *local_f4;
  undefined2 local_ec;
  int local_ea;
  undefined8 local_d8 [2];
  long local_c8 [4];
  long *local_a8;
  code *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = (long *)0x0;
  local_d8[0] = 0;
  local_98 = (code *)0x0;
  puStack_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1001c62d9(local_d8,0xa0);
  iVar3 = FUN_1001e96d3(&local_58,1,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      local_98 = FUN_10040ddbd;
      puStack_90 = local_d8;
      local_74 = param_2;
      local_70 = FUN_1001705fc(param_3);
      local_68 = *(undefined4 *)(param_1 + 0x2c08);
      local_48 = 1;
      iVar3 = FUN_1001ecf95(param_5);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          auVar9._8_4_ = (int)((ulong)param_4 >> 0x20);
          auVar9._0_8_ = param_4;
          auVar9._12_4_ = DAT_10070d3c0._4_4_;
          dVar7 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_4) - _DAT_10070d3d0;
          dVar11 = auVar9._8_8_ - _UNK_10070d3d8;
          do {
            iVar3 = FUN_1001e9afc(&local_58);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                goto joined_r0x00010040dc17;
              }
              break;
            }
            iVar3 = FUN_1001e9b10(&local_58);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                goto joined_r0x00010040dc17;
              }
              break;
            }
            *(long *)(param_1 + 0x2c00) = local_60;
            auVar13._8_4_ = (int)((ulong)local_60 >> 0x20);
            auVar13._0_8_ = local_60;
            auVar13._12_4_ = DAT_10070d3c0._4_4_;
            dVar8 = 0.0;
            dVar12 = 0.0;
            if (param_4 != 0) {
              dVar12 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_60) - _DAT_10070d3d0)
                       + (auVar13._8_8_ - _UNK_10070d3d8)) / (dVar7 + dVar11);
            }
            *(double *)(param_1 + 0x2c68) = dVar12;
            lVar5 = *(long *)(param_1 + 0x2bf0);
            if (lVar5 != 0) {
              lVar4 = local_60 + *(long *)(param_1 + 0x2bf8);
              auVar10._8_4_ = (int)((ulong)lVar4 >> 0x20);
              auVar10._0_8_ = lVar4;
              auVar10._12_4_ = DAT_10070d3c0._4_4_;
              auVar14._8_4_ = (int)((ulong)lVar5 >> 0x20);
              auVar14._0_8_ = lVar5;
              auVar14._12_4_ = DAT_10070d3c0._4_4_;
              dVar8 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar4) - _DAT_10070d3d0) +
                      (auVar10._8_8_ - _UNK_10070d3d8)) /
                      (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar5) - _DAT_10070d3d0) +
                      (auVar14._8_8_ - _UNK_10070d3d8));
            }
            *(double *)(param_1 + 0x2c70) = dVar8;
            uVar1 = *(uint *)(param_1 + 0x2be0);
            *(uint *)(param_1 + 0x2be0) = uVar1 | 0x40000;
            if ((uVar1 & 0xc0) != 0) {
              local_78 = 1;
            }
            iVar3 = local_48;
          } while (local_48 == 1);
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
joined_r0x00010040dc17:
          if (cVar2 != '\0') {
            local_ec = 0x400;
            local_f4 = "Assertion failure";
            local_f8 = 0x8220202;
            local_ea = iVar3;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_f8,0x12);
          }
        }
      }
      FUN_10017060f(local_70);
      FUN_1001e9bb5(&local_58);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_f8 = 0x8220202;
        local_f4 = "Assertion failure";
        local_ec = 0x400;
        local_ea = iVar3;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_f8,0x12);
      }
    }
  }
  if (local_a8 == local_c8) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (local_a8 == (long *)0x0) goto LAB_10040dc56;
  }
  (**(code **)(*local_a8 + lVar5))();
LAB_10040dc56:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

