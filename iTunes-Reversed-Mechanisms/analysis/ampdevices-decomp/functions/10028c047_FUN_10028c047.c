// name: FUN_10028c047
// address: 10028c047

undefined4 FUN_10028c047(int param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined1 local_2a0 [128];
  undefined4 local_220;
  code *local_218;
  undefined8 local_210;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  if (param_1 < 0x696e6974) {
    uVar1 = 0;
    if (param_1 == 0x41707052) goto LAB_10028c152;
    if (param_1 == 0x636c7220) {
      while (DAT_1008b5bc8 != 0) {
        lVar2 = FUN_1001c281a(&DAT_1008b5bc8);
        if (lVar2 != 0) {
          FUN_1001c64c1(lVar2);
        }
      }
      goto LAB_10028c152;
    }
  }
  else {
    if (param_1 == 0x696e6974) {
      ___bzero(&local_2ac,0x284);
      FUN_1001e4bb2("MPEG Handler",local_2a0);
      local_218 = FUN_10028c177;
      local_210 = *(undefined8 *)(param_2 + 0x1c);
      local_220 = 1;
      local_2ac = 0x90000000a;
      local_2a4 = 0x284;
      uVar1 = (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 8),0x72706c79,&local_2ac);
      goto LAB_10028c152;
    }
    if (param_1 == 0x70727174) goto LAB_10028c152;
  }
  uVar1 = 0xffffffce;
LAB_10028c152:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

