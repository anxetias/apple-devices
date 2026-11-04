// name: FUN_1003c435e
// address: 1003c435e

int FUN_1003c435e(long *param_1,long param_2,byte *param_3,uint *param_4,undefined4 *param_5)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 local_2d8 [24];
  long local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  long local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  long local_288;
  undefined8 local_280;
  long local_278;
  uint *local_270;
  long local_268;
  undefined8 local_260;
  undefined1 local_258 [512];
  undefined4 local_58;
  undefined8 uStack_54;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_278 = param_2;
  local_270 = param_4;
  FUN_1001c62d9(local_2d8,0x40);
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x12) = 0;
  *param_5 = 0xffffffce;
  FUN_1001c62d9(param_5 + 0x14,0x420);
  if ((*param_3 & 2) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0x988d;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003c43f5;
  }
  cVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar4 == '\x12') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0x9786;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x2355;
    goto LAB_1003c4437;
  }
  if (*(long *)(param_3 + 0x18) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0x98ce;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3[0x20] != 0) {
      if (local_278 == 0) {
        local_268 = 0;
        iVar5 = FUN_1001ed0ff(&local_268,0,"");
        if (iVar5 == -0x80) goto LAB_1003c4437;
        if (iVar5 != 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = "Assertion failure";
            uStack_4c = 0x400;
            uStack_4a = (undefined2)iVar5;
            uStack_48 = (undefined2)((uint)iVar5 >> 0x10);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_1003c4437;
        }
      }
      else {
        local_268 = local_278;
      }
      uVar11 = 60000;
      if (60000 < *local_270) {
        uVar11 = *local_270;
      }
      lVar7 = FUN_1005dfe52(local_270[1],uVar11,*(int *)(param_3 + 0x60) * 1000,param_3[100]);
      uVar6 = 0x1912;
      if (param_3[0x65] == 0) {
        lVar7 = lVar7 + 1000000;
        local_2c0 = FUN_1001c63e1(lVar7);
        local_2b0 = 0;
        uVar6 = 0x9982;
        local_2b8 = lVar7;
        if (local_2c0 != 0) goto LAB_1003c4504;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = "Assertion failure";
          uStack_4c = 0x822;
          uStack_4a = 0x9915;
          uStack_48 = 0x7c;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar5 = -0x6c;
LAB_1003c48b6:
        if (local_2c0 != 0 && iVar5 != 0) {
          FUN_1001c64c1();
        }
      }
      else {
LAB_1003c4504:
        local_288 = local_268;
        local_280 = *(undefined8 *)(param_3 + 0x18);
        FUN_1002c3cd0(&local_58);
        uStack_28c = CONCAT22(uStack_4a,uStack_4c);
        local_298 = local_58;
        uStack_294 = (undefined4)uStack_54;
        uStack_290 = uStack_54._4_4_;
        pbVar10 = (byte *)0x0;
        pbVar8 = param_3 + 0x488;
        pbVar2 = param_3 + 0x68;
        if (param_3[0x65] == 0) {
          pbVar8 = pbVar10;
          pbVar2 = pbVar10;
        }
        pbVar9 = (byte *)(param_5 + 0x14);
        if (param_3[0x65] == 0) {
          pbVar9 = pbVar10;
        }
        iVar5 = FUN_1003bf26c(local_288,local_280,param_3 + 0x20,0,&local_298,uVar6,pbVar2,pbVar8,
                              *(undefined8 *)(param_3 + 8),pbVar9,local_258,local_2d8,local_270);
        plVar3 = (long *)CONCAT44(uStack_28c,uStack_290);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar5 == -0x80) goto LAB_1003c48b6;
        if (iVar5 != 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = "Assertion failure";
            uStack_4c = 0x400;
            uStack_4a = (undefined2)iVar5;
            uStack_48 = (undefined2)((uint)iVar5 >> 0x10);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_1003c48b6;
        }
        if (param_3[0x65] == 0) {
          *(long *)(param_5 + 0x10) = local_2c0;
          *(undefined8 *)(param_5 + 0x12) = local_2b0;
        }
        *param_5 = 0;
        *(long *)(param_5 + 2) = local_2a8;
        *(long *)(param_5 + 4) = local_2a8 + local_2a0;
        iVar5 = 0;
        if (((*param_3 & 4) != 0) && (param_3[0x10] != 0)) {
          FUN_100179732(param_3[0x10],&local_260);
          FUN_10017983e(local_260,local_2a8 + *(long *)(param_5 + 0x10),local_2a0);
          FUN_1001799f1(local_260,param_5 + 6);
          FUN_100179a7b(local_260);
        }
      }
      if (local_268 != local_278 && local_268 != 0) {
        FUN_1001ed1fc();
      }
      goto LAB_1003c4437;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = "Assertion failure";
      uStack_4c = 0x822;
      uStack_4a = 0x98f1;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_1003c43f5:
  iVar5 = -0x32;
LAB_1003c4437:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

