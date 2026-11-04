// name: FUN_100528802
// address: 100528802

void FUN_100528802(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  char cVar1;
  short *psVar2;
  short *psVar3;
  undefined1 local_468 [32];
  undefined8 local_448;
  short local_438 [256];
  short local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_238[0] = 0;
  local_438[0] = 0;
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 == '\0') {
    FUN_1001bb41a(param_2,local_238);
  }
  cVar1 = FUN_1001b8428();
  if (cVar1 == '\0') {
    psVar2 = local_438;
    FUN_1001bb41a(param_3,psVar2);
    if (local_438[0] == 0) {
      psVar2 = (short *)0x0;
    }
  }
  else {
    psVar2 = (short *)0x0;
  }
  psVar3 = local_238;
  if (local_238[0] == 0) {
    psVar3 = (short *)0x0;
  }
  local_448 = 0;
  FUN_100528162(param_1,psVar3,psVar2,param_4,param_5,local_468,param_6,param_7,param_8,param_9);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

