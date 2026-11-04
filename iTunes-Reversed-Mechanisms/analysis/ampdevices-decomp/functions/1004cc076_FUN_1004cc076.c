// name: FUN_1004cc076
// address: 1004cc076

void FUN_1004cc076(int *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) {
    FUN_1001dfb1f(param_2,local_128,0xff);
    piVar1 = param_1 + 0x406;
    FUN_1001df0f0(local_128,piVar1);
    FUN_1001df147("#",piVar1);
    cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#",1);
    if (cVar2 != '\0') {
      FUN_1001c62d9(param_1 + 0x546,0x1a60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

