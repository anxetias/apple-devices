// name: FUN_1004317ff
// address: 1004317ff

undefined8 FUN_1004317ff(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 1;
  if (((*(char *)(param_1 + 0x35c) != '\0') && (*(char *)(param_1 + 0x36d) != '\0')) &&
     (*(char *)(param_1 + 0x6abf) == '\0')) {
    cVar1 = FUN_10054302c(param_1,0,0,0);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_1004dccf5(param_1,"");
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      FUN_100430bbe(param_1,1);
      FUN_10043044c(param_1,*(undefined1 *)(param_1 + 0x14cda));
      FUN_1004ef324(param_1,9,1);
      FUN_1004dd69c(param_1,"");
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

