// name: FUN_10055423c
// address: 10055423c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10055423c(long param_1,uint param_2,undefined4 *param_3,double *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar9;
  undefined1 auVar8 [16];
  ulong local_68;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1005542fb:
    iVar2 = -0x32;
  }
  else if (param_2 == 0xffffffff) {
    iVar2 = FUN_1005da92d(param_1 + 0x7f8,*(int *)(param_1 + 0x1474) + -1,param_5,local_5c);
    if (iVar2 != -0x80) {
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_100554541:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_5c[1] = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
        }
        goto LAB_100554554;
      }
      *param_5 = *param_5 + (ulong)local_5c[0];
      local_68 = *(ulong *)(param_1 + 0x1498);
LAB_1005543f7:
      auVar7._8_4_ = (int)(local_68 >> 0x20);
      auVar7._0_8_ = local_68;
      auVar7._12_4_ = DAT_10070d3c0._4_4_;
      dVar6 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_68) - _DAT_10070d3d0;
      dVar9 = auVar7._8_8_ - _UNK_10070d3d8;
      *param_3 = (int)(long)((float)local_68 / *(float *)(param_1 + 0x1460));
      *param_4 = dVar6 + dVar9;
LAB_10055455d:
      iVar2 = 0;
      goto LAB_10055430e;
    }
  }
  else if (param_2 == 0) {
    iVar2 = FUN_1005da92d(param_1 + 0x7f8,0,param_5,local_5c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 0;
        FUN_10054e38c(*(undefined8 *)(param_1 + 0x808),0,&local_68);
        *param_3 = (int)(long)((float)local_68 / *(float *)(param_1 + 0x1460));
        auVar8._8_4_ = (int)(local_68 >> 0x20);
        auVar8._0_8_ = local_68;
        auVar8._12_4_ = DAT_10070d3c0._4_4_;
        *param_4 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_68) - _DAT_10070d3d0) +
                   (auVar8._8_8_ - _UNK_10070d3d8);
        goto LAB_10055430e;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_100554541;
      }
LAB_100554554:
      if (iVar2 == 0) goto LAB_10055455d;
    }
  }
  else {
    fVar5 = (float)param_2 * *(float *)(param_1 + 0x1460);
    uVar3 = (ulong)fVar5;
    uVar3 = (long)(fVar5 - _DAT_10070844c) & (long)uVar3 >> 0x3f | uVar3;
    if (*(ulong *)(param_1 + 0x14b0) < uVar3) {
      uVar3 = *(ulong *)(param_1 + 0x14b0);
    }
    iVar2 = FUN_10054e38c(*(undefined8 *)(param_1 + 0x808),uVar3,&local_68);
    if (iVar2 == -1) goto LAB_1005542fb;
    iVar2 = FUN_1005da92d(param_1 + 0x7f8,iVar2,param_5,local_5c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_1005543f7;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_100554541;
      }
      goto LAB_100554554;
    }
  }
  *param_3 = 0;
  *param_5 = -1;
LAB_10055430e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

