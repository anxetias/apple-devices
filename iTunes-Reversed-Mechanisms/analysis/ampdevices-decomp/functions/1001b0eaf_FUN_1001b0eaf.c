// name: FUN_1001b0eaf
// address: 1001b0eaf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b0eaf(double param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  double dVar13;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined8 extraout_XMM1_Qb_00;
  double local_88;
  int local_6c;
  undefined1 local_68 [12];
  undefined2 local_5c;
  char *local_5a;
  long *local_48;
  long local_38;
  undefined1 auVar15 [16];
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c5258 == 0) {
    uVar8 = FUN_1001cc310();
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      FUN_10069fe38(uVar8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    FUN_1001782e9(0,0);
  }
  lVar2 = DAT_1008c5258;
  puVar1 = PTR__objc_release_10082c7b0;
  local_6c = 0;
  do {
    if ((param_1 == DAT_100701af0) && (!NAN(param_1) && !NAN(DAT_100701af0))) {
      param_1 = (double)FUN_1001ebd46();
    }
    dVar13 = *(double *)(lVar2 + 0x28) - (param_1 - *(double *)(lVar2 + 0x40));
    *(double *)(lVar2 + 0x28) = dVar13;
    if (dVar13 <= 0.0) {
      *(undefined4 *)(lVar2 + 0x58) = 0;
    }
    if (DAT_1008c52b8 != (undefined8 *)0x0) {
      local_88 = param_1 + _DAT_1007115c8;
      bVar11 = false;
      puVar12 = DAT_1008c52b8;
      do {
        if (*(char *)((long)puVar12 + 0x5c) == '\x01') {
          if (*(int *)(puVar12 + 3) == DAT_1008c524c) goto LAB_1001b1011;
          puVar12[5] = 0;
          uVar7 = 1;
          uVar5 = 1;
          if ((double)puVar12[9] <= DAT_1008c52d0) {
LAB_1001b1017:
            uVar7 = uVar5;
            DAT_1008c52d0 = -1.0;
          }
          *(undefined1 *)((long)puVar12 + 0x5c) = 0;
          puVar12[9] = 0;
          *(undefined4 *)(puVar12 + 0xb) = uVar7;
          FUN_1001b0756(*puVar12,puVar12);
          auVar14._8_8_ = extraout_XMM1_Qb;
          auVar14._0_8_ = extraout_XMM1_Qa;
          uVar9 = (ulong)*(uint *)(puVar12 + 0xb);
          auVar14 = pmovsxbd(auVar14,_DAT_1007115d0);
          (&DAT_1008c5278)[uVar9 * 5] =
               CONCAT44(*(int *)(puVar12 + 4) + (int)((ulong)(&DAT_1008c5278)[uVar9 * 5] >> 0x20),
                        auVar14._0_4_ + (int)(&DAT_1008c5278)[uVar9 * 5]);
          FUN_1001b0678(&DAT_1008c5260 + uVar9 * 0x28,puVar12);
          *(undefined4 *)((long)puVar12 + 0x1c) = 1;
          puVar12 = &DAT_1008c52b8;
        }
        else {
          dVar13 = (double)puVar12[9];
          if ((dVar13 != DAT_100700af8) || (NAN(dVar13) || NAN(DAT_100700af8))) {
            uVar5 = 0;
            if (dVar13 <= param_1) goto LAB_1001b1017;
            local_88 = (double)(~-(ulong)(dVar13 <= local_88) & (ulong)local_88 |
                               (ulong)dVar13 & -(ulong)(dVar13 <= local_88));
            bVar11 = true;
          }
LAB_1001b1011:
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)0x0);
      if (bVar11) {
        DAT_1008c52d0 = local_88;
      }
    }
    DAT_1008c52c8 = 0;
    lVar10 = FUN_1001b0510();
    FUN_1001b0609(lVar10);
    FUN_1001e9eb9(&DAT_1008c5200);
    if (lVar2 != lVar10) {
      if (*(int *)(lVar10 + 0x18) != local_6c) {
        *(double *)(lVar10 + 0x40) = param_1;
      }
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *(undefined4 *)(lVar10 + 0x108) = 0;
      FUN_1001b2ad0(lVar2,lVar10);
    }
    FUN_1001e9de0(&DAT_1008c5200);
    if (DAT_1008c5258 == 0) {
      uVar8 = FUN_1001cc310();
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_8_ = "Assertion failure";
        local_5c = 0x822;
        local_5a = "sScheduler.runningFiber != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_68,0x16);
      }
      (*(code *)puVar1)(uVar8);
      FUN_1001782e9(0,0);
    }
    while (puVar12 = DAT_1008c52f0, DAT_1008c52f0 != (undefined8 *)0x0) {
      if (DAT_1008c52f0[1] == DAT_1008c5258) {
        uVar8 = FUN_1001cc310();
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_8_ = "Assertion failure";
          local_5c = 0x822;
          local_5a = "deadFiber->mNext != sScheduler.runningFiber";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_68,0x16);
        }
        (*(code *)puVar1)(uVar8);
        FUN_1001782e9(0,0);
      }
      if (*(int *)((long)puVar12 + 0x1c) == 2) {
        uVar8 = FUN_1001cc310();
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_8_ = "Assertion failure";
          local_5c = 0x822;
          local_5a = "deadFiber->mState != kFiberState_Running";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_68,0x16);
        }
        (*(code *)puVar1)(uVar8);
        FUN_1001782e9(0,0);
      }
      FUN_1001b0756(*puVar12,puVar12);
      FUN_1001b01f4(puVar12);
      operator_delete(puVar12);
    }
    if ((DAT_1008c5250 != DAT_1008c5258) || (DAT_1008c5320 == (long *)0x0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
    local_48 = (long *)0x0;
    FUN_1001c128c(local_68,&DAT_1008c5300);
    iVar4 = DAT_1008c5330;
    plVar3 = DAT_1008c5320;
    local_6c = DAT_1008c5330;
    DAT_1008c5320 = (long *)0x0;
    if (plVar3 == (long *)&DAT_1008c5300) {
      lVar10 = 0x20;
LAB_1001b1306:
      (**(code **)(*plVar3 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (plVar3 != (long *)0x0) goto LAB_1001b1306;
    }
    DAT_1008c5330 = 0;
    FUN_1001e9eb9(&DAT_1008c5200);
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*local_48 + 0x30))();
    FUN_1001e9de0(&DAT_1008c5200);
    lVar10 = DAT_1008c5258;
    auVar15._8_8_ = extraout_XMM1_Qb_00;
    auVar15._0_8_ = extraout_XMM1_Qa_00;
    uVar9 = (ulong)*(uint *)(DAT_1008c5258 + 0x58);
    auVar14 = pmovsxbd(auVar15,_DAT_1007115d0);
    (&DAT_1008c5278)[uVar9 * 5] =
         CONCAT44(*(int *)(DAT_1008c5258 + 0x20) + (int)((ulong)(&DAT_1008c5278)[uVar9 * 5] >> 0x20)
                  ,auVar14._0_4_ + (int)(&DAT_1008c5278)[uVar9 * 5]);
    FUN_1001b0678(&DAT_1008c5260 + uVar9 * 0x28,lVar10);
    *(undefined4 *)(lVar10 + 0x1c) = 1;
    DAT_1008c524c = iVar4;
    if (local_48 == (long *)local_68) {
      lVar10 = 0x20;
LAB_1001b13a9:
      (**(code **)(*local_48 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_1001b13a9;
    }
    param_1 = 0.0;
  } while( true );
}

