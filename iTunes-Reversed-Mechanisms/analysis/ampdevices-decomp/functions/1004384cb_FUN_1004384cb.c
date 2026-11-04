// name: FUN_1004384cb
// address: 1004384cb

int FUN_1004384cb(long param_1,int *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  bool bVar10;
  long *local_d0;
  long local_c8 [3];
  long local_b0;
  long local_a8;
  long local_a0;
  int *local_98;
  char local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_7c;
  int local_7a;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b0 = 0;
  local_d0 = local_c8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = param_3;
  local_a0 = param_1;
  local_98 = param_2;
  local_a8 = FUN_1004e0c3f(param_1,1);
  FUN_10031c15f(local_a8);
  if ((((local_98 != (int *)0x0) && (*local_98 == 0x4f4c5354)) && (local_98[1] != 0)) &&
     (iVar7 = (int)((ulong)(*(long *)(local_98 + 4) - *(long *)(local_98 + 2)) >> 3) * -0x49249249,
     iVar7 != 0)) {
    iVar8 = 0;
    do {
      lVar3 = FUN_1005968ea(local_98,iVar8,0);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = 0x7a0a90;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0x581f;
          uStack_58 = 0x7b;
          uStack_56 = 1;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (*(long *)(lVar3 + 0x10) == local_a8) {
        lVar4 = *(long *)(lVar3 + 0x28);
        local_88 = (undefined4)lVar4;
        uStack_84 = (undefined4)((ulong)lVar4 >> 0x20);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = 0x7a0a90;
            uStack_60 = 1;
            uStack_5c = 0x822;
            uStack_5a = 0x68cf;
            uStack_58 = 0x7b;
            uStack_56 = 1;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          FUN_1002b7e7c(&local_d0,&local_88,&local_88);
          *(undefined4 *)(lVar3 + 0xc) = 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar8);
  }
  if (local_d0 != local_c8) {
    plVar6 = local_d0;
    do {
      lVar3 = plVar6[4];
      local_89 = '\x01';
      local_68._0_4_ = 0x858f20;
      local_68._4_4_ = 1;
      uStack_60 = SUB84(&local_89,0);
      uStack_5c = (undefined2)((ulong)&local_89 >> 0x20);
      uStack_5a = (undefined2)((ulong)&local_89 >> 0x30);
      local_48 = &local_68;
      FUN_1003a0178(lVar3,0,&local_68);
      if (local_48 == &local_68) {
        lVar4 = 0x20;
LAB_10043873a:
        (**(code **)(*local_48 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10043873a;
      }
      if (((local_89 == '\x01') &&
          (iVar7 = FUN_100437e90(local_a0,lVar3,local_c8[2],&local_b0), iVar7 != -0x80)) &&
         (iVar7 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5);
        if (cVar2 != '\0') {
          local_88 = 0x8220202;
          uStack_84 = 0x7a0a90;
          uStack_80 = 1;
          local_7c = 0x400;
          local_7a = iVar7;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
      }
      plVar1 = (long *)plVar6[1];
      plVar9 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar10 = (long *)*plVar6 != plVar9;
          plVar9 = plVar6;
        } while (bVar10);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != local_c8);
  }
  FUN_100438e75(local_a0,local_98,local_c8[2],&local_b0);
  FUN_10031c15f(local_a8);
  FUN_1002a41f4(&local_d0,local_c8[0]);
  if (local_b0 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_1004ef324(local_a0,local_b0,0);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        uStack_60 = 1;
        uStack_5c = 0x400;
        uStack_5a = (undefined2)iVar7;
        uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
    uVar5 = FUN_1001c156e();
    FUN_1001c6987(uVar5,0x69707372,*(undefined4 *)(local_a0 + 0x28),0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

