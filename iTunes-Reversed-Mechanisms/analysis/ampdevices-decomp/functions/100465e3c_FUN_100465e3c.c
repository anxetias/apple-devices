// name: FUN_100465e3c
// address: 100465e3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100465e3c(void)

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
  _DAT_1008befd8 = 0;
  _DAT_1008befdc = 0;
  _DAT_1008befe0 = 0;
  _DAT_1008bf400 = 0;
  ___bzero(&DAT_1008befe8,0x411);
  _DAT_1008bf458 = 0;
  DAT_1008bf460 = 0;
  _DAT_1008bf448 = 0;
  uRam00000001008bf450 = 0;
  _DAT_1008bf438 = 0;
  uRam00000001008bf440 = 0;
  _DAT_1008bf428 = 0;
  uRam00000001008bf430 = 0;
  _DAT_1008bf418 = 0;
  uRam00000001008bf420 = 0;
  _DAT_1008bf408 = 0;
  uRam00000001008bf410 = 0;
  _DAT_1008bf468 = 0x3f800000;
  iVar3 = FUN_1001e9c3e(&DAT_1008bf400);
  iVar1 = local_2a;
  if (iVar3 == -0x80) goto LAB_100465f68;
  if (iVar3 == 0) {
    iVar3 = FUN_1003870d4(0x2d,3,&DAT_1008befd8);
    iVar1 = local_2a;
    if (iVar3 == -0x80) goto LAB_100465f68;
    if (iVar3 == 0) {
      DAT_1008befd0 = &DAT_1008befd8;
      goto LAB_100465f68;
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
LAB_100465f68:
  local_2a = iVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

