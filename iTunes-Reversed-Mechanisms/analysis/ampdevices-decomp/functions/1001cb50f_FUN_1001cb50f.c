// name: FUN_1001cb50f
// address: 1001cb50f

void FUN_1001cb50f(undefined8 param_1,undefined4 param_2,int param_3)

{
  ushort local_264;
  ushort local_262;
  ushort local_260;
  ushort local_25e;
  ushort local_25c;
  ushort local_25a;
  undefined2 local_258 [256];
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    local_258[0] = 0;
  }
  else {
    FUN_100178093(param_3,&local_264);
    _snprintf(local_58,0x20,"%04u-%02u-%02u %02u:%02u:%02u",(ulong)local_264,(ulong)local_262,
              (ulong)local_260,(ulong)local_25e,(ulong)local_25c,(ulong)local_25a);
    FUN_1001e04f5(local_58,local_258);
  }
  FUN_1001cb009(param_1,param_2,local_258);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

