// name: FUN_100184a38
// address: 100184a38

int FUN_100184a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_670;
  undefined1 *local_668;
  undefined1 *local_640;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001bb41a(param_2,local_238);
  cVar1 = FUN_1001b8428(param_3);
  if (cVar1 == '\0') {
    puVar3 = local_438;
    FUN_1001bb41a(param_3,puVar3);
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  FUN_1001c62d9(&local_670,0x38);
  local_640 = local_638;
  local_670 = local_238;
  local_668 = puVar3;
  iVar2 = FUN_10018166a(param_1);
  if (iVar2 == 0) {
    FUN_1001b8dfc(&local_670,local_638);
    FUN_1001b80b2(param_4,&local_670);
    FUN_1001b7a50(&local_670);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

