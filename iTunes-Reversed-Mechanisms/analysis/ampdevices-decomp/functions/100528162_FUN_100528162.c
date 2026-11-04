// name: FUN_100528162
// address: 100528162

int FUN_100528162(long param_1,long param_2,long param_3,long param_4,long param_5,long *param_6,
                 undefined4 param_7,uint param_8,undefined8 *param_9,undefined4 param_10)

{
  double dVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  long *local_68;
  long local_58;
  long *local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar7 = (long *)FUN_1001c629e(0x8f0,&DAT_100711c6e);
  if (plVar7 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x5a82;
      uStack_78 = 0x7e;
      uStack_76 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x6c;
    goto LAB_1005286b7;
  }
  plVar7[0x107] = 0;
  plVar7[0x108] = 0;
  plVar7[0x10e] = 0;
  plVar7[0x10f] = 0;
  plVar7[0x11a] = 0;
  *(undefined4 *)(plVar7 + 1) = 0x69747062;
  *(undefined4 *)(plVar7 + 2) = param_7;
  *(undefined4 *)((long)plVar7 + 0x14) = param_10;
  if (param_1 != 0) {
    *(undefined4 *)((long)plVar7 + 0xc) = *(undefined4 *)(param_1 + 0x68);
  }
  if (param_2 != 0) {
    FUN_1001e1c39(param_2,plVar7 + 3);
    *(int *)(plVar7 + 0x103) = (int)plVar7[0x103] + 1;
  }
  if (param_3 != 0) {
    FUN_1001e1c39(param_3,plVar7 + 0x83);
    *(int *)(plVar7 + 0x103) = (int)plVar7[0x103] + 1;
  }
  if ((char)param_8 < '\0') {
    plVar7[0x104] = -0x4010000000000000;
  }
  lVar10 = FUN_1001ebd46();
  plVar7[0x109] = lVar10;
  plVar2 = (long *)param_6[4];
  if (plVar2 == (long *)0x0) {
    plVar7[0x114] = param_4;
    plVar7[0x115] = param_5;
  }
  else {
    if (plVar2 == param_6) {
      local_68 = &local_88;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
    }
    else {
      local_68 = (long *)(**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = plVar7 + 0x116;
    if (&local_88 != plVar2) {
      plVar3 = (long *)plVar7[0x11a];
      if (local_68 == &local_88) {
        if (plVar3 == plVar2) {
          (**(code **)(*local_68 + 0x18))(local_68,&local_58);
          (**(code **)(*local_68 + 0x20))();
          local_68 = (long *)0x0;
          (**(code **)(*(long *)plVar7[0x11a] + 0x18))((long *)plVar7[0x11a],&local_88);
          (**(code **)(*(long *)plVar7[0x11a] + 0x20))();
          plVar7[0x11a] = 0;
          local_68 = &local_88;
          (**(code **)(local_58 + 0x18))(&local_58,plVar2);
          (**(code **)(local_58 + 0x20))();
        }
        else {
          (**(code **)(*local_68 + 0x18))(local_68,plVar2);
          (**(code **)(*local_68 + 0x20))();
          local_68 = (long *)plVar7[0x11a];
        }
        plVar7[0x11a] = (long)plVar2;
      }
      else if (plVar3 == plVar2) {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_88);
        (**(code **)(*(long *)plVar7[0x11a] + 0x20))();
        plVar7[0x11a] = (long)local_68;
        local_68 = &local_88;
      }
      else {
        plVar7[0x11a] = (long)local_68;
        local_68 = plVar3;
      }
    }
    if (local_68 == &local_88) {
      lVar10 = 0x20;
    }
    else {
      lVar10 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_1005283e8;
    }
    (**(code **)(*local_68 + lVar10))();
  }
LAB_1005283e8:
  *(uint *)(plVar7 + 0x105) = param_8;
  lVar10 = DAT_100700b00;
  if (((param_8 >> 0xc & 1) != 0) || (lVar10 = DAT_100700c28, (param_8 & 0x10) != 0)) {
    plVar7[0x106] = lVar10;
  }
  if ((((param_8 & 2) != 0) || ((double)plVar7[0x106] != 0.0)) || (NAN((double)plVar7[0x106]))) {
    *(undefined1 *)(plVar7 + 0x11c) = 1;
  }
  if (param_1 == 0) {
LAB_10052849f:
    puVar4 = DAT_1008bfc98;
    if (*plVar7 != 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x822;
        uStack_7a = 0x4952;
        uStack_78 = 0x7a;
        uStack_76 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (puVar4 == (undefined8 *)0x0) {
      puVar9 = &DAT_1008bfc98;
    }
    else {
      do {
        puVar9 = puVar4;
        puVar4 = (undefined8 *)*puVar9;
      } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
    }
    *plVar7 = 0;
    *puVar9 = plVar7;
    if (param_9 != (undefined8 *)0x0) {
      *param_9 = plVar7;
    }
    uVar8 = FUN_1001c156e();
    iVar6 = 0;
    FUN_1001c6987(uVar8,0x63707267,plVar7,0,0);
    if ((char)plVar7[0x11c] == '\0') {
      FUN_100528074(plVar7,1);
    }
    dVar1 = (double)plVar7[0x106];
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      dVar11 = DAT_10070e568 * dVar1;
      *(undefined1 *)(plVar7 + 0x11c) = 0;
      local_88._0_4_ = 0x868718;
      local_88._4_4_ = 1;
      local_80 = 0x529afe;
      uStack_7c = 1;
      uStack_7a = 0;
      uStack_78 = SUB82(plVar7,0);
      uStack_76 = (undefined4)((ulong)plVar7 >> 0x10);
      uStack_72 = (undefined2)((ulong)plVar7 >> 0x30);
      local_68 = &local_88;
      FUN_1001bdcc2(dVar1,DAT_10070e560,dVar11,&local_58,&local_88);
      FUN_100217418(plVar7 + 0x107,&local_58);
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        lVar10 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == &local_88) {
        lVar10 = 0x20;
      }
      else {
        lVar10 = 0x28;
        if (local_68 == (long *)0x0) goto LAB_1005286b7;
      }
      (**(code **)(*local_68 + lVar10))();
    }
    goto LAB_1005286b7;
  }
  plVar2 = plVar7 + 0x10c;
  iVar6 = FUN_1001c703f(plVar2,FUN_100527ada,plVar7);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      iVar6 = FUN_1001c6b4a(param_1 + 200,plVar2);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) goto LAB_10052849f;
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_88._0_4_ = 0x8220202;
          local_88._4_4_ = 0x7a0a90;
          local_80 = 1;
          uStack_7c = 0x400;
          uStack_7a = (undefined2)iVar6;
          uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
      }
      FUN_1001c72e9(plVar2);
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar6;
        uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
    }
  }
  plVar2 = (long *)plVar7[0x11a];
  if (plVar2 == plVar7 + 0x116) {
    lVar10 = 0x20;
LAB_1005286a1:
    (**(code **)(*plVar2 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (plVar2 != (long *)0x0) goto LAB_1005286a1;
  }
  FUN_100205d70(plVar7 + 0x107);
  operator_delete(plVar7);
LAB_1005286b7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

