// name: FUN_100526a8d
// address: 100526a8d

void FUN_100526a8d(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  uint local_68;
  char *local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined2 local_52;
  char *local_50;
  undefined2 local_48;
  char *local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar7 = FUN_100170633(*(undefined8 *)(param_1 + 0x15970));
  if (cVar7 == '\0') {
    cVar7 = *(char *)(param_1 + 0x6aff);
    cVar1 = *(char *)(param_1 + 0x6b00);
    cVar2 = *(char *)(param_1 + 0x6b01);
    cVar3 = *(char *)(param_1 + 0x6b02);
    cVar4 = *(char *)(param_1 + 0x6b03);
    cVar5 = *(char *)(param_1 + 0x6b06);
    uVar9 = FUN_1001705fc(param_2);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x15970));
    *(undefined8 *)(param_1 + 0x15970) = uVar9;
    if (*(char *)(param_1 + 0x37f) == '\0') {
      *(undefined2 *)(param_1 + 0x6aff) = 0x101;
      *(undefined1 *)(param_1 + 0x6b02) = 1;
    }
    else {
      lVar10 = FUN_100166b7f(param_2,&cf_com_apple_Music);
      lVar11 = FUN_100166b7f(param_2,&cf_com_apple_videos);
      lVar12 = FUN_100166b7f(param_2,&cf_com_apple_tv);
      lVar13 = FUN_100166b7f(param_2,&cf_com_apple_VoiceMemos);
      if (lVar10 == 0) {
        bVar14 = false;
      }
      else {
        cVar8 = FUN_100167dd2(lVar10,&cf_IsHiddenSystemApp,0);
        bVar14 = cVar8 == '\0';
      }
      *(bool *)(param_1 + 0x6aff) = bVar14;
      if (lVar11 == 0) {
        bVar14 = false;
      }
      else {
        cVar8 = FUN_100167dd2(lVar11,&cf_IsHiddenSystemApp,0);
        bVar14 = cVar8 == '\0';
      }
      *(bool *)(param_1 + 0x6b00) = bVar14;
      if (lVar12 == 0) {
        bVar14 = false;
      }
      else {
        cVar8 = FUN_100167dd2(lVar12,&cf_IsHiddenSystemApp,0);
        bVar14 = cVar8 == '\0';
      }
      *(bool *)(param_1 + 0x6b01) = bVar14;
      if (lVar13 == 0) {
        bVar14 = false;
      }
      else {
        cVar8 = FUN_100167dd2(lVar13,&cf_IsHiddenSystemApp,0);
        bVar14 = cVar8 == '\0';
      }
      *(bool *)(param_1 + 0x6b02) = bVar14;
      if (*(char *)(param_1 + 0x6aff) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_64 = "hidden";
          if (lVar10 == 0) {
            local_64 = "not installed";
          }
          local_68 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,"sync> Music app is %{public}s",&local_68,0xc);
        }
      }
      if (*(char *)(param_1 + 0x6b00) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_64 = "hidden";
          if (lVar11 == 0) {
            local_64 = "not installed";
          }
          local_68 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,"sync> Videos app is %{public}s",&local_68,0xc);
        }
      }
      if (*(char *)(param_1 + 0x6b01) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_64 = "hidden";
          if (lVar12 == 0) {
            local_64 = "not installed";
          }
          local_68 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,"sync> TV app is %{public}s",&local_68,0xc);
        }
      }
      if (*(char *)(param_1 + 0x6b02) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_64 = "hidden";
          if (lVar13 == 0) {
            local_64 = "not installed";
          }
          local_68 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,"sync> Voice Memos app is %{public}s",&local_68,0xc);
        }
      }
    }
    if (*(char *)(param_1 + 0x39c) != '\0') {
      bVar14 = true;
      if (*(int *)(param_1 + 0x66b0) != 0x69506164) {
        bVar14 = 0x83f < *(ushort *)(param_1 + 100);
      }
      lVar10 = FUN_100166b7f(param_2,&cf_com_apple_iBooks);
      if (lVar10 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          local_68 = local_68 & 0xffff0000;
          __os_log_impl(0x100000000,uVar9,1,"sync> iBooks app is not installed",&local_68,2);
        }
        *(undefined2 *)(param_1 + 0x6b03) = 0x100;
        *(bool *)(param_1 + 0x6b05) = bVar14;
      }
      else {
        if (*(char *)(param_1 + 0x37f) == '\0') {
          bVar15 = true;
        }
        else {
          cVar8 = FUN_100167dd2(lVar10,&cf_IsHiddenSystemApp,0);
          bVar15 = cVar8 == '\0';
        }
        *(bool *)(param_1 + 0x6b03) = bVar15;
        if (*(ushort *)(param_1 + 100) < 0xb00) {
          uVar9 = FUN_100166c1b(lVar10,PTR_cf_CFBundleShortVersionString_10083db90);
          lVar10 = FUN_100173bb7(uVar9,&cf_1_1,0x40);
          *(bool *)(param_1 + 0x6b04) = lVar10 != -1;
          if ((bVar14 == false) || (*(ushort *)(param_1 + 100) < 0x500)) {
            bVar14 = false;
          }
          else {
            lVar10 = FUN_100173bb7(uVar9,&cf_2_0,0x40);
            bVar14 = lVar10 != -1;
          }
          *(bool *)(param_1 + 0x6b05) = bVar14;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar8 != '\0') {
            local_64 = "installed";
            if (*(char *)(param_1 + 0x6b03) == '\0') {
              local_64 = "hidden";
            }
            local_46 = "YES";
            local_50 = "YES";
            if (*(char *)(param_1 + 0x6b04) == '\0') {
              local_50 = "NO";
            }
            if (*(char *)(param_1 + 0x6b05) == '\0') {
              local_46 = "NO";
            }
            local_68 = 0x8220402;
            local_5c = 0x842;
            local_52 = 0x822;
            local_48 = 0x822;
            local_5a = uVar9;
            __os_log_impl(0x100000000,uVar6,1,
                          "sync> iBooks app is %{public}s, version %{public}@, supports PDF books = %{public}s, supports enhanced books = %{public}s"
                          ,&local_68,0x2a);
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x6b04) = 0x101;
        }
      }
      *(ushort *)(param_1 + 0x39d) =
           *(ushort *)(param_1 + 0x6b04) << 8 | *(ushort *)(param_1 + 0x6b04) >> 8;
    }
    lVar10 = FUN_100166b7f(param_2,&cf_com_apple_podcasts);
    if (lVar10 == 0) {
      bVar14 = false;
    }
    else if (*(char *)(param_1 + 0x37f) == '\0') {
      bVar14 = true;
    }
    else {
      cVar8 = FUN_100167dd2(lVar10,&cf_IsHiddenSystemApp,0);
      bVar14 = cVar8 == '\0';
    }
    *(bool *)(param_1 + 0x6b06) = bVar14;
    uVar9 = FUN_1001c156e();
    FUN_1001c6987(uVar9,0x69706163,*(undefined4 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x15970),0);
    if ((((cVar7 != *(char *)(param_1 + 0x6aff)) || (cVar1 != *(char *)(param_1 + 0x6b00))) ||
        (cVar2 != *(char *)(param_1 + 0x6b01))) ||
       (((cVar3 != *(char *)(param_1 + 0x6b02) || (cVar4 != *(char *)(param_1 + 0x6b03))) ||
        (cVar5 != *(char *)(param_1 + 0x6b06))))) {
      uVar9 = FUN_1001c156e();
      FUN_1001c6987(uVar9,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

