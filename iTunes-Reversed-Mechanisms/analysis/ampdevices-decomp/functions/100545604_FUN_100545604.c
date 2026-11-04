// name: FUN_100545604
// address: 100545604

bool FUN_100545604(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  undefined1 local_210 [16];
  undefined1 local_200 [48];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [112];
  undefined1 local_150 [48];
  undefined4 local_120;
  undefined1 local_11a;
  undefined1 local_117;
  undefined1 local_10d;
  undefined1 local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_248);
  if (param_4 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "backupPassword != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    bVar5 = false;
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x66b0);
    FUN_1001b7eb0(local_258,param_3);
    FUN_1005d4cc2(&local_228);
    FUN_1001c334a(local_238,0x10cf001c);
    FUN_1001b80b2(local_210,local_238);
    FUN_1001b7a50(local_238);
    uVar4 = FUN_100416f20(uVar1,(param_2 & 0xff) + 0x10cc0215);
    FUN_1001b81f2(local_200,uVar4);
    FUN_1001c334a(local_238,0x5db30003);
    FUN_1001b80b2(local_1d0,local_238);
    FUN_1001b7a50(local_238);
    FUN_1001c334a(local_238,0x5db30004);
    FUN_1001b80b2(local_1c0,local_238);
    FUN_1001b7a50(local_238);
    local_120 = 0x20001;
    FUN_1001b8172(local_58,local_248);
    local_11a = 1;
    local_117 = 0;
    local_10d = 1;
    FUN_1001b8172(local_150,local_258);
    sVar3 = FUN_1005d5016(&local_228);
    FUN_1001b8172(local_248,local_58);
    FUN_10021811e(&local_228);
    FUN_1001b7a50(local_258);
    if (sVar3 != 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1001b8d0c(local_248);
    }
    bVar5 = sVar3 == 1;
    *param_4 = uVar4;
  }
  FUN_1001b7a50(local_248);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

