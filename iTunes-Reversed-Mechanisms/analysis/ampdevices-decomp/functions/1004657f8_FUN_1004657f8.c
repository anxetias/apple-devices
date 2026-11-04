// name: FUN_1004657f8
// address: 1004657f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004657f8(void)

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
  _DAT_1008be688 = 0;
  _DAT_1008be68c = 0;
  _DAT_1008be690 = 0;
  _DAT_1008beab0 = 0;
  ___bzero(&DAT_1008be698,0x411);
  _DAT_1008beb08 = 0;
  DAT_1008beb10 = 0;
  _DAT_1008beaf8 = 0;
  uRam00000001008beb00 = 0;
  _DAT_1008beae8 = 0;
  uRam00000001008beaf0 = 0;
  _DAT_1008bead8 = 0;
  uRam00000001008beae0 = 0;
  _DAT_1008beac8 = 0;
  uRam00000001008bead0 = 0;
  _DAT_1008beab8 = 0;
  uRam00000001008beac0 = 0;
  _DAT_1008beb18 = 0x3f800000;
  iVar3 = FUN_1001e9c3e(&DAT_1008beab0);
  iVar1 = local_2a;
  if (iVar3 == -0x80) goto LAB_100465924;
  if (iVar3 == 0) {
    iVar3 = FUN_1003870d4(0x2d,3,&DAT_1008be688);
    iVar1 = local_2a;
    if (iVar3 == -0x80) goto LAB_100465924;
    if (iVar3 == 0) {
      DAT_1008be680 = &DAT_1008be688;
      goto LAB_100465924;
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
LAB_100465924:
  local_2a = iVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

