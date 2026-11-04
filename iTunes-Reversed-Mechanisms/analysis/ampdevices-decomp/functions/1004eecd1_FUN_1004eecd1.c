// name: FUN_1004eecd1
// address: 1004eecd1

void FUN_1004eecd1(long param_1)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  uint uStack_58;
  undefined2 uStack_54;
  undefined4 local_48;
  uint local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004eeed0:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_68 = true;
      uStack_67 = 2;
      uStack_66 = 0x22;
      uStack_65 = 8;
      uStack_64 = 0x90;
      uStack_63 = 10;
      uStack_62 = 0x7a;
      uStack_61 = 0;
      uStack_60 = 1;
      uStack_5f = 0;
      bStack_5e = 0;
      bStack_5d = 0;
      uStack_5c = 0x822;
      uStack_5a = 0xd2b2;
      uStack_58 = 0x1007a;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_68 = true;
        uStack_67 = 2;
        uStack_66 = 0x22;
        uStack_65 = 8;
        uStack_64 = 0x8c;
        uStack_63 = 0xb5;
        uStack_62 = 0x7a;
        uStack_61 = 0;
        uStack_60 = 1;
        uStack_5f = 0;
        bStack_5e = 0;
        bStack_5d = 0;
        uStack_5c = 0x822;
        uStack_5a = 0xd710;
        uStack_58 = 0x1007a;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1004eeed0;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar4 != '\0') {
      local_68 = false;
      uStack_67 = 0;
      __os_log_impl(0x100000000,uVar7,1,"sync> done updating device",&local_68,2);
    }
    cVar4 = *(char *)(param_1 + 0x6acf);
    if ((cVar4 != '\0') && (*(char *)(param_1 + 0x6aca) == '\0')) {
      if ((*(long *)(param_1 + 0x16688) != 0) && (cVar5 = FUN_1004ef2b5(param_1), cVar5 != '\0')) {
        FUN_1004ef324(param_1,1,1);
      }
      if (*(char *)(param_1 + 0x379) != '\0') {
        FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15380));
        FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15388));
        FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15390));
      }
      if ((*(char *)(param_1 + 0x37d) != '\0') && (*(char *)(param_1 + 0x3a2) == '\0')) {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x15970));
        *(undefined8 *)(param_1 + 0x15970) = 0;
        FUN_10017060f(*(undefined8 *)(param_1 + 0x15978));
        *(undefined8 *)(param_1 + 0x15978) = 0;
        FUN_1004ef6b9(param_1,1);
      }
      *(undefined1 *)(param_1 + 0x6aee) = 0;
      if (*(char *)(param_1 + 0x6aef) != '\0') {
        iVar1 = *(int *)(param_1 + 0x152dc);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (iVar1 == 0) {
          if (cVar5 != '\0') {
            local_68 = false;
            uStack_67 = 0;
            __os_log_impl(0x100000000,uVar7,1,"sync> deleting SyncAfterRestore",&local_68,2);
          }
          FUN_1001893a7(param_1 + 0x75e0,"SyncAfterRestore");
          *(undefined1 *)(param_1 + 0x6aef) = 0;
        }
        else if (cVar5 != '\0') {
          uVar6 = *(undefined4 *)(param_1 + 0x152dc);
          local_68 = false;
          uStack_67 = 1;
          uStack_66 = 0;
          uStack_65 = 4;
          uStack_64 = (undefined1)uVar6;
          uStack_63 = (undefined1)((uint)uVar6 >> 8);
          uStack_62 = (undefined1)((uint)uVar6 >> 0x10);
          uStack_61 = (undefined1)((uint)uVar6 >> 0x18);
          __os_log_impl(0x100000000,uVar7,1,
                        "sync> not deleting SyncAfterRestore since sync failed (%d)",&local_68,8);
        }
      }
      FUN_1004ee8bd(param_1,0);
      *(undefined8 *)(param_1 + 0x6b30) = *(undefined8 *)(param_1 + 0x6b20);
      *(undefined4 *)(param_1 + 0x6b38) = 0;
      *(undefined4 *)(param_1 + 0x67b4) = 0;
      *(undefined8 *)(param_1 + 0x69bc) = 0;
      *(undefined8 *)(param_1 + 0x6b20) = 0;
      *(undefined8 *)(param_1 + 0x6b28) = 0;
    }
    FUN_10023318f(param_1,"");
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x69707363,*(undefined4 *)(param_1 + 0x28),0,0);
    if ((*(double *)(param_1 + 0x15208) != 0.0) || (NAN(*(double *)(param_1 + 0x15208)))) {
      local_68 = false;
      uStack_67 = 0;
      uStack_66 = 0;
      uStack_65 = 0;
      uStack_64 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      bStack_5e = 0;
      bStack_5d = 0;
      uStack_5c = 0;
      uStack_5a = 0;
      uStack_58 = 0;
      if (cVar4 != '\0') {
        uVar2 = *(ulong *)(param_1 + 0x6b30);
        bVar10 = false;
        uStack_67 = false;
        if ((uVar2 & 0x20) != 0) {
          bVar10 = *(char *)(param_1 + 0x14d6c) == '\0';
          local_68 = !bVar10;
          if (bVar10) {
            bVar10 = false;
            uStack_67 = false;
          }
          else {
            uStack_67 = *(char *)(param_1 + 0x14d6d) != '\0';
            bVar10 = true;
          }
        }
        if ((uVar2 & 0x40) == 0) {
          uStack_66 = false;
        }
        else {
          uStack_66 = *(char *)(param_1 + 0x14d68) != '\0';
        }
        if ((char)uVar2 < '\0') {
          uStack_65 = *(char *)(param_1 + 0x14d78) != '\0';
        }
        else {
          uStack_65 = false;
        }
        uVar9 = (uint)uVar2;
        if ((uVar9 >> 8 & 1) == 0) {
          uStack_64 = false;
        }
        else {
          uStack_64 = *(char *)(param_1 + 0x14d2a) != '\0';
        }
        if ((uVar9 >> 0xb & 1) == 0) {
          uStack_62 = false;
        }
        else {
          uStack_62 = *(char *)(param_1 + 0x14dec) != '\0';
        }
        if ((uVar9 >> 0xc & 1) == 0) {
          uStack_61 = false;
        }
        else {
          uStack_61 = *(char *)(param_1 + 0x14dee) != '\0';
        }
        uStack_5f = false;
        if (bVar10) {
          uStack_5f = *(char *)(param_1 + 0x14ddf) != '\0';
        }
        bStack_5e = (byte)(uVar2 >> 0xd) & 1;
        bStack_5d = *(byte *)(param_1 + 0x14d05);
        uVar8 = (uint)bStack_5d;
        uVar6 = 0;
        if (uVar8 != 2) {
          if (uVar8 == 6) {
            uVar6 = FUN_1001eb7b7(&cf_com_apple_Photos);
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            uVar6 = 0;
            if (cVar5 != '\0') {
              local_48 = 0x4000100;
              local_44 = uVar8;
              __os_log_impl(0x100000000,uVar7,0x10,"Unknown photoSyncSource of %d!",&local_48,8);
            }
          }
        }
        uStack_5c = (undefined2)uVar6;
        uStack_5a = (undefined2)((uint)uVar6 >> 0x10);
        uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar9 >> 0x17)) & 0xffffff01;
      }
      cVar5 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
      dVar3 = (double)FUN_1001ebd46();
      FUN_100367c81(SUB84(dVar3 - *(double *)(param_1 + 0x15208),0),param_1 + 0x50,cVar4 != '\0',
                    cVar5 != '\0',&local_68,*(undefined4 *)(param_1 + 0x152dc));
      *(undefined8 *)(param_1 + 0x15208) = 0;
    }
    if ((*(int *)(param_1 + 0x152dc) == 0) && (cVar4 = FUN_10049ca60(), cVar4 != '\0')) {
      FUN_1002301a0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

