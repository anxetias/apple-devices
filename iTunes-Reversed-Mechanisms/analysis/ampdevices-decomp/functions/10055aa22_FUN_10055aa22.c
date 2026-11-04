// name: FUN_10055aa22
// address: 10055aa22

undefined8 FUN_10055aa22(int param_1,long param_2)

{
  undefined8 uVar1;
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
    if ((param_1 == 0x41707052) || (param_1 == 0x636c7220)) goto LAB_10055aafb;
  }
  else {
    if (param_1 == 0x70727174) goto LAB_10055aafb;
    if (param_1 == 0x696e6974) {
      ___bzero(&local_2ac,0x284);
      FUN_1001e4bb2("MP4 Decoder",local_2a0);
      local_218 = FUN_100557d68;
      local_210 = *(undefined8 *)(param_2 + 0x1c);
      local_220 = 2;
      local_2ac = 0x90000000a;
      local_2a4 = 0x284;
      uVar1 = (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 8),0x72706c79,&local_2ac);
      goto LAB_10055aafb;
    }
  }
  uVar1 = 0xfffffffc;
LAB_10055aafb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

