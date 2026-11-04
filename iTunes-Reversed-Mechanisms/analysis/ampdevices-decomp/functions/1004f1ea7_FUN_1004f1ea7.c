// name: FUN_1004f1ea7
// address: 1004f1ea7

void FUN_1004f1ea7(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  short local_448 [256];
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1004f0e83(param_2,local_448);
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x400;
      local_23a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x12);
    }
    goto LAB_1004f2069;
  }
  uVar3 = FUN_100416f20(*(undefined4 *)(param_2 + 0x66b0),0x10cc007b);
  FUN_1001e115f(uVar3,local_228);
  cVar1 = FUN_1001e3edc(local_448,local_228,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_1001e4e7c("iPod touch",local_448,1);
    if (cVar1 != '\0') goto LAB_1004f1fa4;
    if (local_448[0] != 0) goto LAB_1004f2069;
  }
  else {
LAB_1004f1fa4:
    local_448[0] = 0;
  }
  FUN_1001eb330(&local_248,0);
  cVar1 = FUN_1001b8428(&local_248);
  if (cVar1 == '\0') {
    uVar3 = FUN_100416f20(*(undefined4 *)(param_2 + 0x66b0),0x10cc007a);
    FUN_1001b7eb0(local_458,uVar3);
    FUN_1001bbec4(local_468,local_458,&local_248);
    FUN_1001bb41a(local_468,local_448);
    FUN_1001b7a50(local_468);
    FUN_1001b7a50(local_458);
  }
  FUN_1001b7a50(&local_248);
  if (local_448[0] == 0) {
    FUN_1001e1c39(local_228,local_448);
  }
LAB_1004f2069:
  FUN_1001b8dfc(param_1,local_448);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

