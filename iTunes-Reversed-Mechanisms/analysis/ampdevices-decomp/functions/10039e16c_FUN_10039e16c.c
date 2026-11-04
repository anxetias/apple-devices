// name: FUN_10039e16c
// address: 10039e16c

undefined8 FUN_10039e16c(undefined4 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)FUN_10039a28c();
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  plVar1 = (long *)FUN_10039c016(uVar2,param_1,0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010039e19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
    return uVar2;
  }
  return 0;
}

