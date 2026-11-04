// name: FUN_10014f388
// address: 10014f388

undefined8 FUN_10014f388(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_34 = param_2;
  FUN_10013e956(local_30,&local_34,0);
  FUN_10014832a(local_28,&PTR_cf_CancelReason_10083b498,local_30);
  FUN_1001a8f52(param_1,local_28,1);
  FUN_1001ab240(local_20);
  FUN_1001ab240(local_28);
  FUN_1001aae6c(local_30);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

