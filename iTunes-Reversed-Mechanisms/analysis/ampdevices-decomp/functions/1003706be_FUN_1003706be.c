// name: FUN_1003706be
// address: 1003706be

void FUN_1003706be(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*param_1 != 0) && (cVar2 = FUN_100170633(*param_1,param_2), cVar2 == '\0')) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7c5b57;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1[1] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7c5bac;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1[2] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7c5bdf;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1[3] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7c5c12;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1[4] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7c5c41;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar5 = FUN_1001705fc(param_2);
  FUN_10017060f(*param_1);
  *param_1 = lVar5;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  param_1[3] = *param_4;
  param_1[4] = param_4[1];
  uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
  lVar5 = 0;
  bVar8 = true;
  do {
    if (param_1[lVar5 + 3] != 0) {
      if (param_1[lVar5 + 5] != 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0x7c5c70;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar7 = FUN_1001ed74b(0,7,"AFCConnectionRunLoopThread");
      param_1[lVar5 + 5] = lVar7;
      if (lVar7 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0x7c5cbe;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100370a06;
      }
      iVar3 = _AFCConnectionScheduleWithRunLoop
                        (param_1[lVar5 + 3],*(undefined8 *)(lVar7 + 0x10),uVar4);
      if (iVar3 != 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0x7c5cf1;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        if (cVar2 != '\0') {
          lVar5 = param_1[lVar5 + 3];
          local_58 = 0x4000300;
          uStack_50 = 0x800;
          uStack_4e = (undefined2)lVar5;
          uStack_4c = (undefined2)((ulong)lVar5 >> 0x10);
          uStack_4a = (undefined4)((ulong)lVar5 >> 0x20);
          uStack_46 = 0x800;
          uStack_44 = (undefined2)param_2;
          uStack_42 = (undefined6)((ulong)param_2 >> 0x10);
          local_54 = iVar3;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AFCConnectionScheduleWithRunLoop failed (0x%08X) for connection %p for device %p"
                              ,&local_58,0x1c);
        }
      }
    }
    lVar5 = 1;
    bVar1 = !bVar8;
    bVar8 = false;
    if (bVar1) {
LAB_100370a06:
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}

