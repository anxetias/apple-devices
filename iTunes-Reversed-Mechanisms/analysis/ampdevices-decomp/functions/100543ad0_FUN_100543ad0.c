// name: FUN_100543ad0
// address: 100543ad0

bool FUN_100543ad0(long param_1,char param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined8 local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [50];
  undefined4 local_19e;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  lVar4 = FUN_1004e8236();
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "syncServicePrefs != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    bVar7 = false;
  }
  else {
    if (*(long *)(lVar4 + 0x20) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x11090001;
      if (*(char *)(*(long *)(lVar4 + 0x20) + 0x48) == '\0') {
        uVar6 = 0;
      }
    }
    if ((*(long *)(lVar4 + 0x28) != 0) && (*(char *)(*(long *)(lVar4 + 0x28) + 0x48) != '\0')) {
      uVar6 = uVar6 | 0x11090002;
    }
    if ((*(long *)(lVar4 + 0x30) != 0) && (*(char *)(*(long *)(lVar4 + 0x30) + 0x48) != '\0')) {
      uVar6 = uVar6 | 0x11090004;
    }
    if ((*(long *)(lVar4 + 0x38) == 0) || (*(char *)(*(long *)(lVar4 + 0x38) + 0x48) == '\0')) {
      if (uVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "dataClassesStrIndex != 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        uVar6 = 0;
        FUN_1001782e9(0,0);
      }
    }
    else {
      uVar6 = uVar6 | 0x11090010;
    }
    FUN_1001c334a(local_288,uVar6);
    FUN_1004fda52(local_278,*(undefined4 *)(param_1 + 0x28));
    FUN_1004f0e83(param_1,&local_238);
    FUN_1001b8dfc(local_268,&local_238);
    uVar1 = *(undefined4 *)(param_1 + 0x66b0);
    if (param_2 == '\0') {
      FUN_10044eef2(&local_238);
      uVar5 = FUN_100416f20(uVar1,0x10cc01ad);
      FUN_1001b7eb0(local_258,uVar5);
      FUN_1001bbf68(local_248,local_258,local_268,local_288);
      FUN_1001b80b2(local_210,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_258);
      uVar5 = FUN_100416f20(uVar1,0x10cc01ae);
      FUN_1001b81f2(local_200,uVar5);
      uVar5 = FUN_100416f20(uVar1,0x10cc01af);
      FUN_1001b7eb0(local_248,uVar5);
      FUN_1001bbcfe(local_200,local_248);
      FUN_1001b7a50(local_248);
      local_234 = (char *)CONCAT44(local_234._4_4_,8);
      FUN_1001c334a(local_248,0x10cf001e);
      FUN_1001b80b2(local_1f0,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x10cf001f);
      FUN_1001b80b2(local_1e0,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x5db30004);
      FUN_1001b80b2(local_1d0,local_248);
      FUN_1001b7a50(local_248);
      local_19e = 0x30003;
      FUN_1001b8172((long)&local_234 + 4,local_278);
      sVar3 = FUN_10044f1a0(&local_238);
      FUN_10020dfaa(&local_238);
      *param_3 = sVar3 == 2;
      bVar7 = sVar3 != 3;
    }
    else {
      FUN_10044eef2(&local_238);
      uVar5 = FUN_100416f20(uVar1,0x10cc01ad);
      FUN_1001b7eb0(local_258,uVar5);
      FUN_1001bbf68(local_248,local_258,local_268,local_288);
      FUN_1001b80b2(local_210,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_258);
      uVar5 = FUN_100416f20(uVar1,0x10cc01af);
      FUN_1001b81f2(local_200,uVar5);
      FUN_1001c334a(local_248,0x10cf001f);
      FUN_1001b80b2(local_1f0,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x5db30004);
      FUN_1001b80b2(local_1e0,local_248);
      FUN_1001b7a50(local_248);
      local_19e = 0x20002;
      FUN_1001b8172((long)&local_234 + 4,local_278);
      sVar3 = FUN_10044f1a0(&local_238);
      FUN_10020dfaa(&local_238);
      bVar7 = sVar3 == 1;
      *param_3 = bVar7;
    }
    FUN_1001b7a50(local_268);
    FUN_1001b7a50(local_278);
    FUN_1001b7a50(local_288);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar7;
}

