// name: FUN_100466182
// address: 100466182

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100466182(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  _DAT_1008bf478 = 0;
  _DAT_1008bf47c = 0;
  _DAT_1008bf480 = 0;
  _DAT_1008bf8a0 = 0;
  ___bzero(&DAT_1008bf488,0x411);
  _DAT_1008bf8f8 = 0;
  uRam00000001008bf900 = 0;
  _DAT_1008bf8e8 = 0;
  uRam00000001008bf8f0 = 0;
  _DAT_1008bf8d8 = 0;
  uRam00000001008bf8e0 = 0;
  _DAT_1008bf8c8 = 0;
  uRam00000001008bf8d0 = 0;
  _DAT_1008bf8b8 = 0;
  uRam00000001008bf8c0 = 0;
  _DAT_1008bf8a8 = 0;
  uRam00000001008bf8b0 = 0;
  _DAT_1008bf908 = 0x3f800000;
  iVar3 = FUN_1001e9c3e(&DAT_1008bf8a0);
  iVar1 = local_2a;
  if (iVar3 == -0x80) goto LAB_1004662ae;
  if (iVar3 == 0) {
    iVar3 = FUN_1003870d4(0x2d,3,&DAT_1008bf478);
    iVar1 = local_2a;
    if (iVar3 == -0x80) goto LAB_1004662ae;
    if (iVar3 == 0) {
      DAT_10088fa18 = &DAT_1008bf478;
      goto LAB_1004662ae;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    iVar1 = local_2a;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    iVar1 = local_2a;
  }
  local_2a = iVar3;
  if (cVar2 != '\0') {
    local_2c = 0x400;
    local_34 = "Assertion failure";
    local_38 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    iVar1 = local_2a;
  }
LAB_1004662ae:
  local_2a = iVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

