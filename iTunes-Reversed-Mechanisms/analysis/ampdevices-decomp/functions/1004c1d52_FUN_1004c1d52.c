// name: FUN_1004c1d52
// address: 1004c1d52

undefined8 FUN_1004c1d52(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x340))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001004c1d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1,param_2);
    return uVar2;
  }
  return 0x234e;
}

