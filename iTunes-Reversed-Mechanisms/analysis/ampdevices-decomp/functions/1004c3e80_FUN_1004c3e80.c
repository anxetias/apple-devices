// name: FUN_1004c3e80
// address: 1004c3e80

undefined8 FUN_1004c3e80(long *param_1)

{
  undefined8 uVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_stack_00000020;
  
  (**(code **)(*param_1 + 0x188))(param_1,in_R9,in_R8);
  if (in_stack_00000020 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c3eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 400))(param_1,in_stack_00000020);
    return uVar1;
  }
  return 0;
}

