// name: FUN_100438965
// address: 100438965

undefined8 FUN_100438965(long param_1,int *param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  bool bVar11;
  long local_c8;
  undefined8 ***local_c0;
  undefined8 ***local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  int *local_98;
  char local_89;
  undefined **local_88;
  char *local_80;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = 0;
  local_c0 = &local_b8;
  local_b8 = (undefined8 ****)0x0;
  lStack_b0 = 0;
  local_a0 = param_1;
  local_98 = param_2;
  local_a8 = FUN_1004e0c3f(param_1,1);
  FUN_10031c15f(local_a8);
  if ((((local_98 != (int *)0x0) && (*local_98 == 0x4f4c5354)) && (local_98[1] != 0)) &&
     (iVar3 = (int)((ulong)(*(long *)(local_98 + 4) - *(long *)(local_98 + 2)) >> 3) * -0x49249249,
     iVar3 != 0)) {
    iVar9 = 0;
    do {
      lVar4 = FUN_1005968ea(local_98,iVar9,0);
      if (lVar4 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (*(long *)(lVar4 + 0x10) == local_a8) {
        pppuVar1 = *(undefined8 ****)(lVar4 + 0x40);
        if (pppuVar1 == (undefined8 ***)0x0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "artistInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          ppppuVar8 = &local_b8;
          ppppuVar5 = (undefined8 ****)local_b8;
          while (ppppuVar10 = ppppuVar8, ppppuVar5 != (undefined8 ****)0x0) {
            while (ppppuVar8 = ppppuVar5, ppppuVar8[4] <= pppuVar1) {
              if (pppuVar1 <= ppppuVar8[4]) goto LAB_100438b39;
              ppppuVar5 = (undefined8 ****)ppppuVar8[1];
              if ((undefined8 ****)ppppuVar8[1] == (undefined8 ****)0x0) {
                ppppuVar10 = ppppuVar8 + 1;
                goto LAB_100438aef;
              }
            }
            ppppuVar5 = (undefined8 ****)*ppppuVar8;
          }
LAB_100438aef:
          pppuVar6 = operator_new(0x28);
          pppuVar6[4] = pppuVar1;
          *pppuVar6 = (undefined8 **)0x0;
          pppuVar6[1] = (undefined8 **)0x0;
          pppuVar6[2] = ppppuVar8;
          *ppppuVar10 = pppuVar6;
          if ((undefined8 ****)*local_c0 != (undefined8 ****)0x0) {
            pppuVar6 = *ppppuVar10;
            local_c0 = (undefined8 ***)*local_c0;
          }
          FUN_1001ad344(local_b8,pppuVar6);
          lStack_b0 = lStack_b0 + 1;
LAB_100438b39:
          *(undefined4 *)(lVar4 + 0xc) = 1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  if ((undefined8 ****)local_c0 != &local_b8) {
    ppppuVar8 = (undefined8 ****)local_c0;
    do {
      pppuVar1 = ppppuVar8[4];
      local_89 = '\x01';
      local_88 = &PTR_FUN_100858fa0;
      local_80 = &local_89;
      local_68 = &local_88;
      FUN_1005e405e(pppuVar1,1,&local_88);
      if (local_68 == &local_88) {
        lVar4 = 0x20;
LAB_100438c5b:
        (**(code **)((long)*local_68 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_68 != (undefined ***)0x0) goto LAB_100438c5b;
      }
      if (((local_89 == '\x01') &&
          (iVar3 = FUN_100437b57(local_a0,pppuVar1,param_3,&local_c8), iVar3 != -0x80)) &&
         (iVar3 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      ppppuVar5 = (undefined8 ****)ppppuVar8[1];
      ppppuVar10 = ppppuVar8;
      if ((undefined8 ****)ppppuVar8[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar8 = (undefined8 ****)ppppuVar10[2];
          bVar11 = (undefined8 ****)*ppppuVar8 != ppppuVar10;
          ppppuVar10 = ppppuVar8;
        } while (bVar11);
      }
      else {
        do {
          ppppuVar8 = ppppuVar5;
          ppppuVar5 = (undefined8 ****)*ppppuVar8;
        } while ((undefined8 ****)*ppppuVar8 != (undefined8 ****)0x0);
      }
    } while (ppppuVar8 != &local_b8);
  }
  FUN_100438e75(local_a0,local_98,param_3,&local_c8);
  FUN_10031c15f(local_a8);
  if (local_c8 != 0) {
    iVar3 = FUN_1004ef324(local_a0,local_c8,0);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(local_a0 + 0x28),0,0);
  }
  FUN_100230408(local_b8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

