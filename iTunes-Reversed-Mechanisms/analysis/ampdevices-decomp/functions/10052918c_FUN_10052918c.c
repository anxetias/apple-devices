// name: FUN_10052918c
// address: 10052918c

void FUN_10052918c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_838 [512];
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001bb41a(param_2,local_238);
  }
  else {
    uVar2 = 0;
  }
  cVar1 = FUN_1001b8428(param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001bb41a(param_3,local_438);
  }
  else {
    uVar3 = 0;
  }
  cVar1 = FUN_1001b8428(param_4);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001bb41a(param_4,local_638);
  }
  else {
    uVar4 = 0;
  }
  cVar1 = FUN_1001b8428(param_5);
  if (cVar1 == '\0') {
    uVar5 = FUN_1001bb41a(param_5,local_838);
  }
  else {
    uVar5 = 0;
  }
  FUN_100529281(param_1,uVar2,uVar3,uVar4,uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

