// name: FUN_1001e279d
// address: 1001e279d

void FUN_1001e279d(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 local_5a;
  undefined1 local_59;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5a = FUN_1001e7b10();
  local_59 = 0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      _sprintf(local_58,"%u",(ulong)param_4);
    }
    else {
      _sprintf(local_58,"%u%s%02u",(ulong)param_3,&local_5a,(ulong)param_4);
    }
  }
  else {
    _sprintf(local_58,"%u%s%02u%s%02u",(ulong)param_2,&local_5a,(ulong)param_3,&local_5a,param_4);
  }
  FUN_1001e04f5(local_58,param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

