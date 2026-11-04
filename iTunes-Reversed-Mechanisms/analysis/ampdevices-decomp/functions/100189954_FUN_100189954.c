// name: FUN_100189954
// address: 100189954

int FUN_100189954(double param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  char local_4b8 [80];
  double local_468;
  undefined8 uStack_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
     ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10068f327(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    local_468 = param_1;
    uStack_460 = in_XMM0_Qb;
    if ((param_1 == 0.0) && (!NAN(param_1))) {
      iVar2 = FUN_1001892ae(param_2,0);
      if (iVar2 != -0x2f) goto LAB_100189b28;
    }
    iVar3 = FUN_10017d406(param_2,0,local_4b8,0);
    iVar2 = -0x516;
    if ((iVar3 == 0) && (local_4b8[0] == '\0')) {
      _memcpy(local_458,param_2,0x420);
      iVar3 = FUN_10018cac7(param_2,0x74656d70,local_458);
      iVar2 = -0x2f;
      if (iVar3 == 0) {
        pvVar4 = (void *)FUN_1001c6429(0x448);
        if (pvVar4 == (void *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_10068f2b1(uVar5);
          }
          FUN_1001782e9(0,0);
        }
        else {
          _memcpy(pvVar4,local_458,0x420);
          *(undefined8 *)((long)pvVar4 + 0x438) = param_3;
          *(undefined8 *)((long)pvVar4 + 0x440) = param_4;
          local_468 = (double)(~-(ulong)(local_468 == 0.0) & (ulong)local_468 |
                              DAT_10070d3a0 & -(ulong)(local_468 == 0.0));
          uStack_460 = 0;
          FUN_1001c0fbe(FUN_100189b9a,pvVar4,0,0,(long)pvVar4 + 0x430);
          iVar3 = FUN_1001ee941(local_468,DAT_10070e580,0,0,FUN_100189c59,pvVar4,
                                (undefined8 *)((long)pvVar4 + 0x428));
          if (iVar3 == 0) {
            if (param_5 != (undefined8 *)0x0) {
              *param_5 = *(undefined8 *)((long)pvVar4 + 0x428);
            }
            iVar2 = 0;
          }
          else {
            FUN_1001c64c1(pvVar4);
          }
        }
      }
    }
  }
LAB_100189b28:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

