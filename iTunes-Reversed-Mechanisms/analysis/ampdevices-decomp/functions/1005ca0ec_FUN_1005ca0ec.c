// name: FUN_1005ca0ec
// address: 1005ca0ec

long FUN_1005ca0ec(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 local_298 [4];
  undefined4 local_288 [4];
  undefined1 local_278 [16];
  undefined4 local_268 [4];
  undefined4 local_258 [4];
  undefined4 local_248 [4];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar8 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (lVar8 != 0) {
      iVar1 = *(int *)(param_1 + 0x152d8);
      if ((iVar1 + 0x80U & 0xffffff7f) != 0) {
        FUN_1004f0e83(param_1,&local_238);
        FUN_1001b8dfc(local_278,&local_238);
        if (iVar1 < 0x457) {
          if (iVar1 == -0x22) {
            uVar9 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),
                                  (uint)(*(char *)(param_1 + 0x14cdb) != '\x01') * 3 + 0x10cc0002);
            FUN_1001b7eb0(local_258,uVar9);
            FUN_1001bbec4(&local_238,local_258,local_278);
            FUN_1001b7a44(local_248);
            FUN_1001b7a44(local_268);
            FUN_1005cd433(lVar8,&local_238,local_248,local_268,0xfffffff5);
LAB_1005ca62b:
            FUN_1001b7a50(local_268);
            FUN_1001b7a50(local_248);
            puVar12 = &local_238;
          }
          else {
            if (iVar1 != 0x455) {
              if (iVar1 != 0x456) {
LAB_1005ca3da:
                lVar13 = *(long *)(param_1 + 0x151a0);
                if (lVar13 == 0) {
                  uVar9 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar6 != '\0') {
                    local_238 = 0x8220202;
                    local_234 = "Assertion failure";
                    local_22c = 0x822;
                    local_22a = "photoPrefs != nullptr";
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar14 = *(undefined4 *)(param_1 + 0x66b0);
LAB_1005ca763:
                  FUN_1001b7a44(&local_238);
                  FUN_1005cad73(lVar8,uVar14,local_278,iVar1,&local_238);
                }
                else {
                  uVar14 = *(undefined4 *)(param_1 + 0x66b0);
                  if (iVar1 - 0x450U < 2) {
                    uVar9 = FUN_100416f20(uVar14,(uint)(iVar1 != 0x450) * 8 + 0x10cc006e);
                    FUN_1001b7eb0(&local_238,uVar9);
                    FUN_1001b7a44(local_258);
                    lVar13 = lVar13 + 0x4c0;
                    cVar6 = FUN_1001b8428(lVar13);
                    if (cVar6 == '\0') {
                      FUN_1001bbf68(local_248,&local_238,local_278,lVar13);
                      FUN_1001b80b2(local_258,local_248);
                      puVar12 = local_248;
                    }
                    else {
                      FUN_1001c334a(local_268,0x10cf004a);
                      FUN_1001bbf68(local_248,&local_238,local_278,local_268);
                      FUN_1001b80b2(local_258,local_248);
                      FUN_1001b7a50(local_248);
                      puVar12 = local_268;
                    }
                    FUN_1001b7a50(puVar12);
                    FUN_1001b7a44(local_248);
                    FUN_1001b7a44(local_268);
                    FUN_1005cd433(lVar8,local_258,local_248,local_268,iVar1);
                    FUN_1001b7a50(local_268);
                  }
                  else if (iVar1 == 0x45c) {
                    uVar9 = FUN_100416f20(uVar14,0x10cc0070);
                    FUN_1001b7eb0(local_258,uVar9);
                    FUN_1001bbec4(&local_238,local_258,local_278);
                    FUN_1001b7a50(local_258);
                    FUN_1001b7a44(local_258);
                    FUN_1001b7a44(local_248);
                    FUN_1005cd433(lVar8,&local_238,local_258,local_248,0xfffffff5);
                  }
                  else {
                    if (iVar1 != 0x47b) goto LAB_1005ca763;
                    uVar9 = FUN_100416f20(uVar14,0x10cc006f);
                    FUN_1001b7eb0(&local_238,uVar9);
                    FUN_1001b7a44(local_258);
                    FUN_1001b7a44(local_248);
                    FUN_1005cd433(lVar8,&local_238,local_258,local_248,0xfffffff5);
                  }
                  FUN_1001b7a50(local_248);
                  FUN_1001b7a50(local_258);
                }
                goto LAB_1005caa47;
              }
              uVar9 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc006b);
              FUN_1001b7eb0(local_258,uVar9);
              FUN_1001bbec4(&local_238,local_258,local_278);
              FUN_1001b7a44(local_248);
              FUN_1001b7a44(local_268);
              FUN_1005cd433(lVar8,&local_238,local_248,local_268,0xfffffff5);
              goto LAB_1005ca62b;
            }
            FUN_1001b7a44(local_258);
            FUN_1001b7a44(local_248);
            FUN_1001b7a44(local_268);
            uVar3 = *(ulong *)(param_1 + 0x157a8);
            uVar4 = *(ulong *)(param_1 + 0x157b0);
            bVar15 = -1 < (long)(uVar3 | uVar4);
            uVar7 = (uint)((long)uVar4 < (long)uVar3 && bVar15);
            uVar10 = 0x10cc0005;
            if (-1 < (long)(uVar3 | uVar4)) {
              uVar10 = uVar7 ^ 0x10cc0007;
            }
            uVar11 = 0x10cc0002;
            if (-1 < (long)(uVar3 | uVar4)) {
              uVar11 = 0x10cc0004 - uVar7;
            }
            if (*(char *)(param_1 + 0x14cdb) != '\x01') {
              uVar11 = uVar10;
            }
            uVar9 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),uVar11);
            FUN_1001b81f2(local_248,uVar9);
            FUN_1004f0e83(param_1,&local_238);
            FUN_1001b8dfc(local_288,&local_238);
            FUN_1001b80b2(local_258,local_288);
            FUN_1001b7a50(local_288);
            if (bVar15) {
              if (uVar3 - uVar4 == 0 || (long)uVar3 < (long)uVar4) {
                FUN_1001e17d3(local_288,uVar3,0,0);
                FUN_1001e17d3(local_298,uVar4,0,0);
                FUN_1001bc048(&local_238,local_248,local_258,local_288,local_298);
                FUN_1001b80b2(local_248,&local_238);
                FUN_1001b7a50(&local_238);
                puVar12 = local_298;
              }
              else {
                FUN_1001e17d3(local_288,uVar3 - uVar4,0,0);
                FUN_1001bbf68(&local_238,local_248,local_258,local_288);
                FUN_1001b80b2(local_248,&local_238);
                puVar12 = &local_238;
              }
              FUN_1001b7a50(puVar12);
              puVar12 = local_288;
            }
            else {
              FUN_1001bbec4(&local_238,local_248,local_258);
              FUN_1001b80b2(local_248,&local_238);
              puVar12 = &local_238;
            }
            FUN_1001b7a50(puVar12);
            FUN_1001b7a44(&local_238);
            FUN_1005cd433(lVar8,local_248,local_268,&local_238,0xfffffff5);
            FUN_1001b7a50(&local_238);
            *(undefined8 *)(param_1 + 0x157b8) = 0;
            *(undefined8 *)(param_1 + 88000) = 0;
            *(undefined8 *)(param_1 + 0x157a8) = 0;
            *(undefined8 *)(param_1 + 0x157b0) = 0;
            *(undefined8 *)(param_1 + 0x157c8) = 0;
            FUN_1001b7a50(local_268);
            puVar12 = local_248;
          }
          FUN_1001b7a50(puVar12);
          puVar12 = local_258;
        }
        else {
          if (iVar1 == 0x457) {
            uVar9 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0075);
            FUN_1001b7eb0(local_258,uVar9);
            FUN_1001bbec4(&local_238,local_258,local_278);
            FUN_1001b7a44(local_248);
            FUN_1001b7a44(local_268);
            FUN_1005cd433(lVar8,&local_238,local_248,local_268,0xfffffff5);
            goto LAB_1005ca62b;
          }
          if (iVar1 == 0x46c) {
            uVar9 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0227);
            FUN_1001b7eb0(local_258,uVar9);
            FUN_1001bbec4(&local_238,local_258,local_278);
            FUN_1001b7a44(local_248);
            FUN_1001b7a44(local_268);
            FUN_1005cd433(lVar8,&local_238,local_248,local_268,0xfffffff5);
            goto LAB_1005ca62b;
          }
          if (iVar1 != 0x48d) goto LAB_1005ca3da;
          uVar14 = *(undefined4 *)(param_1 + 0x66b0);
          FUN_1001b7eb0(&local_238,*(undefined8 *)(param_1 + 0x16850));
          FUN_1005cad73(lVar8,uVar14,local_278,0x48d,&local_238);
LAB_1005caa47:
          puVar12 = &local_238;
        }
        FUN_1001b7a50(puVar12);
        FUN_1001b7a50(local_278);
        *(undefined4 *)(param_1 + 0x152d8) = 0;
      }
      if ((*(int *)(param_1 + 0x152e0) + 0x80U & 0xffffff7f) != 0) {
        uVar14 = *(undefined4 *)(param_1 + 0x66b0);
        FUN_1004f0e83(param_1,&local_238);
        FUN_1001b8dfc(local_258,&local_238);
        uVar2 = *(undefined4 *)(param_1 + 0x152e0);
        FUN_1001b7a44(&local_238);
        FUN_1005cad73(lVar8,uVar14,local_258,uVar2,&local_238);
        FUN_1001b7a50(&local_238);
        FUN_1001b7a50(local_258);
        *(undefined4 *)(param_1 + 0x152e0) = 0;
      }
      if (*(long *)(param_1 + 0x157f8) != 0) {
        FUN_1005caf87(lVar8,param_1);
        pvVar5 = *(void **)(param_1 + 0x157f8);
        if (pvVar5 != (void *)0x0) {
          FUN_1003380d0(pvVar5);
          operator_delete(pvVar5);
        }
        *(undefined8 *)(param_1 + 0x157f8) = 0;
      }
      uVar9 = FUN_1001c156e();
      FUN_1001c6987(uVar9,0x69706572,*(undefined4 *)(param_1 + 0x28),0,0);
      goto LAB_1005cab4f;
    }
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "syncErrors != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar8 = 0;
LAB_1005cab4f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

