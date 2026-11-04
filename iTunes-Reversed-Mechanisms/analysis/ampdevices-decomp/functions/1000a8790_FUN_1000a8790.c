// name: FUN_1000a8790
// address: 1000a8790

undefined8
FUN_1000a8790(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_d8 [160];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  switch(param_2 == 0) {
  case false:
    iVar2 = (uint)(param_2 != 0) * 0x58d94b65 + -0x58d94b63;
    bVar3 = param_3 == 0;
                    /* WARNING: Could not recover jumptable at 0x0001000a3b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_1000a8809::caseD_0 +
              *(int *)(&DAT_1006f3e40 + (long)(int)(iVar2 + (uint)bVar3) * 4)))
                      (switchD_1000a8809::caseD_0 +
                       *(int *)(&DAT_1006f3e40 + (long)(int)(iVar2 + (uint)bVar3) * 4),bVar3,0,iVar2
                       ,!bVar3,param_6,param_4,param_5);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

