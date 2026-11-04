// name: FUN_1004f3c62
// address: 1004f3c62

undefined8
FUN_1004f3c62(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  undefined4 local_25c;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = *(long *)(param_1 + 0x30);
  local_25c = param_3;
  if (lVar7 != 0) {
    if (*(short *)(lVar7 + 0x27b0) != 0) {
      uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0));
      FUN_1001b7eb0(local_258,uVar6);
      FUN_1004f0e83(param_1,&local_238);
      FUN_1001b8dfc(local_2a0,&local_238);
      FUN_1001bbec4(&local_248,local_258,local_2a0);
      FUN_1001c334a(&local_238,param_4);
      FUN_1001c334a(local_290,0x5db30004);
      FUN_1004fda52(local_280,*(undefined4 *)(param_1 + 0x28));
      sVar4 = FUN_10044f9f1(&local_248,&local_238,local_290,local_280,0);
      FUN_1001b7a50(local_280);
      FUN_1001b7a50(local_290);
      FUN_1001b7a50(&local_238);
      FUN_1001b7a50(&local_248);
      FUN_1001b7a50(local_2a0);
      FUN_1001b7a50(local_258);
      uVar6 = 0x462;
      if (sVar4 != 1) goto LAB_1004f3ef8;
      lVar7 = *(long *)(param_1 + 0x30);
    }
    cVar2 = FUN_100316309(lVar7,0xf);
    if (cVar2 != '\0') {
      FUN_100316f84(*(undefined8 *)(param_1 + 0x30),0,0,0);
      FUN_1004e7a5c(param_1);
    }
  }
  uVar6 = 0;
  if (*(char *)(param_1 + 0x6abd) == '\0') goto LAB_1004f3ef8;
  bVar1 = true;
  if (*(char *)(param_1 + 0x6ad7) != '\0') {
    cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
    if (cVar2 != '\0') {
      FUN_1004dccf5(param_1,"");
      bVar1 = false;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_100315cf3();
  }
  if (!bVar1) {
    local_248 = 0;
    uStack_240 = 0;
    *(undefined1 *)(param_1 + 0x6ad8) = 1;
    cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    if ((cVar2 != '\0') || (*(char *)(param_1 + 0x151d0) == '\0')) {
      cVar2 = FUN_1004ef2b5(param_1);
      FUN_1004ef324(param_1,9 - (ulong)(cVar2 == '\0'),1);
    }
    FUN_1004e7a5c(param_1);
    FUN_1004dd69c(param_1,"");
    cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    if (((cVar2 == '\0') || (*(char *)(param_1 + 0x14cd8) == '\0')) ||
       (*(char *)(param_1 + 0x14cef) != '\0')) {
LAB_1004f3eb8:
      if (*(char *)(param_1 + 0x6ad7) != '\0') {
        cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
        if (cVar2 != '\0') {
          iVar5 = FUN_1004e48c6(param_1);
          if (iVar5 == 0) {
            if (param_5 == '\0') {
              iVar5 = FUN_100265f2b(*(undefined8 *)(param_1 + 0x66d8));
            }
            else {
              iVar5 = FUN_100265e57();
            }
            *(undefined1 *)(param_1 + 0x6ad8) = 0;
            if (iVar5 != 0) {
              uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),local_25c);
              FUN_1001b7eb0(&local_248,uVar6);
              FUN_1004f0e83(param_1,&local_238);
              FUN_1001b8dfc(local_258,&local_238);
              FUN_1004fda52(&local_238,*(undefined4 *)(param_1 + 0x28));
              FUN_100450a08(&local_248,local_258,&local_238);
              FUN_1001b7a50(&local_238);
              FUN_1001b7a50(local_258);
              FUN_1001b7a50(&local_248);
              uVar6 = 0x465;
              goto LAB_1004f3ef8;
            }
            goto LAB_1004f3ef0;
          }
          FUN_100507f87(param_1);
        }
      }
    }
    else {
      lVar7 = FUN_100172796();
      lVar8 = FUN_1001727a0();
      if (lVar7 != lVar8) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "JRCFRunLoopGetCurrent() == JRCFRunLoopGetMain()";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      local_268 = (double)FUN_1001ebd46();
      local_268 = local_268 + DAT_1007106d0;
      uVar9 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
      while (*(char *)(param_1 + 0x6ad7) != '\0') {
        cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
        if (cVar2 == '\0') goto LAB_1004f3eb8;
        dVar10 = (double)FUN_1001ebd46();
        if (local_268 <= dVar10) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar2 != '\0') {
            local_238 = local_238 & 0xffff0000;
            __os_log_impl(0x100000000,uVar9,0x10,"timed out waiting for iPod to unmount!",&local_238
                          ,2);
          }
          goto LAB_1004f3eb8;
        }
        local_270 = dVar10;
        bVar3 = FUN_10039e077(*(undefined4 *)(param_1 + 0x28),1,0);
        iVar5 = FUN_1001727b4(local_268 - local_270,uVar9,bVar3 ^ 1);
        if (iVar5 == 3) goto LAB_1004f3eb8;
        FUN_1001820e5(0);
      }
    }
    *(undefined1 *)(param_1 + 0x6ad8) = 0;
  }
LAB_1004f3ef0:
  FUN_100507e3a(param_1);
LAB_1004f3ef8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

