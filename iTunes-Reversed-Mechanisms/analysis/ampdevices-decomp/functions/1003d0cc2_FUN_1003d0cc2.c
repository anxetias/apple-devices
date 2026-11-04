// name: FUN_1003d0cc2
// address: 1003d0cc2

undefined8 FUN_1003d0cc2(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined2 local_258;
  undefined1 local_256 [30];
  undefined1 local_238 [512];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_278);
  FUN_1001b7a44(local_268);
  FUN_10017d489(param_2,local_238);
  FUN_1001e222d(local_238,&local_258);
  FUN_1001b7e14(&local_38,local_256,local_258);
  FUN_1001b80b2(local_268,&local_38);
  FUN_1001b7a50(&local_38);
  FUN_1001b7b04(local_288,"file:///temp.");
  FUN_1001b7a5c(&local_38,local_288);
  FUN_1001bbcfe(&local_38,local_268);
  FUN_1001b80b2(local_278,&local_38);
  FUN_1001b7a50(&local_38);
  FUN_1001b7a50(local_288);
  lVar2 = FUN_1001b8d0c(local_278);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "cfString != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_1001744bd(param_1,lVar2,0);
    FUN_10017060f(lVar2);
  }
  FUN_1001b7a50(local_268);
  FUN_1001b7a50(local_278);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

