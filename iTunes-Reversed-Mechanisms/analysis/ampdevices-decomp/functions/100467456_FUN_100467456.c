// name: FUN_100467456
// address: 100467456

undefined8 FUN_100467456(undefined8 param_1,long param_2,ulong *param_3,long *param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(param_2 + 0x9c);
  uVar9 = (ulong)uVar1;
  uVar6 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (uVar9 != 0) {
    FUN_10031c15f(param_2);
    lVar3 = FUN_1001c6429(uVar9 * 0x28);
    if (lVar3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        local_4c = 0x822;
        local_4a = "entries != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10031c15f(param_2);
    }
    else {
      lVar4 = FUN_1001c63e1(uVar9 * 8);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_1002f930c(param_2);
        uVar8 = 0;
        while (puVar5 != (undefined8 *)0x0) {
          *(undefined8 **)(lVar4 + uVar8 * 8) = puVar5;
          *(undefined8 *)(lVar3 + uVar8 * 0x28) = *puVar5;
          puVar5 = (undefined8 *)FUN_1002f9451(puVar5);
          uVar8 = (ulong)((uint)uVar8 + 1);
        }
        if ((uint)uVar8 != uVar1) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            local_4c = 0x822;
            local_4a = "index == numTracks";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1003071cd(param_2);
        local_58 = 0x4e;
        uStack_54 = 2;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar1);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 8 + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 0x50;
        uStack_54 = 4;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar9);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0xc + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 0x4f;
        uStack_54 = 3;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar1);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0x10 + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 8;
        uStack_54 = 0;
        FUN_10046790a(lVar4,uVar1);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0x14 + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 0x52;
        uStack_54 = 0x12;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar1);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0x18 + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 0xc3;
        uStack_54 = 0xc2;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar9);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0x1c + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        local_58 = 0x53;
        uStack_54 = 0x3e;
        local_50 = 0;
        FUN_10046790a(lVar4,uVar1);
        lVar7 = FUN_1002f930c(param_2);
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(lVar3 + 0x20 + uVar8 * 0x28) = *(undefined4 *)(lVar7 + 0xc);
            lVar7 = FUN_1002f9451(lVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (lVar7 != 0);
        }
        *param_3 = uVar9;
        *param_4 = lVar3;
        FUN_10031c15f(param_2);
        FUN_100307383(param_2);
        FUN_1001c64c1(lVar4);
        uVar6 = 0;
        goto LAB_1004677f8;
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        local_4c = 0x822;
        local_4a = "tracks != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10031c15f(param_2);
      FUN_1001c64c1(lVar3);
    }
    uVar6 = 0xffffff94;
  }
LAB_1004677f8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

