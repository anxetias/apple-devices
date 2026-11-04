// name: FUN_1001e3e43
// address: 1001e3e43

undefined1 FUN_1001e3e43(short *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ushort local_228;
  undefined1 local_226 [510];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e222d(param_1,&local_228);
  if ((local_228 == 0) ||
     ((param_2 != (undefined2 *)0x0 &&
      (cVar1 = FUN_1001e339d(param_2 + 1,*param_2,local_226,local_228,1), cVar1 == '\0')))) {
    uVar2 = 0;
  }
  else {
    *param_1 = *param_1 + ~local_228;
    uVar2 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

