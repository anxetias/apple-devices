// name: FUN_100406062
// address: 100406062

int FUN_100406062(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 local_62;
  long local_60;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2c28) == 0) {
    FUN_1001c62d9(&local_78,0x38);
    local_78 = CONCAT22(local_78._2_2_,0x100);
    iVar2 = FUN_1002f7c7e(param_1,0x74646774);
    *(ulong *)(param_1 + 0x2c10) = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
    *(long *)(param_1 + 0x2c18) = local_60;
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        local_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x400;
        uStack_6a = (undefined2)iVar2;
        uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
    if ((*(int *)(param_1 + 0x84) == 0x646f5069) && ((*(byte *)(param_1 + 0x2d1a) & 0x20) != 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_78 = 0x8000100;
        local_74 = (undefined4)*(undefined8 *)(param_1 + 0x2c10);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c10) >> 0x20);
        __os_log_impl(0x100000000,uVar5,1,"airtraffic> initial copy free space = %llu bytes",
                      &local_78,0xc);
      }
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x2c10);
  if (uVar11 != 0) {
    uVar6 = uVar11 - *(ulong *)(param_1 + 0x2c18);
    if (uVar11 < *(ulong *)(param_1 + 0x2c18)) {
      uVar6 = 0;
    }
    uVar11 = uVar6 / *(uint *)(param_1 + 0x2c08) - *(long *)(param_1 + 0x2bf0);
    if (uVar11 < *(ulong *)(param_3 + 0x488)) {
      if ((*(int *)(param_1 + 0x84) != 0x646f5069) || ((*(byte *)(param_1 + 0x2d1a) & 0x20) == 0)) {
        *(byte *)(param_1 + 0x2be1) = *(byte *)(param_1 + 0x2be1) | 0x80;
        iVar2 = -0x80;
        goto LAB_10040652e;
      }
      FUN_1001b7a44(local_88);
      if (param_2 == 0) {
        cVar1 = FUN_10017cbd0(param_3 + 0x68);
        if (cVar1 != '\0') {
          FUN_10017d520(&local_78,param_3 + 0x68);
          FUN_1001b80b2(local_88,&local_78);
          goto LAB_10040648f;
        }
      }
      else {
        FUN_100476ac1(&local_78,*(undefined8 *)(param_2 + 8));
        FUN_1001b80b2(local_88,&local_78);
LAB_10040648f:
        FUN_1001b7a50(&local_78);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        uVar8 = FUN_1001b83ae(local_88);
        local_60 = uVar11 * *(uint *)(param_1 + 0x2c08);
        lVar9 = (ulong)*(uint *)(param_1 + 0x2c08) * *(long *)(param_3 + 0x488);
        local_78 = 0x8220302;
        local_74 = (undefined4)uVar8;
        uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
        uStack_6c = 0x800;
        uStack_6a = (undefined2)lVar9;
        uStack_68 = (undefined2)((ulong)lVar9 >> 0x10);
        uStack_66 = (undefined4)((ulong)lVar9 >> 0x20);
        local_62 = 0x800;
        __os_log_impl(0x100000000,uVar5,0x10,
                      "airtraffic> insufficient free space for \"%{public}s\" (%llu bytes required, %llu bytes available)"
                      ,&local_78,0x20);
      }
      FUN_1001b7a50(local_88);
      iVar2 = -0x22;
      goto LAB_10040652e;
    }
  }
  if (*(int *)(param_1 + 0x2c28) == 0) {
    iVar2 = FUN_10031ae5a(param_1);
    if (iVar2 == -0x80) goto LAB_10040652e;
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        local_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x400;
        uStack_6a = (undefined2)iVar2;
        uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
      goto LAB_10040652e;
    }
  }
  if (param_2 != 0) {
    if (DAT_1008c66e8 != -1) {
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar5 = DAT_1008c66e0;
    cVar1 = _os_log_type_enabled(DAT_1008c66e0,1);
    if (cVar1 != '\0') {
      local_78 = 0x8000202;
      local_74 = (undefined4)**(undefined8 **)(param_2 + 8);
      uStack_70 = (undefined4)((ulong)**(undefined8 **)(param_2 + 8) >> 0x20);
      uStack_6c = 0x820;
      uStack_6a = 0x1b00;
      uStack_68 = 0x7a;
      uStack_66 = 1;
      __os_log_impl(0x100000000,uVar5,1,"copy>  queueing track 0x%16.16llx \'%s\'",&local_78,0x16);
    }
    *(undefined1 *)(param_2 + 0x45) = 3;
  }
  lVar9 = param_1 + 0x2c20;
  if ((*(int *)(param_1 + 0x84) == 0x646f5069) && ((*(byte *)(param_1 + 0x2d1a) & 0x30) == 0x10)) {
    uVar10 = *(int *)(param_1 + 0x2c50) + 1;
    if (uVar10 <= *(uint *)(param_1 + 0x2c54)) {
      uVar10 = *(uint *)(param_1 + 0x2c54);
    }
    uVar10 = FUN_10015ae1c(lVar9,uVar10,0x7fffffff,param_3,FUN_100407cbf,0);
  }
  else {
    if ((short)*(undefined4 *)(param_3 + 100) < 0) {
      uVar10 = *(uint *)(param_1 + 0x2c50);
    }
    else {
      iVar2 = *(int *)(param_3 + 0x60);
      if (((iVar2 == 0x61727477) || (iVar2 == 0x6c797263)) || (iVar2 == 0x67656e75)) {
        uVar3 = FUN_100407d12();
        for (uVar10 = *(uint *)(param_1 + 0x2c28); *(int *)(param_1 + 0x2c50) + 1U <= uVar10;
            uVar10 = uVar10 - 1) {
          lVar7 = FUN_10015b12c(lVar9,uVar10);
          if (lVar7 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_78 = 0x8220202;
              local_74 = 0x7a0a90;
              uStack_70 = 1;
              uStack_6c = 0x822;
              uStack_6a = 0xc34d;
              uStack_68 = 0x7c;
              uStack_66 = 1;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
            }
            FUN_1001782e9(0,0);
            break;
          }
          uVar4 = FUN_100407d12(*(undefined4 *)(lVar7 + 0x60),*(undefined4 *)(lVar7 + 100));
          if (uVar4 <= uVar3) break;
        }
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x2c28);
      }
    }
    uVar10 = uVar10 + 1;
  }
  if (uVar10 < *(int *)(param_1 + 0x2c50) + 1U) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      local_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xc363;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10015af68(lVar9,1,uVar10,param_3);
  *(long *)(param_1 + 0x2bf0) = *(long *)(param_1 + 0x2bf0) + *(long *)(param_3 + 0x488);
  FUN_10040730b(param_1);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2c28) == 1) {
    FUN_100207cee(9);
  }
LAB_10040652e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

