// name: FUN_100553780
// address: 100553780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100553780(double param_1,long param_2,uint param_3,undefined4 *param_4,double *param_5,
                   undefined8 param_6,int param_7)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 local_28c [4];
  undefined8 local_288;
  ulong local_280;
  int local_274;
  ulong local_270;
  ulong local_268;
  int local_25c;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  uint local_24a;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_2 + 0x64a8) == '\0') {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      uStack_230 = 1;
      local_22c = 0x822;
      local_22a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (((*(int *)(param_2 + 0x48) != 0x53485244) && (*(int *)(param_2 + 0x48) != 0x48545450)) ||
          (*(char *)(param_2 + 0x64a9) != '\0')) {
    dVar14 = (double)((float)param_3 * *(float *)(param_2 + 0x1460)) + DAT_100700b00;
    uVar6 = (ulong)dVar14;
    uVar6 = (long)(dVar14 - DAT_10070e4c0) & (long)uVar6 >> 0x3f | uVar6;
    uVar10 = 0;
    local_270 = *(ulong *)(param_2 + 0x14a0) + uVar6;
    if (uVar6 <= *(ulong *)(param_2 + 0x14a0)) {
      local_270 = uVar10;
    }
    uVar7 = *(ulong *)(param_2 + 0x14b0);
    if (uVar7 <= uVar6) {
      *(undefined4 *)(param_2 + 0x1478) = *(undefined4 *)(param_2 + 0x1474);
      *(ulong *)(param_2 + 0x1490) = uVar7;
      *param_4 = *(undefined4 *)(param_2 + 0x14b8);
      auVar12._8_4_ = (int)(uVar7 >> 0x20);
      auVar12._0_8_ = uVar7;
      auVar12._12_4_ = DAT_10070d3c0._4_4_;
      *param_5 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar7) - _DAT_10070d3d0) +
                 (auVar12._8_8_ - _UNK_10070d3d8);
      uVar2 = local_24a;
      goto LAB_100553998;
    }
    local_288 = param_6;
    local_274 = param_7;
    iVar4 = FUN_10054e38c(*(undefined8 *)(param_2 + 0x808),local_270,&local_270);
    uVar10 = 0xffffffce;
    uVar2 = local_24a;
    if (iVar4 == -1) goto LAB_100553998;
    local_25c = iVar4;
    cVar3 = (**(code **)(**(long **)(param_2 + 0x38) + 0x78))();
    if ((cVar3 == '\0') && (cVar3 = FUN_100553d42(param_2), cVar3 != '\0')) {
      dVar14 = (double)(~-(ulong)(param_1 == 0.0) & (ulong)param_1 |
                       DAT_1007106d0 & -(ulong)(param_1 == 0.0));
      if ((dVar14 <= 0.0) ||
         (dVar14 = (double)*(float *)(param_2 + 0x1460) * dVar14 * _DAT_100708b48,
         uVar7 = (ulong)dVar14, uVar7 = (long)(dVar14 - DAT_10070e4c0) & (long)uVar7 >> 0x3f | uVar7
         , bVar11 = uVar7 <= local_238, local_238 = local_238 - uVar7, bVar11)) {
        uVar7 = *(ulong *)(param_2 + 0x14a0);
        if (local_238 <= uVar7) goto LAB_100553cfc;
      }
      else {
        uVar7 = *(ulong *)(param_2 + 0x14a0);
LAB_100553cfc:
        local_238 = 0;
      }
      iVar4 = local_25c;
      if (local_238 < uVar6) {
        local_270 = local_238 - uVar7;
        iVar4 = FUN_10054e38c(*(undefined8 *)(param_2 + 0x808));
        uVar2 = local_24a;
        if (iVar4 == -1) goto LAB_100553998;
      }
    }
    else {
      iVar4 = local_25c;
    }
    *(ulong *)(param_2 + 0x1488) = local_270;
    uVar10 = *(ulong *)(param_2 + 0x14a0);
    lVar9 = local_270 - uVar10;
    if (local_270 < uVar10) {
      lVar9 = 0;
    }
    *(long *)(param_2 + 0x1490) = lVar9;
    *(undefined8 *)(param_2 + 0x1030) = 0;
    *(int *)(param_2 + 0x1478) = iVar4;
    *(undefined4 *)(param_2 + 0x147c) = 0;
    if (local_270 == 0) {
      *(int *)(param_2 + 0x1480) = (int)uVar10 + *(int *)(param_2 + 0x14d0);
    }
    auVar13._8_4_ = (int)((ulong)lVar9 >> 0x20);
    auVar13._0_8_ = lVar9;
    auVar13._12_4_ = DAT_10070d3c0._4_4_;
    dVar14 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar9) - _DAT_10070d3d0) +
             (auVar13._8_8_ - _UNK_10070d3d8);
    *param_4 = (int)(long)(dVar14 / (double)*(float *)(param_2 + 0x1460));
    *param_5 = dVar14;
    if ((*(int *)(param_2 + 0x48) == 0x53485244) || (*(int *)(param_2 + 0x48) == 0x48545450)) {
      local_280 = 0;
      uVar5 = FUN_1005da92d(param_2 + 0x7f8,iVar4,&local_268,local_28c);
      uVar10 = (ulong)uVar5;
      uVar2 = local_24a;
      if (uVar5 == 0xffffff80) goto LAB_100553998;
      if (uVar5 == 0) {
        if ((local_274 != 0 && *(long *)(param_2 + 0x6410) != 0) &&
           (*(char *)(param_2 + 0x64aa) == '\x01')) {
          cVar3 = FUN_1005dcade(*(long *)(param_2 + 0x6410),local_274,&local_280);
          if ((cVar3 != '\0') && (local_280 < local_268)) {
            local_268 = local_280;
          }
        }
        uVar10 = local_238;
        if (*(long **)(param_2 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(param_2 + 0x38) + 0x1d0))();
          uVar10 = local_238;
        }
        uVar8 = local_288;
        local_238._4_4_ = (undefined4)(uVar10 >> 0x20);
        local_238._0_4_ = (uint)uVar10;
        local_238._0_4_ = (uint)local_238 & 0xffffff00;
        FUN_1001ceb24(local_288,0x6370726d,0,0xffffffffffffffff,0);
        uVar5 = FUN_1005491ba(param_2,*(undefined4 *)(param_2 + 0x48),param_2 + 0x4c,
                              param_2 + 0x103c,(ulong)*(uint *)(param_2 + 0x86c) / 1000,&local_238,
                              local_268,uVar8);
        uVar10 = (ulong)uVar5;
        FUN_1001ceb24(uVar8,0x6470726d,0,0xffffffffffffffff,0);
        uVar2 = local_24a;
        if (uVar5 == 0xffffff80) goto LAB_100553998;
        if (uVar5 == 0) {
          *(ulong *)(param_2 + 0x1030) = local_268;
          goto LAB_100553ba1;
        }
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        uVar2 = local_24a;
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        uVar2 = local_24a;
      }
      local_24a = uVar5;
      if (cVar3 != '\0') {
        local_24c = 0x400;
        local_254 = "Assertion failure";
        local_258 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        uVar2 = local_24a;
      }
    }
    else {
LAB_100553ba1:
      plVar1 = *(long **)(param_2 + 0xf60);
      uVar10 = 0;
      uVar2 = local_24a;
      if ((plVar1 != (long *)0x0) && (uVar10 = 0, *(int *)(param_2 + 0x850) == 0x6d703461)) {
        (**(code **)(*plVar1 + 0x48))(plVar1,param_2 + 0xa60);
        *(undefined4 *)(param_2 + 0x14d0) = 0;
        uVar2 = local_24a;
      }
    }
    goto LAB_100553998;
  }
  uVar10 = 0xffffffce;
  uVar2 = local_24a;
LAB_100553998:
  local_24a = uVar2;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

