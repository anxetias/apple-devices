// name: FUN_1003c57e3
// address: 1003c57e3

undefined8 FUN_1003c57e3(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x20),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001003c57f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

