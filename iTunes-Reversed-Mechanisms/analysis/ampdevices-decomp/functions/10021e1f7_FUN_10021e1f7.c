// name: FUN_10021e1f7
// address: 10021e1f7

undefined8 FUN_10021e1f7(int param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined1 local_2a0 [68];
  code *local_25c;
  undefined8 local_254;
  undefined1 local_24c [128];
  undefined1 local_1cc [128];
  undefined1 local_14c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  if (param_1 < 0x696e6974) {
    if ((param_1 == 0x41707052) || (param_1 == 0x636c7220)) goto LAB_10021e2f2;
  }
  else {
    if (param_1 == 0x70727174) goto LAB_10021e2f2;
    if (param_1 == 0x696e6974) {
      ___bzero(&local_2ac,0x284);
      FUN_1001dfbb3("AAC Encoder",local_2a0,0x40);
      FUN_1001c34b7(0x13890001,local_1cc);
      FUN_1001c34b7(0x13890002,local_24c);
      local_25c = FUN_10021d24a;
      local_14c = 2;
      local_254 = *(undefined8 *)(param_2 + 0x1c);
      local_2ac = 0x90000000a;
      local_2a4 = 0x284;
      uVar1 = (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 8),0x72656e63,&local_2ac);
      goto LAB_10021e2f2;
    }
  }
  uVar1 = 0xfffffffc;
LAB_10021e2f2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

