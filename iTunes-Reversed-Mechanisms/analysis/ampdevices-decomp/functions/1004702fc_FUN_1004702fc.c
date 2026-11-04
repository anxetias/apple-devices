// name: FUN_1004702fc
// address: 1004702fc

void FUN_1004702fc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  int local_c8;
  char *local_c4;
  undefined2 local_bc;
  char *local_ba;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar9 = *(long *)(param_1 + 0x10), lVar9 == 0)) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_c8 = 0x8220202;
      local_c4 = "Assertion failure";
      local_bc = 0x822;
      local_ba = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    lVar9 = 0;
    FUN_1001782e9(0,0);
    if (param_1 != 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) goto LAB_100470366;
      lVar9 = 0;
    }
  }
  else {
LAB_100470366:
    if (*(int *)(lVar9 + 0x80) == 0x74646174) goto LAB_1004703cb;
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_c8 = 0x8220202;
      local_c4 = "Assertion failure (expected to be true)";
      local_bc = 0x822;
      local_ba = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 != '\0') goto LAB_1004703cb;
  }
  uVar8 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar8,0x10);
  if (cVar5 != '\0') {
    local_c8 = 0x8220202;
    local_c4 = "Assertion failure";
    local_bc = 0x822;
    local_ba = "TrackDataIsValid(trackData)";
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1004703cb:
  plVar3 = *(long **)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((*(byte *)(lVar9 + 0x1bb3) & 0x20) == 0) {
    FUN_1001dcff5(lVar9 + 0x1c10,*(undefined4 *)(param_1 + 0xd8));
    lVar2 = lVar9 + 0x1cb0;
    FUN_1001dcff5(lVar2,*(undefined4 *)(param_1 + 0xdc));
    FUN_1001dcff5(lVar2,*(undefined4 *)(param_1 + 0xe0));
    FUN_1001dcff5(lVar9 + 0x1c60,*(undefined4 *)(param_1 + 0xe4));
    FUN_1001dcff5(lVar9 + 0x1d00,*(undefined4 *)(param_1 + 0xe8));
    FUN_1001dcff5(lVar9 + 0x1e40,*(undefined4 *)(param_1 + 0xf4));
    FUN_1001dcff5(lVar9 + 0x1e90,*(undefined4 *)(param_1 + 0xf8));
    FUN_1001dcff5(lVar9 + 0x1ee0,*(undefined4 *)(param_1 + 0xfc));
    FUN_1001dcff5(lVar9 + 0x1f30,*(undefined4 *)(param_1 + 0x100));
    FUN_1001dcff5(lVar9 + 0x1f80,*(undefined4 *)(param_1 + 0x104));
    uVar11 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xec) != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      iVar6 = FUN_1001dcd96(lVar4 + 0x1cb0,*(int *)(param_1 + 0xec),&local_c8);
      if ((iVar6 == 0) && (local_c8 < 2)) {
        FUN_100481d54(lVar4 + 0x2768,*(undefined4 *)(param_1 + 0xec));
      }
      uVar7 = *(undefined4 *)(param_1 + 0xec);
    }
    FUN_1001dcff5(lVar2,uVar7);
    if (*(int *)(param_1 + 0xf0) != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      iVar6 = FUN_1001dcd96(lVar2 + 0x1df0,*(int *)(param_1 + 0xf0),&local_c8);
      if ((iVar6 == 0) && (local_c8 < 2)) {
        FUN_100481d54(lVar2 + 0x2780,*(undefined4 *)(param_1 + 0xf0));
      }
      uVar11 = *(undefined4 *)(param_1 + 0xf0);
    }
    FUN_1001dcff5(lVar9 + 0x1df0,uVar11);
    uVar10 = 0;
    do {
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1002fa385(param_1,uVar10 & 0xffffffff,&local_c8);
      FUN_1001dcff5(local_80,*(undefined4 *)(param_1 + 0x1a8 + uVar10 * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 != 6);
    if ((**(byte **)(param_1 + 0x70) & 1) != 0) {
      FUN_1001dcff5(lVar9 + 0x1d50,*(undefined4 *)(*(byte **)(param_1 + 0x70) + 0x14));
      FUN_1001dcff5(lVar9 + 0x1da0,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x18));
      lVar2 = lVar9 + 0x2020;
      FUN_1001dcff5(lVar2,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20));
      FUN_1001dcff5(lVar2,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x24));
      FUN_1001dcff5(lVar2,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x28));
      FUN_1001dcff5(lVar9 + 0x2340,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x2c));
      FUN_1001dcff5(lVar9 + 0x1fd0,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x30));
      FUN_1001dcff5(lVar9 + 0x21b0,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x1c));
      FUN_1001c5aec(*(undefined8 *)(lVar9 + 0x1bd0),*(undefined8 *)(param_1 + 0x70));
    }
    if ((**(byte **)(param_1 + 0x78) & 1) != 0) {
      FUN_1001dcff5(lVar9 + 0x2160,*(undefined4 *)(*(byte **)(param_1 + 0x78) + 0x2c));
      FUN_1001dcff5(lVar9 + 0x2200,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x24));
      FUN_1001dcff5(lVar9 + 0x2160,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x30));
      FUN_1001dcff5(lVar9 + 0x20c0,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x34));
      iVar6 = *(int *)(*(long *)(param_1 + 0x78) + 0x28);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x10);
        iVar6 = FUN_1001dcd96(lVar2 + 0x2070,iVar6,&local_c8);
        if ((iVar6 == 0) && (local_c8 < 2)) {
          FUN_100481d54(lVar2 + 0x2798,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x28));
        }
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x28);
      }
      FUN_1001dcff5(lVar9 + 0x2070,uVar7);
      FUN_1001c5aec(*(undefined8 *)(lVar9 + 0x1be0),*(undefined8 *)(param_1 + 0x78));
    }
    if ((**(byte **)(param_1 + 0x80) & 1) != 0) {
      FUN_1001c5aec(*(undefined8 *)(lVar9 + 0x1bf8));
    }
    FUN_1002dffcc(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

