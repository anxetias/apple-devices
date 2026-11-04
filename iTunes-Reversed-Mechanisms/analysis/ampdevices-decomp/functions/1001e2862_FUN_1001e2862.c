// name: FUN_1001e2862
// address: 1001e2862

void FUN_1001e2862(undefined8 param_1,uint param_2,uint param_3,ulong param_4,ulong param_5)

{
  undefined1 local_5a;
  undefined1 local_59;
  char local_58 [32];
  long local_38;
  
  param_5 = param_5 & 0xffffffff;
  param_4 = param_4 & 0xffffffff;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5a = FUN_1001e7b10();
  local_59 = 0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      _sprintf(local_58,"%u%s%02u",param_4,&local_5a,param_5);
    }
    else {
      _sprintf(local_58,"%u%s%02u%s%02u",(ulong)param_3,&local_5a,param_4,&local_5a,param_5);
    }
  }
  else {
    _sprintf(local_58,"%u%s%02u%s%02u%s%02u",(ulong)param_2,&local_5a,(ulong)param_3,&local_5a,
             param_4,&local_5a,param_5);
  }
  FUN_1001e04f5(local_58,param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

