// name: FUN_10063e7e4
// address: 10063e7e4

/* WARNING: Type propagation algorithm not settling */

void FUN_10063e7e4(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined **local_98 [4];
  undefined ***local_78;
  undefined8 local_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  int local_58;
  undefined2 local_54;
  int local_52;
  undefined2 local_4e;
  int local_4c;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(uint *)(param_1 + 0x18);
  if ((uVar4 & 0x20) != 0) goto LAB_10063ec48;
  if (param_2 == 0) {
    uVar5 = FUN_10048604a(*(undefined8 *)(param_1 + 8));
    FUN_100319a94(*(undefined8 *)(param_1 + 8),5,0);
    lVar6 = FUN_100277149(*(undefined8 *)(param_1 + 8));
    while (lVar2 = lVar6, lVar2 != 0) {
      lVar6 = FUN_10027728e(lVar2);
      if (*(uint *)(param_1 + 0x8a4) <= *(uint *)(lVar2 + 0x18)) {
        if ((*(int *)(lVar2 + 0x14) == 0) && (*(int *)(lVar2 + 0xc) != 1)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = 0x7a0a90;
            local_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0xa17b;
            local_58 = 0x1007e;
            local_54 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1003a040b(lVar2);
      }
    }
    FUN_1002773d4(*(undefined8 *)(param_1 + 8));
    lVar6 = FUN_1004cf9b5(*(undefined8 *)(param_1 + 8));
    while (lVar2 = lVar6, lVar2 != 0) {
      lVar6 = FUN_1005e386a(lVar2);
      if (*(uint *)(param_1 + 0x8a4) <= *(uint *)(lVar2 + 0x14)) {
        for (lVar8 = *(long *)(lVar2 + 200); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x48)) {
          if ((*(uint *)(lVar8 + 0xc2) & 0x10000100) == 0x10000000) {
            cVar3 = FUN_100485bb5(lVar8,uVar5,0);
            if (cVar3 == '\0') {
              FUN_100489a1f(uVar5,lVar8,0,0);
            }
            break;
          }
        }
        if (((*(int *)(lVar2 + 0x84) == 0) && (*(int *)(lVar2 + 0x10) != 1)) &&
           (cVar3 = FUN_1005e3f38(lVar2), cVar3 == '\0')) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = 0x7a0a90;
            local_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0x7292;
            local_58 = 0x1007f;
            local_54 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1005e37a3(lVar2);
      }
    }
    FUN_1004cf6d4(*(undefined8 *)(param_1 + 8));
    FUN_10058577d(*(undefined8 *)(param_1 + 8));
    if (*(uint *)(param_1 + 0x58) < 2) {
      if ((*(uint *)(param_1 + 0x58) == 0) && (*(char *)(param_1 + 0x89c) != '\0')) {
        local_68._0_4_ = 0x871500;
        local_68._4_4_ = 1;
        local_60 = (undefined2)param_1;
        uStack_5e = (undefined2)((ulong)param_1 >> 0x10);
        uStack_5c = (undefined2)((ulong)param_1 >> 0x20);
        uStack_5a = (undefined2)((ulong)param_1 >> 0x30);
        local_48 = &local_68;
        FUN_1002f9b73(*(undefined8 *)(param_1 + 8),&local_68);
        if (local_48 == &local_68) {
          lVar6 = 0x20;
        }
        else {
          lVar6 = 0x28;
          if (local_48 == (long *)0x0) goto LAB_10063eaa4;
        }
        (**(code **)(*local_48 + lVar6))();
      }
LAB_10063eaa4:
      if ((*(char *)(param_1 + 0x89d) == '\x01') && (*(uint *)(param_1 + 0x58) < 2)) {
        local_98[0] = &PTR_FUN_100871580;
        local_78 = local_98;
        FUN_10031be80(*(undefined8 *)(param_1 + 8),local_98);
        if (local_78 == local_98) {
          lVar6 = 0x20;
        }
        else {
          lVar6 = 0x28;
          if (local_78 == (undefined ***)0x0) goto LAB_10063eaf4;
        }
        (**(code **)((long)*local_78 + lVar6))();
      }
    }
LAB_10063eaf4:
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar4 & 4) != 0) {
    if (DAT_1008c66e8 != -1) {
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar5 = DAT_1008c66e0;
    cVar3 = _os_log_type_enabled(DAT_1008c66e0,0);
    if (cVar3 != '\0') {
      local_68._0_4_ = 0x4000100;
      local_68._4_4_ = param_2;
      __os_log_impl(0x100000000,uVar5,0,"db> End DB load: status = %d",&local_68,8);
    }
    if (param_2 == 0) {
      if (DAT_1008c66e8 != -1) {
        _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
      }
      uVar5 = DAT_1008c66e0;
      cVar3 = _os_log_type_enabled(DAT_1008c66e0,0);
      if (cVar3 != '\0') {
        lVar6 = *(long *)(param_1 + 8);
        if (lVar6 == 0) {
          auVar1 = *(undefined1 (*) [16])(param_1 + 0x764);
          local_52 = -auVar1._0_4_;
          local_58 = -auVar1._4_4_;
          local_68._4_4_ = -auVar1._8_4_;
          iVar9 = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar1._12_4_;
          local_4c = 0;
        }
        else {
          local_52 = *(int *)(lVar6 + 0xa8) - *(int *)(param_1 + 0x764);
          local_58 = *(int *)(lVar6 + 0x98) - *(int *)(param_1 + 0x768);
          local_68._4_4_ = (int)*(undefined8 *)(lVar6 + 0x9c) - *(int *)(param_1 + 0x76c);
          iVar9 = (int)((ulong)*(undefined8 *)(lVar6 + 0x9c) >> 0x20) - *(int *)(param_1 + 0x770);
          local_4c = *(int *)(lVar6 + 0xa4);
        }
        local_4c = local_4c - *(int *)(param_1 + 0x760);
        local_68._0_4_ = 0x4000500;
        local_60 = 0x400;
        uStack_5e = (undefined2)iVar9;
        uStack_5c = (undefined2)((uint)iVar9 >> 0x10);
        uStack_5a = 0x400;
        local_54 = 0x400;
        local_4e = 0x400;
        __os_log_impl(0x100000000,uVar5,0,
                      "db> Loaded: tracks = %u, instances = %u, playlists = %u, artists = %u, albums = %u"
                      ,&local_68,0x20);
      }
    }
  }
  FUN_10031b2d9(*(undefined8 *)(param_1 + 8));
LAB_10063ec48:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

