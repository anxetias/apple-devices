// name: FUN_1001b1a89
// address: 1001b1a89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001b1a89(long param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar8 [16];
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006a025f(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,1);
    iVar3 = -0x32;
    goto LAB_1001b1ccd;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  pvVar4 = operator_new(0x110,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 == (void *)0x0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006a01e9(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
    goto LAB_1001b1ccd;
  }
  FUN_10028593a(local_68,param_1);
  FUN_1001b0116(pvVar4,local_68,param_2);
  if (local_48 == local_68) {
    lVar5 = 0x20;
LAB_1001b1bb6:
    (**(code **)(*local_48 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1001b1bb6;
  }
  iVar3 = FUN_1001b0254(pvVar4);
  if (iVar3 == 0) {
    FUN_1001e9de0(&DAT_1008c5200);
    iVar3 = DAT_1008c5248;
    auVar8._8_8_ = extraout_XMM1_Qb;
    auVar8._0_8_ = extraout_XMM1_Qa;
    iVar1 = DAT_1008c5248 + 1;
    *(int *)((long)pvVar4 + 0x18) = DAT_1008c5248;
    DAT_1008c5248 = iVar1;
    if (iVar3 == 0) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        FUN_1006a0173(uVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      auVar8._8_8_ = extraout_XMM1_Qb_00;
      auVar8._0_8_ = extraout_XMM1_Qa_00;
    }
    if (param_4 == '\0') {
      uVar7 = (ulong)*(uint *)((long)pvVar4 + 0x58);
      auVar8 = pmovsxbd(auVar8,_DAT_1007115d0);
      (&DAT_1008c5278)[uVar7 * 5] =
           CONCAT44(*(int *)((long)pvVar4 + 0x20) +
                    (int)((ulong)(&DAT_1008c5278)[uVar7 * 5] >> 0x20),
                    auVar8._0_4_ + (int)(&DAT_1008c5278)[uVar7 * 5]);
      FUN_1001b0678(&DAT_1008c5260 + uVar7 * 0x28,pvVar4);
      *(undefined4 *)((long)pvVar4 + 0x1c) = 1;
    }
    else {
      FUN_1001b0458(pvVar4,0);
      *(undefined8 *)((long)pvVar4 + 0x48) = 0xbff0000000000000;
    }
    FUN_1001e9eb9(&DAT_1008c5200);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)((long)pvVar4 + 0x18);
    }
    LOCK();
    _DAT_1008c5358 = _DAT_1008c5358 + 1;
    UNLOCK();
    iVar3 = 0;
    if (param_4 == '\0') {
      FUN_1001b176b();
    }
  }
  else {
    FUN_1001b01f4(pvVar4);
    operator_delete(pvVar4);
  }
LAB_1001b1ccd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

