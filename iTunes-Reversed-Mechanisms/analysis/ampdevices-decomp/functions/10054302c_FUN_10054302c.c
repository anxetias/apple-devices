// name: FUN_10054302c
// address: 10054302c

bool FUN_10054302c(long param_1,char param_2,undefined1 *param_3,char *param_4)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
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
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [18];
  undefined4 local_19e;
  char local_98;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_2b8);
  FUN_1001b7a44(local_2a8);
  FUN_1001b7a44(local_298);
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "dontAskAgain == nullptr || *dontAskAgain == false";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == (undefined1 *)0x0 && param_2 != '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "needToReverseSync == false || doReverseSync != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  FUN_1004fda52(local_278,*(undefined4 *)(param_1 + 0x28));
  FUN_1004f0e83(param_1,&local_238);
  FUN_1001b8dfc(local_268,&local_238);
  FUN_1001b7b04(local_288,param_1 + 0x14e90);
  uVar1 = *(undefined4 *)(param_1 + 0x66b0);
  if (param_2 == '\0') {
    FUN_10044eef2(&local_238);
    bVar3 = FUN_1001b8428(local_288);
    FUN_1001c334a(local_258,0x10cf004e - (uint)bVar3);
    FUN_1001bbf68(local_248,local_258,local_268,local_288);
    FUN_1001b80b2(local_210,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_258);
    uVar5 = FUN_100416f20(uVar1,0x10cc00ab);
    FUN_1001b81f2(local_200,uVar5);
    FUN_1001c334a(local_248,0x10cf0009);
    FUN_1001b80b2(local_1f0,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001c334a(local_248,0x5db30004);
    FUN_1001b80b2(local_1e0,local_248);
    FUN_1001b7a50(local_248);
    local_19e = 0x20002;
    FUN_1001b8172((long)&local_234 + 4,local_278);
    if (param_4 != (char *)0x0) {
      FUN_1001c334a(local_248,0x5db30013);
      FUN_1001b80b2(local_1b0,local_248);
      FUN_1001b7a50(local_248);
    }
    sVar4 = FUN_10044f1a0(&local_238);
    if (param_4 != (char *)0x0) {
      *param_4 = local_98;
    }
    FUN_10020dfaa(&local_238);
  }
  else {
    FUN_10044eef2(&local_238);
    uVar5 = FUN_100416f20(uVar1,0x10cc00ac);
    FUN_1001b7eb0(local_258,uVar5);
    FUN_1001bbec4(local_248,local_258,local_268);
    FUN_1001b80b2(local_210,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_258);
    uVar5 = FUN_100416f20(uVar1,0x10cc00ad);
    FUN_1001b81f2(local_200,uVar5);
    FUN_1001c334a(local_248,0x10cf0009);
    FUN_1001b80b2(local_1f0,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001c334a(local_248,0x10cf0008);
    FUN_1001b80b2(local_1e0,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001c334a(local_248,0x5db30004);
    FUN_1001b80b2(local_1d0,local_248);
    FUN_1001b7a50(local_248);
    local_19e = 0x30003;
    if (param_4 != (char *)0x0) {
      FUN_1001c334a(local_248,0x5db30013);
      FUN_1001b80b2(local_1b0,local_248);
      FUN_1001b7a50(local_248);
    }
    local_234 = (char *)CONCAT44(local_234._4_4_,8);
    FUN_1001b8172((long)&local_234 + 4,local_278);
    sVar4 = FUN_10044f1a0(&local_238);
    if (param_4 != (char *)0x0) {
      *param_4 = local_98;
    }
    FUN_10020dfaa(&local_238);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = sVar4 == 2;
    }
  }
  if (sVar4 == 1) {
    cVar2 = FUN_100505505(*(undefined4 *)(param_1 + 0x28),1);
    if (cVar2 == '\0') {
      bVar6 = true;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x66b0);
      FUN_10044eef2(&local_238);
      uVar5 = FUN_100416f20(uVar1,0x10cc0208);
      FUN_1001b7eb0(local_258,uVar5);
      FUN_1001bbec4(local_248,local_258,local_268);
      FUN_1001b80b2(local_210,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_258);
      FUN_1001c334a(local_248,0x10cf0052);
      FUN_1001bbcfe(local_210,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x5db3000e);
      FUN_1001b80b2(local_1f0,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001c334a(local_248,0x5db30004);
      FUN_1001b80b2(local_1e0,local_248);
      FUN_1001b7a50(local_248);
      local_19e = 0x20002;
      FUN_1001b8172((long)&local_234 + 4,local_278);
      sVar4 = FUN_10044f1a0(&local_238);
      FUN_10020dfaa(&local_238);
      bVar6 = sVar4 == 1;
    }
  }
  else {
    bVar6 = false;
  }
  FUN_1001b7a50(local_288);
  FUN_1001b7a50(local_268);
  FUN_1001b7a50(local_278);
  FUN_1001b7a50(local_298);
  FUN_1001b7a50(local_2a8);
  FUN_1001b7a50(local_2b8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

