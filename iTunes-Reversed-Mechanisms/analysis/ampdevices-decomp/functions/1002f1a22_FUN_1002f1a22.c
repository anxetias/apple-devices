// name: FUN_1002f1a22
// address: 1002f1a22

long FUN_1002f1a22(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_470 [1080];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002f1c1d(param_1,local_470);
  if (iVar2 == 0) {
    lVar4 = FUN_1002f1f37(local_470,param_2);
    FUN_1002f315b(local_470);
    if (lVar4 != 0) goto LAB_1002f1a98;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "metadataDict != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1002f1a98:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

