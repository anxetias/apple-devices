// name: FUN_1004ffb9b
// address: 1004ffb9b

void FUN_1004ffb9b(undefined4 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_100416f20(*(undefined4 *)(lVar2 + 0x66b0),0x10cc00df);
    FUN_1001b7eb0(local_88,uVar3);
    FUN_1001b7b04(local_78,lVar2 + 0x66);
    FUN_1001bbec4(&local_38,local_88,local_78);
    FUN_1001c334a(local_68,0x5db30003);
    FUN_1001b7b04(local_58,"");
    FUN_1004fda52(local_48,param_1);
    FUN_10044f9f1(&local_38,local_68,local_58,local_48,0);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_68);
    FUN_1001b7a50(&local_38);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_88);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

