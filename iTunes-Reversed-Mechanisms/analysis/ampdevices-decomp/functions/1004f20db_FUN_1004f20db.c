// name: FUN_1004f20db
// address: 1004f20db

void FUN_1004f20db(long param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  bool bVar11;
  undefined1 local_680 [16];
  undefined8 local_670;
  undefined1 local_668 [16];
  undefined1 local_658 [512];
  undefined4 local_458;
  uint local_454;
  undefined2 uStack_450;
  undefined2 uStack_44e;
  undefined2 uStack_44c;
  undefined4 uStack_44a;
  undefined4 uStack_446;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_670 = param_3;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    FUN_1001b7a44(local_680);
    piVar10 = &DAT_1007539e4;
    lVar9 = 0;
    do {
      if ((param_2 >> ((uint)lVar9 & 0x1f) & 1) != 0) {
        cVar1 = FUN_1001b8428(local_680);
        if (cVar1 == '\0') {
          FUN_1001b7b04(local_668,", ");
          FUN_1001bbcfe(local_680,local_668);
          FUN_1001b7a50(local_668);
        }
        FUN_1001b7b04(local_668,(long)&DAT_1007539e4 + (long)*piVar10);
        FUN_1001bbcfe(local_680,local_668);
        FUN_1001b7a50(local_668);
      }
      lVar9 = lVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (lVar9 != 0xf);
    uVar4 = FUN_1001b83ae(local_680);
    local_458 = 0x4000202;
    uStack_450 = 0x822;
    uStack_44e = (undefined2)uVar4;
    uStack_44c = (undefined2)((ulong)uVar4 >> 0x10);
    uStack_44a = (undefined4)((ulong)uVar4 >> 0x20);
    local_454 = param_2;
    __os_log_impl(0x100000000,uVar8,1,"setup> configure options = 0x%08X (%{public}s)",&local_458,
                  0x12);
    FUN_1001b7a50(local_680);
  }
  iVar3 = FUN_1004dccf5(param_1,"");
  if (iVar3 != 0) goto LAB_1004f296f;
  *(undefined1 *)(param_1 + 0x14cd8) = 1;
  bVar11 = true;
  if ((param_2 & 0x200f) == 0) {
    bVar11 = *(char *)(param_1 + 0x36c) == '\0';
  }
  *(bool *)(param_1 + 0x14cda) = bVar11;
  bVar7 = (byte)param_2;
  *(byte *)(param_1 + 0x14d6c) = bVar7 & 1;
  *(undefined1 *)(param_1 + 0x14cdb) = 1;
  *(byte *)(param_1 + 0x14d2a) = bVar7 >> 3 & 1;
  *(undefined1 *)(param_1 + 0x14d29) = 1;
  *(undefined2 *)(param_1 + 0x14dec) = 0x100;
  if ((bVar11 == false) && (*(char *)(param_1 + 0x35c) == '\0')) {
    cVar1 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    bVar11 = cVar1 != '\0';
  }
  else {
    bVar11 = false;
  }
  *(bool *)(param_1 + 0x14cef) = bVar11;
  *(byte *)(param_1 + 0x14d04) = (byte)(param_2 >> 4) & 1;
  *(undefined1 *)(param_1 + 0x14d06) = 0;
  iVar3 = FUN_100561d9d(0x400,0,&local_458);
  *(byte *)(param_1 + 0x14d05) = (iVar3 == 0) << 2 | 2;
  *(undefined1 *)(param_1 + 0x14dc4) = 0xff;
  if (*(char *)(param_1 + 0x346) != '\0') {
    *(bool *)(param_1 + 0x14d49) = (param_2 & 6) != 0;
    *(undefined1 *)(param_1 + 0x14d4a) = 1;
    *(undefined1 *)(param_1 + 0x14d6d) = *(undefined1 *)(param_1 + 0x350);
  }
  if (*(char *)(param_1 + 0x34e) != '\0') {
    *(char *)(param_1 + 0x14d68) = (char)((param_2 & 2) >> 1);
    *(char *)(param_1 + 0x14d69) = ((param_2 & 2) == 0) + '\x01';
  }
  if (*(char *)(param_1 + 0x34f) != '\0') {
    *(byte *)(param_1 + 0x14d78) = (byte)(param_2 >> 2) & 1;
    *(undefined1 *)(param_1 + 0x14d79) = 1;
  }
  if (*(char *)(param_1 + 0x39c) != '\0') {
    *(undefined2 *)(param_1 + 0x14dee) = 0x100;
  }
  uVar8 = 8;
  if (*(char *)(param_1 + 0x14d04) != '\0') {
    if ((param_2 & 0x20) == 0) {
      iVar3 = FUN_100561d9d(0x400,0,&local_458);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x14d04) = 0;
        uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc006f);
        FUN_1001e115f(uVar4,local_658);
        FUN_1001b8dfc(&local_458,local_658);
        FUN_1004fda52(local_668,*(undefined4 *)(param_1 + 0x28));
        FUN_1004508b1(&local_458,local_668);
        FUN_1001b7a50(local_668);
        FUN_1001b7a50(&local_458);
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44e = 0;
        uStack_44c = 0x822;
        uStack_44a = 0x7d6fcd;
        uStack_446 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined1 *)(param_1 + 0x14d05) = 2;
      *(undefined2 *)(*(long *)(param_1 + 0x151a0) + 0x70) = 0x101;
      uVar8 = 0x208;
    }
  }
  if (*(char *)(param_1 + 0x14cda) != '\0') {
    FUN_100430bbe(param_1,0);
    FUN_1004313cd(param_1,0);
  }
  if (*(char *)(param_1 + 0x14d04) == '\0') {
    *(undefined1 *)(param_1 + 0x6ac1) = 1;
  }
  else {
    FUN_1004315a1(param_1,0);
  }
  if ((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(param_1 + 0x15218) != '\0')) {
    if ((param_2 & 0x3c0) == 0) {
      FUN_1004f1091(param_1);
    }
    else {
      FUN_100431686(param_1);
      lVar9 = FUN_1004e8236(param_1);
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x20) != 0) {
          *(byte *)(*(long *)(lVar9 + 0x20) + 0x48) = bVar7 >> 6 & 1;
        }
        if (*(long *)(lVar9 + 0x28) != 0) {
          *(byte *)(*(long *)(lVar9 + 0x28) + 0x48) = bVar7 >> 7;
        }
        if (*(long *)(lVar9 + 0x30) != 0) {
          *(byte *)(*(long *)(lVar9 + 0x30) + 0x48) = (byte)(param_2 >> 8) & 1;
        }
        if (*(long *)(lVar9 + 0x38) != 0) {
          *(byte *)(*(long *)(lVar9 + 0x38) + 0x48) = (byte)(param_2 >> 9) & 1;
        }
        FUN_1002eb0c8(lVar9,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x38b) != '\0') {
    if (*(char *)(param_1 + 0x38d) != '\0') {
      if (*(long *)(param_1 + 0x16640) == 0) {
LAB_1004f2600:
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_1001705fc(*(undefined8 *)(*(long *)(param_1 + 0x16640) + 0x15d0));
        if (lVar9 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x7e528b;
            uStack_446 = 1;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1004f2600;
        }
      }
      FUN_1001c62d9(param_1 + 0x14dd6,8);
      FUN_100538023(lVar9,param_1 + 0x14dd6,8);
      FUN_10017060f(lVar9);
    }
    if ((((param_2 >> 0xc & 1) != 0) &&
        (*(undefined1 *)(param_1 + 0x14dc9) = 1, *(char *)(param_1 + 0x38c) != '\0')) &&
       (*(char *)(param_1 + 0x38d) == '\0')) {
      *(undefined1 *)(param_1 + 0x14dd5) = 2;
    }
  }
  FUN_1004ef324(param_1,uVar8,0);
  cVar1 = FUN_1001b8428(local_670);
  if (cVar1 == '\0') {
    uVar8 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30));
    FUN_1001bb41a(local_670,&local_458);
    FUN_10048fb22(uVar8,&local_458,0);
  }
  FUN_10043044c(param_1,*(undefined1 *)(param_1 + 0x14cda));
  FUN_10042ffc4(param_1,*(undefined1 *)(param_1 + 0x14d6c),*(undefined1 *)(param_1 + 0x14cdb));
  FUN_1004300a8(param_1,*(undefined1 *)(param_1 + 0x14d68),*(undefined1 *)(param_1 + 0x14d69));
  FUN_100430196(param_1,*(undefined1 *)(param_1 + 0x14d78),*(undefined1 *)(param_1 + 0x14d79));
  FUN_10043097c(param_1,*(undefined1 *)(param_1 + 0x14d2a),*(undefined1 *)(param_1 + 0x14d29));
  FUN_100430284(param_1,*(undefined1 *)(param_1 + 0x14dec),*(undefined1 *)(param_1 + 0x14ded));
  FUN_100430368(param_1,*(undefined1 *)(param_1 + 0x14dee),*(undefined1 *)(param_1 + 0x14def));
  FUN_100430a60(param_1,*(undefined1 *)(param_1 + 0x14d04),*(undefined1 *)(param_1 + 0x14d05),
                *(undefined1 *)(param_1 + 0x14d06),*(undefined1 *)(param_1 + 0x14dc4),0);
  uVar8 = FUN_1001c156e();
  FUN_1001c6987(uVar8,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
  if (*(char *)(param_1 + 0x38b) == '\0') {
    if ((*(char *)(param_1 + 0x399) != '\0') && (*(int *)(param_1 + 0x66b0) == 0x69506f64)) {
      uVar2 = FUN_10049ca60();
      FUN_1005af482(param_1,0,uVar2);
    }
  }
  else {
    pvVar5 = *(void **)(param_1 + 0x16640);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = operator_new(0x16c0,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar5 != (void *)0x0) {
        FUN_1005a27a4(pvVar5);
        *(void **)(param_1 + 0x16640) = pvVar5;
        goto LAB_1004f27e6;
      }
      *(undefined8 *)(param_1 + 0x16640) = 0;
    }
    else {
LAB_1004f27e6:
      cVar1 = FUN_1005a2d90(pvVar5,param_1);
      if (cVar1 != '\0') goto LAB_1004f2883;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44e = 0;
      uStack_44c = 0x822;
      uStack_44a = 0x7d702f;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    pvVar5 = *(void **)(param_1 + 0x16640);
    if (pvVar5 != (void *)0x0) {
      FUN_1005a2a2c(pvVar5);
      operator_delete(pvVar5);
    }
    *(undefined8 *)(param_1 + 0x16640) = 0;
  }
LAB_1004f2883:
  FUN_1004e1392(param_1,0);
  if ((*(char *)(param_1 + 0x3a4) != '\0') &&
     (FUN_1005bbb13(*(undefined8 *)(param_1 + 0x7168),&cf_com_apple_purplebuddy,&cf_SetupState,
                    &cf_SetupUsingiTunes), 0x6ff < *(ushort *)(param_1 + 100))) {
    FUN_1005bbb13(*(undefined8 *)(param_1 + 0x7168),&cf_com_apple_mobile_iTunes,
                  &cf_iTunesSetupComplete,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
  }
  *(undefined1 *)(param_1 + 0x6aee) = 1;
  *(undefined1 *)(param_1 + 0x6af1) = 1;
  cVar1 = FUN_1004e83ba(param_1,0);
  if (cVar1 != '\0') {
    uVar6 = FUN_1004e7f5c(param_1);
    FUN_100603fea(param_1,(uint)(*(char *)(param_1 + 0x35a) != '\0') << 0x19 | uVar6 | 8);
  }
  if ((param_2 >> 10 & 1) != 0) {
    while ((*(int *)(param_1 + 0x6b0c) != 0 || (*(int *)(param_1 + 0x6b10) != 0))) {
      FUN_1004e32ed();
    }
    FUN_1002a94c0(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_1004dd69c(param_1,"");
LAB_1004f296f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

