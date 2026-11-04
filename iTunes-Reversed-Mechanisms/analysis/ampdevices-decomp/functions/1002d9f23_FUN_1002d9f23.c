// name: FUN_1002d9f23
// address: 1002d9f23

undefined8 FUN_1002d9f23(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long local_af8;
  undefined4 local_aec;
  undefined4 local_ae8;
  char *local_ae4;
  undefined2 local_adc;
  int local_ada;
  undefined1 local_ad0 [80];
  undefined1 local_a80 [1056];
  undefined1 local_660 [1576];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 1;
  if (param_2 < 2) goto LAB_1002da0b4;
  lVar4 = *(long *)(param_1 + 0x15798);
  if (lVar4 == 0) {
    local_af8 = 0;
    local_aec = 0;
    FUN_1001c62d9(local_ad0,0xa98);
    if (*(char *)(param_1 + 0x336) == '\0') {
      iVar1 = local_ada;
      if (*(char *)(param_1 + 0x335) != '\0') {
        pcVar7 = "iEKInfo";
        goto LAB_1002d9fea;
      }
    }
    else {
      pcVar7 = "IC-Info.sidb";
LAB_1002d9fea:
      FUN_1001e04f5(pcVar7,local_660);
      _memcpy(local_a80,(void *)(param_1 + 0x75e0),0x420);
      iVar3 = FUN_1002d8b65(local_ad0,&local_af8,&local_aec);
      iVar1 = local_ada;
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          if (local_af8 != 0) {
            iVar3 = FUN_1002db96b(param_1,0,local_af8,local_aec,(long *)(param_1 + 0x15798),
                                  param_1 + 0x157a0);
            FUN_1000bfd00(local_af8);
            iVar1 = local_ada;
            if (iVar3 == -0x80) goto LAB_1002da0b1;
            if (iVar3 != 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              iVar1 = local_ada;
              goto joined_r0x0001002da0af;
            }
          }
          lVar4 = *(long *)(param_1 + 0x15798);
          iVar1 = local_ada;
          if (lVar4 != 0) goto LAB_1002d9f67;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          iVar1 = local_ada;
joined_r0x0001002da0af:
          local_ada = iVar3;
          if (cVar2 != '\0') {
            local_adc = 0x400;
            local_ae4 = "Assertion failure";
            local_ae8 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_ae8,0x12);
            iVar1 = local_ada;
          }
        }
      }
    }
  }
  else {
LAB_1002d9f67:
    iVar1 = local_ada;
    if ((ulong)*(uint *)(param_1 + 0x157a0) != 0) {
      lVar6 = 0;
      do {
        if ((*(ulong *)(lVar4 + lVar6) == param_2) && (*(long *)(lVar4 + 8 + lVar6) == param_3))
        goto LAB_1002da0b4;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)*(uint *)(param_1 + 0x157a0) << 4 != lVar6);
    }
  }
LAB_1002da0b1:
  local_ada = iVar1;
  uVar5 = 0;
LAB_1002da0b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

