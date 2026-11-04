// name: FUN_1004c36b8
// address: 1004c36b8

ulong FUN_1004c36b8(long *param_1,uint *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2,0xa80);
  iVar5 = *(int *)((long)param_1 + 0x1c);
  if (((iVar5 == 0x44574e4c) || (iVar5 == 0x4d46494c)) || (iVar5 == 0x46494c45)) {
    (**(code **)(*param_1 + 0x310))(param_1,0);
    plVar1 = (long *)param_1[0xaa];
    uVar10 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),plVar1 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
    }
    if ((short)param_2[0x220] == 0) {
      (**(code **)(*param_1 + 0x2e0))(param_1,param_2 + 0x220);
    }
    goto LAB_1004c3965;
  }
  if ((char)(param_3 & 0xffffffff) == '\0') {
    uVar10 = 0;
    goto LAB_1004c3965;
  }
  lVar6 = (**(code **)(*param_1 + 0x248))(param_1);
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "trackInstance != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar10 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1004c3965;
  }
  if ((*(long *)(lVar6 + 8) == 0) || (*(long *)(*(long *)(lVar6 + 8) + 0x10) == 0)) {
    lVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(lVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "TrackInstanceIsValid(inTrackInstance)";
LAB_1004c39ee:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,lVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004c3915:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == (uint *)0x0) {
      lVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(lVar6,0x10);
      if (cVar3 != '\0') {
        local_3a = "outProtectedInfo != nullptr";
        goto LAB_1004c39ee;
      }
      goto LAB_1004c3915;
    }
    lVar2 = *(long *)(lVar6 + 0x10);
    uVar8 = *param_2;
    if (*(long *)(lVar2 + 8) != 0) {
      *(long *)(param_2 + 3) = *(long *)(lVar2 + 8);
      uVar8 = uVar8 | 1;
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      *(long *)(param_2 + 1) = *(long *)(lVar2 + 0x20);
      uVar8 = uVar8 | 1;
    }
    if (*(long *)(lVar2 + 0x10) != 0) {
      *(long *)(param_2 + 5) = *(long *)(lVar2 + 0x10);
      uVar8 = uVar8 | 2;
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      *(long *)(param_2 + 7) = *(long *)(lVar2 + 0x18);
      uVar8 = uVar8 | 4;
    }
    if (*(uint *)(lVar2 + 4) != 0) {
      param_2[10] = *(uint *)(lVar2 + 4);
      uVar8 = uVar8 | 0x10;
    }
    param_2[9] = *(uint *)(lVar2 + 0x84);
    uVar9 = uVar8 | 8;
    *param_2 = uVar9;
    if (*(long *)(lVar2 + 0x28) != 0) {
      *(long *)(param_2 + 0xb) = *(long *)(lVar2 + 0x28);
      uVar9 = uVar8 | 0x10008;
      *param_2 = uVar9;
    }
    if (*(long *)(lVar2 + 0x30) != 0) {
      *(long *)(param_2 + 0xd) = *(long *)(lVar2 + 0x30);
      uVar9 = uVar9 | 0x20000;
      *param_2 = uVar9;
    }
    if (*(long *)(lVar2 + 0x38) != 0) {
      *(long *)(param_2 + 0xf) = *(long *)(lVar2 + 0x38);
      uVar9 = uVar9 | 0x20;
      *param_2 = uVar9;
    }
    if (*(long *)(lVar2 + 0x58) != 0) {
      *(long *)(param_2 + 0x11) = *(long *)(lVar2 + 0x58);
      uVar9 = uVar9 | 0x40;
      *param_2 = uVar9;
    }
    if (*(long *)(lVar2 + 0x60) != 0) {
      *(long *)(param_2 + 0x13) = *(long *)(lVar2 + 0x60);
      *param_2 = uVar9 | 0x80;
    }
    cVar3 = FUN_10047eee6();
    if (cVar3 != '\0') {
      uVar4 = FUN_10047eee6(*(undefined8 *)(lVar6 + 8));
      *(undefined1 *)(param_2 + 0x15) = uVar4;
      *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 1;
    }
    cVar3 = FUN_1002b545d(lVar6,param_2 + 0x20,0);
    if (cVar3 != '\0') {
      *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 8;
    }
    cVar3 = FUN_1002b5a57(lVar6,param_2 + 0xa0,0);
    if (cVar3 != '\0') {
      *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 0x10;
    }
    cVar3 = FUN_1002b5814(lVar6,param_2 + 0x120,0);
    if (cVar3 != '\0') {
      *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 4;
    }
    cVar3 = FUN_1002b5c9e(lVar6,param_2 + 0x1a0,0);
    if (cVar3 != '\0') {
      *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 8;
    }
    iVar5 = FUN_100476928(*(undefined8 *)(lVar6 + 8),param_2 + 0x220);
    if (iVar5 == 0) {
      *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 0x20;
    }
  }
  uVar10 = CONCAT71((int7)((ulong)lVar6 >> 8),1);
  if (param_1[0x9e] != 0) {
    FUN_100440c7e(param_1[0x9e],param_2,1);
  }
LAB_1004c3965:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

