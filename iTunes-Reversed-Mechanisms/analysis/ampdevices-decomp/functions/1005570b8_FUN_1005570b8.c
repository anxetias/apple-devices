// name: FUN_1005570b8
// address: 1005570b8

int FUN_1005570b8(long param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  undefined1 local_70 [12];
  undefined1 local_64 [4];
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = -0x32;
  if ((*(int *)(param_1 + 0x850) != 0x6d703461) || (*(char *)(param_1 + 0x891) != '\x02'))
  goto LAB_10055729e;
  iVar2 = -0x27;
  if (*(uint *)(param_1 + 0x1474) <= param_2) goto LAB_10055729e;
  iVar2 = -0x32;
  if (*(int *)(param_1 + 0x860) == 0) goto LAB_10055729e;
  lVar3 = FUN_1001c63e1((ulong)(uint)(*(int *)(param_1 + 0x860) * *(int *)(param_1 + 0x868)) << 2);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sampleBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_10055729e;
  }
  *(uint *)(param_1 + 0x1478) = param_2;
  local_60 = lVar3;
  iVar2 = FUN_100554602(param_1,lVar3,local_64,local_70,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = (**(code **)(**(long **)(param_1 + 0xf60) + 0x38))();
      lVar4 = (**(code **)(**(long **)(param_1 + 0xf60) + 0x40))();
      uVar7 = *(int *)(lVar4 + 0x5c0) + *(int *)(lVar4 + 0x5bc) + *(int *)(lVar4 + 0x5c4);
      if (uVar7 != 0) {
        uVar6 = (ulong)*(uint *)(lVar4 + 0x5c8);
        bVar9 = true;
        if ((uVar6 != 0) && (*(char *)(lVar4 + 4 + uVar6 * 0x78) == '\0')) {
          uVar8 = 0;
          do {
            if ((ulong)uVar7 - 1 == uVar8) goto LAB_100557227;
            uVar6 = (ulong)*(uint *)(lVar4 + 0x5cc + uVar8 * 4);
            uVar8 = uVar8 + 1;
          } while ((uVar6 != 0) && (*(char *)(lVar4 + 4 + uVar6 * 0x78) == '\0'));
          bVar9 = uVar8 < uVar7;
        }
        *param_3 = *(undefined1 *)(lVar3 + 0x19338 + uVar6 * 4);
        *param_4 = *(undefined1 *)(lVar3 + 0x19368 + uVar6 * 4);
        if ((bVar9) && (iVar2 = 0, *(long *)(lVar3 + 3000 + uVar6 * 0x20a0) != 0))
        goto LAB_100557295;
      }
LAB_100557227:
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(ics != nullptr) && (icsInfo != nullptr)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar2 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100557295:
  FUN_1001c64c1(local_60);
LAB_10055729e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

